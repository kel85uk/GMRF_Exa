#include "MultiGrid/MultiGrid.h"
double L2Residual_0_8() {
exchresidualData_8(0);
double res = 0.000000e+00;
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[1]) {
for (int y = iterationOffsetBegin[1][1]; (y<(iterationOffsetEnd[1][1]+257)); y += 1) {
double* fieldData_Residual_8_p1 = (&fieldData_Residual[8][(y*260)]);
int x = iterationOffsetBegin[1][0];
for (; (x<((iterationOffsetBegin[1][0]+1)&(~1))); x += 1) {
res += (fieldData_Residual_8_p1[(x+262)]*fieldData_Residual_8_p1[(x+262)]);
}
__m128d vec0 = _mm_set1_pd(0.000000e+00);
for (; (x<(iterationOffsetEnd[1][0]+254)); x += 4) {
/* res += (fieldData_Residual_8_p1[(x+262)]*fieldData_Residual_8_p1[(x+262)]); */
__m128d vec1 = _mm_loadu_pd((&fieldData_Residual_8_p1[(x+262)]));
__m128d vec1_2 = _mm_loadu_pd((&fieldData_Residual_8_p1[(x+264)]));
vec0 = _mm_add_pd(_mm_mul_pd(vec1, vec1), vec0);
vec0 = _mm_add_pd(_mm_mul_pd(vec1_2, vec1_2), vec0);
}
{
 __m128d v = vec0;
res += _mm_cvtsd_f64(_mm_hadd_pd(v,v));
}
for (; (x<(iterationOffsetEnd[1][0]+257)); x += 1) {
res += (fieldData_Residual_8_p1[(x+262)]*fieldData_Residual_8_p1[(x+262)]);
}
}
}
}
MPI_Allreduce(MPI_IN_PLACE, &res, 1, MPI_DOUBLE, MPI_SUM, mpiCommunicator);
return sqrt(res);
}
