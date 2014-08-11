#include "MultiGrid/MultiGrid.h"
int main(int argc, char** argv) {
MPI_Init(&argc, &argv);
double setupTime = 0.000000e+00;
StopWatch setupWatch;
setupWatch.reset();
initGlobals();
initDomain();
initFieldsWithZero();
{
double timeTaken = setupWatch.getTimeInMilliSec();
MPI_Allreduce(MPI_IN_PLACE, &timeTaken, 1, MPI_DOUBLE, MPI_SUM, mpiCommunicator);
timeTaken /= mpiSize;
setupTime += timeTaken;
}
if (0 == mpiRank) {
std::cout << "Total time to setup: "<< " " <<setupTime<< std::endl;
}
double timeSamples = 0.000000e+00;
StopWatch timeSamplesWatch;
timeSamplesWatch.reset();
for (unsigned int someRandomIndexVar = 0; (someRandomIndexVar<10); ++someRandomIndexVar) {
InitLaplace_GMRF_8();
InitLaplace_GMRF_7();
InitLaplace_GMRF_6();
InitLaplace_GMRF_5();
InitLaplace_GMRF_4();
InitLaplace_GMRF_3();
InitLaplace_GMRF_2();
InitLaplace_GMRF_1();
InitLaplace_GMRF_0();
InitRHS_GMRF();
InitSolution_GMRF();
Solve_GMRF();
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[1]) {
/* Statements in this Scop: S364, S367, S366, S363, S365 */
for (int i0 = iterationOffsetBegin[1][1]; (i0<=(iterationOffsetEnd[1][1]+256)); i0 += 1) {
double* fieldData_Solution_GMRF_8_p1 = (&fieldData_Solution_GMRF[8][(i0*260)]);
double* fieldData_LaplaceCoeff_8_p1 = (&fieldData_LaplaceCoeff[8][(i0*260)]);
int i1 = iterationOffsetBegin[1][0];
for (; (i1<=(iterationOffsetEnd[1][0]+255)); i1 += 2) {
{
{
{
fieldData_LaplaceCoeff_8_p1[(i1+67602)] = ((fieldData_Solution_GMRF_8_p1[(i1+262)]+fieldData_Solution_GMRF_8_p1[(i1+263)])*-5.000000e-01);
fieldData_LaplaceCoeff_8_p1[(i1+134942)] = ((fieldData_Solution_GMRF_8_p1[(i1+261)]+fieldData_Solution_GMRF_8_p1[(i1+262)])*-5.000000e-01);
}
fieldData_LaplaceCoeff_8_p1[(i1+202282)] = ((fieldData_Solution_GMRF_8_p1[(i1+522)]+fieldData_Solution_GMRF_8_p1[(i1+262)])*-5.000000e-01);
}
fieldData_LaplaceCoeff_8_p1[(i1+269622)] = ((fieldData_Solution_GMRF_8_p1[(i1+2)]+fieldData_Solution_GMRF_8_p1[(i1+262)])*-5.000000e-01);
}
{
{
{
fieldData_LaplaceCoeff_8_p1[(i1+67603)] = ((fieldData_Solution_GMRF_8_p1[(i1+263)]+fieldData_Solution_GMRF_8_p1[(i1+264)])*-5.000000e-01);
fieldData_LaplaceCoeff_8_p1[(i1+134943)] = ((fieldData_Solution_GMRF_8_p1[(i1+262)]+fieldData_Solution_GMRF_8_p1[(i1+263)])*-5.000000e-01);
}
fieldData_LaplaceCoeff_8_p1[(i1+202283)] = ((fieldData_Solution_GMRF_8_p1[(i1+523)]+fieldData_Solution_GMRF_8_p1[(i1+263)])*-5.000000e-01);
}
fieldData_LaplaceCoeff_8_p1[(i1+269623)] = ((fieldData_Solution_GMRF_8_p1[(i1+3)]+fieldData_Solution_GMRF_8_p1[(i1+263)])*-5.000000e-01);
}
fieldData_LaplaceCoeff_8_p1[(i1+262)] = ((fieldData_Solution_GMRF_8_p1[(i1+262)]*2.000000e+00)+((((fieldData_Solution_GMRF_8_p1[(i1+522)]+fieldData_Solution_GMRF_8_p1[(i1+2)])+fieldData_Solution_GMRF_8_p1[(i1+261)])+fieldData_Solution_GMRF_8_p1[(i1+263)])*5.000000e-01));
fieldData_LaplaceCoeff_8_p1[(i1+263)] = ((fieldData_Solution_GMRF_8_p1[(i1+263)]*2.000000e+00)+((((fieldData_Solution_GMRF_8_p1[(i1+523)]+fieldData_Solution_GMRF_8_p1[(i1+3)])+fieldData_Solution_GMRF_8_p1[(i1+262)])+fieldData_Solution_GMRF_8_p1[(i1+264)])*5.000000e-01));
}
for (; (i1<=(iterationOffsetEnd[1][0]+256)); i1 += 1) {
{
{
{
fieldData_LaplaceCoeff_8_p1[(i1+67602)] = ((fieldData_Solution_GMRF_8_p1[(i1+262)]+fieldData_Solution_GMRF_8_p1[(i1+263)])*-5.000000e-01);
fieldData_LaplaceCoeff_8_p1[(i1+134942)] = ((fieldData_Solution_GMRF_8_p1[(i1+261)]+fieldData_Solution_GMRF_8_p1[(i1+262)])*-5.000000e-01);
}
fieldData_LaplaceCoeff_8_p1[(i1+202282)] = ((fieldData_Solution_GMRF_8_p1[(i1+522)]+fieldData_Solution_GMRF_8_p1[(i1+262)])*-5.000000e-01);
}
fieldData_LaplaceCoeff_8_p1[(i1+269622)] = ((fieldData_Solution_GMRF_8_p1[(i1+2)]+fieldData_Solution_GMRF_8_p1[(i1+262)])*-5.000000e-01);
}
fieldData_LaplaceCoeff_8_p1[(i1+262)] = ((fieldData_Solution_GMRF_8_p1[(i1+262)]*2.000000e+00)+((((fieldData_Solution_GMRF_8_p1[(i1+522)]+fieldData_Solution_GMRF_8_p1[(i1+2)])+fieldData_Solution_GMRF_8_p1[(i1+261)])+fieldData_Solution_GMRF_8_p1[(i1+263)])*5.000000e-01));
}
}
}
}
InitLaplace_7();
InitLaplace_6();
InitLaplace_5();
InitLaplace_4();
InitLaplace_3();
InitLaplace_2();
InitLaplace_1();
InitLaplace_0();
InitRHS();
InitSolution();
Solve();
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[1]) {
/* Statements in this Scop: S368 */
for (int i0 = iterationOffsetBegin[1][1]; (i0<=(iterationOffsetEnd[1][1]+256)); i0 += 1) {
double* fieldData_Solution_8_p1 = (&fieldData_Solution[8][(i0*260)]);
double* fieldData_SolutionMean_8_p1 = (&fieldData_SolutionMean[8][(i0*258)]);
int i1 = iterationOffsetBegin[1][0];
for (; (i1<((iterationOffsetBegin[1][0]+1)&(~1))); i1 += 1) {
fieldData_SolutionMean_8_p1[i1] += fieldData_Solution_8_p1[(i1+262)];
}
for (; (i1<(iterationOffsetEnd[1][0]+254)); i1 += 4) {
/* fieldData_SolutionMean_8_p1[i1] += fieldData_Solution_8_p1[(i1+262)]; */
__m128d vec0 = _mm_loadu_pd((&fieldData_SolutionMean_8_p1[i1]));
__m128d vec0_2 = _mm_loadu_pd((&fieldData_SolutionMean_8_p1[(i1+4)]));
__m128d vec1 = _mm_loadu_pd((&fieldData_Solution_8_p1[(i1+262)]));
__m128d vec1_2 = _mm_loadu_pd((&fieldData_Solution_8_p1[(i1+264)]));
vec0 = _mm_add_pd(vec0, vec1);
vec0_2 = _mm_add_pd(vec0_2, vec1_2);
_mm_storeu_pd((&fieldData_SolutionMean_8_p1[i1]), vec0);
_mm_storeu_pd((&fieldData_SolutionMean_8_p1[(i1+4)]), vec0_2);
}
for (; (i1<(iterationOffsetEnd[1][0]+257)); i1 += 1) {
fieldData_SolutionMean_8_p1[i1] += fieldData_Solution_8_p1[(i1+262)];
}
}
}
}
}
{
double timeTaken = timeSamplesWatch.getTimeInMilliSec();
MPI_Allreduce(MPI_IN_PLACE, &timeTaken, 1, MPI_DOUBLE, MPI_SUM, mpiCommunicator);
timeTaken /= mpiSize;
timeSamples += timeTaken;
}
if (0 == mpiRank) {
std::cout << "Total time to solve: "<< " " <<timeSamples<< std::endl;
}
if (0 == mpiRank) {
std::cout << "Mean time per sample: "<< " " <<(timeSamples/10)<< std::endl;
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[1]) {
/* Statements in this Scop: S369 */
for (int i0 = iterationOffsetBegin[1][1]; (i0<=(iterationOffsetEnd[1][1]+256)); i0 += 1) {
double* fieldData_SolutionMean_8_p1 = (&fieldData_SolutionMean[8][(i0*258)]);
int i1 = iterationOffsetBegin[1][0];
for (; (i1<=(iterationOffsetEnd[1][0]+255)); i1 += 2) {
fieldData_SolutionMean_8_p1[i1] /= 1.000000e+01;
fieldData_SolutionMean_8_p1[(i1+1)] /= 1.000000e+01;
}
for (; (i1<=(iterationOffsetEnd[1][0]+256)); i1 += 1) {
fieldData_SolutionMean_8_p1[i1] /= 1.000000e+01;
}
}
}
}
double solNorm = 0.000000e+00;
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[1]) {
for (int y = (iterationOffsetBegin[1][1]+1); (y<(iterationOffsetEnd[1][1]+256)); y += 1) {
double* fieldData_Solution_8_p1 = (&fieldData_Solution[8][(y*260)]);
int x = (iterationOffsetBegin[1][0]+1);
for (; (x<((iterationOffsetBegin[1][0]+2)&(~1))); x += 1) {
solNorm += (fieldData_Solution_8_p1[(x+262)]*fieldData_Solution_8_p1[(x+262)]);
}
__m128d vec0 = _mm_set1_pd(0.000000e+00);
for (; (x<(iterationOffsetEnd[1][0]+253)); x += 4) {
/* solNorm += (fieldData_Solution_8_p1[(x+262)]*fieldData_Solution_8_p1[(x+262)]); */
__m128d vec1 = _mm_loadu_pd((&fieldData_Solution_8_p1[(x+262)]));
__m128d vec1_2 = _mm_loadu_pd((&fieldData_Solution_8_p1[(x+264)]));
vec0 = _mm_add_pd(_mm_mul_pd(vec1, vec1), vec0);
vec0 = _mm_add_pd(_mm_mul_pd(vec1_2, vec1_2), vec0);
}
{
 __m128d v = vec0;
solNorm += _mm_cvtsd_f64(_mm_hadd_pd(v,v));
}
for (; (x<(iterationOffsetEnd[1][0]+256)); x += 1) {
solNorm += (fieldData_Solution_8_p1[(x+262)]*fieldData_Solution_8_p1[(x+262)]);
}
}
}
}
MPI_Allreduce(MPI_IN_PLACE, &solNorm, 1, MPI_DOUBLE, MPI_SUM, mpiCommunicator);
solNorm = (sqrt(solNorm)/511);
if (0 == mpiRank) {
std::cout << "Norm of the solution: "<< " " <<solNorm<< std::endl;
}
if (0 == mpiRank) {
std::ofstream stream("Solution.dat", std::ios::trunc);
stream.close();
}
for (int curRank = 0; curRank < mpiSize; ++curRank) {
MPI_Barrier(mpiCommunicator);
if (mpiRank == curRank) {
std::ofstream stream("Solution.dat", std::ios::app);
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[1]) {
for (int y = (iterationOffsetBegin[1][1]+1); (y<(iterationOffsetEnd[1][1]+256)); y += 1) {
double* fieldData_SolutionMean_8_p1 = (&fieldData_SolutionMean[8][(y*258)]);
int x = (iterationOffsetBegin[1][0]+1);
for (; (x<(iterationOffsetEnd[1][0]+255)); x += 2) {
double xPos = (((x/2.560000e+02)*(posEnd[0]-posBegin[0]))+posBegin[0]);
double xPos_1 = ((((x+1)/2.560000e+02)*(posEnd[0]-posBegin[0]))+posBegin[0]);
double yPos = (((y/2.560000e+02)*(posEnd[1]-posBegin[1]))+posBegin[1]);
double yPos_1 = (((y/2.560000e+02)*(posEnd[1]-posBegin[1]))+posBegin[1]);
;
;
stream << xPos << " " << yPos << " " << fieldData_SolutionMean_8_p1[x] << std::endl;
stream << xPos << " " << yPos << " " << fieldData_SolutionMean_8_p1[(x+1)] << std::endl;
}
for (; (x<(iterationOffsetEnd[1][0]+256)); x += 1) {
double xPos = (((x/2.560000e+02)*(posEnd[0]-posBegin[0]))+posBegin[0]);
double yPos = (((y/2.560000e+02)*(posEnd[1]-posBegin[1]))+posBegin[1]);
;
stream << xPos << " " << yPos << " " << fieldData_SolutionMean_8_p1[x] << std::endl;
}
}
}
}
stream.close();
}
}
destroyGlobals();
MPI_Finalize();
return 0;
}
