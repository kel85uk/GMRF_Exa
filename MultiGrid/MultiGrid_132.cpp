#include "MultiGrid/MultiGrid.h"
void Solve() {
UpResidual_8();
double resStart_0 = L2Residual_0_8();
double res_0 = resStart_0;
double resOld_0 = 0.000000e+00;
if (0 == mpiRank) {
std::cout << "Starting residual at 0"<< " " <<resStart_0<< std::endl;
}
double totalTime = 0.000000e+00;
double timeToSolve = 0.000000e+00;
StopWatch timeToSolveWatch;
timeToSolveWatch.reset();
int numIt = 0;
while ((!(res_0<1.000000e-08))) {
numIt += 1;
StopWatch stopWatch;
stopWatch.reset();
VCycle_8();
UpResidual_8();
{
double timeTaken = stopWatch.getTimeInMilliSec();
MPI_Allreduce(MPI_IN_PLACE, &timeTaken, 1, MPI_DOUBLE, MPI_SUM, mpiCommunicator);
timeTaken /= mpiSize;
totalTime += timeTaken;
}
resOld_0 = res_0;
res_0 = L2Residual_0_8();
if (0 == mpiRank) {
std::cout << "Residual at 0:"<< " " <<res_0<< " " <<"Residual reduction:"<< " " <<(resStart_0/res_0)<< " " <<"Convergence factor:"<< " " <<(res_0/resOld_0)<< std::endl;
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
}
