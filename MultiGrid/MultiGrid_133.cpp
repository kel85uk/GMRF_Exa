#include "MultiGrid/MultiGrid.h"
void Solve_GMRF() {
static int sample = 0;
std::default_random_engine generator(mpiRank + sample++);
std::normal_distribution<double> distribution(0.0, 1.0);
auto randn = std::bind ( distribution, generator );
double tau2 = (myGamma(nu)/((((myGamma((nu+5.000000e-01))*pow((M_PI*4.000000e+00), (dim/2.000000e+00)))*pow(kappa, (nu*2)))*sigma)*sigma));
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[0]) {
for (int y = iterationOffsetBegin[0][1]; (y<(iterationOffsetEnd[0][1]+257)); y += 1) {
double* fieldData_RHS_GMRF_8_p1 = (&fieldData_RHS_GMRF[8][(y*258)]);
int x = iterationOffsetBegin[0][0];
for (; (x<(iterationOffsetEnd[0][0]+256)); x += 2) {
fieldData_RHS_GMRF_8_p1[x] = (randn()/512);
fieldData_RHS_GMRF_8_p1[(x+1)] = (randn()/512);
}
for (; (x<(iterationOffsetEnd[0][0]+257)); x += 1) {
fieldData_RHS_GMRF_8_p1[x] = (randn()/512);
}
}
}
}
exchrhs_gmrfData_8(0);
UpResidual_GMRF_8();
double resStart = L2Residual_GMRF_0_8();
double res = resStart;
double resOld = 0.000000e+00;
if (0 == mpiRank) {
std::cout << "Starting residual:"<< " " <<resStart<< std::endl;
}
double totalTime = 0.000000e+00;
double timeToSolve = 0.000000e+00;
StopWatch timeToSolveWatch;
timeToSolveWatch.reset();
int numIt = 0;
while ((!(res<1.000000e-08))) {
numIt += 1;
StopWatch stopWatch;
stopWatch.reset();
VCycle_GMRF_8();
UpResidual_GMRF_8();
{
double timeTaken = stopWatch.getTimeInMilliSec();
MPI_Allreduce(MPI_IN_PLACE, &timeTaken, 1, MPI_DOUBLE, MPI_SUM, mpiCommunicator);
timeTaken /= mpiSize;
totalTime += timeTaken;
}
resOld = res;
res = L2Residual_GMRF_0_8();
if (0 == mpiRank) {
std::cout << "Residual:"<< " " <<res<< " " <<"Residual reduction:"<< " " <<(resStart/res)<< " " <<"Convergence factor:"<< " " <<(res/resOld)<< std::endl;
}
}
{
double timeTaken = timeToSolveWatch.getTimeInMilliSec();
MPI_Allreduce(MPI_IN_PLACE, &timeTaken, 1, MPI_DOUBLE, MPI_SUM, mpiCommunicator);
timeTaken /= mpiSize;
timeToSolve += timeTaken;
}
if (0 == mpiRank) {
std::cout << "Total time to solve in"<< " " <<numIt<< " " <<"steps :"<< " " <<timeToSolve<< std::endl;
}
if (0 == mpiRank) {
std::cout << "Mean time per vCycle: "<< " " <<(totalTime/numIt)<< std::endl;
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[0]) {
/* Statements in this Scop: S362 */
for (int i0 = iterationOffsetBegin[0][1]; (i0<=(iterationOffsetEnd[0][1]+256)); i0 += 1) {
double* fieldData_Solution_GMRF_8_p1 = (&fieldData_Solution_GMRF[8][(i0*260)]);
int i1 = iterationOffsetBegin[0][0];
for (; (i1<=(iterationOffsetEnd[0][0]+255)); i1 += 2) {
fieldData_Solution_GMRF_8_p1[(i1+262)] = exp((fieldData_Solution_GMRF_8_p1[(i1+262)]/sqrt(tau2)));
fieldData_Solution_GMRF_8_p1[(i1+263)] = exp((fieldData_Solution_GMRF_8_p1[(i1+263)]/sqrt(tau2)));
}
for (; (i1<=(iterationOffsetEnd[0][0]+256)); i1 += 1) {
fieldData_Solution_GMRF_8_p1[(i1+262)] = exp((fieldData_Solution_GMRF_8_p1[(i1+262)]/sqrt(tau2)));
}
}
}
}
}
