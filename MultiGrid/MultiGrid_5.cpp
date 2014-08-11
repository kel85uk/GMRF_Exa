#include "MultiGrid/MultiGrid.h"
void VCycle_GMRF_0_0() {
UpResidual_GMRF_0();
exchresidual_gmrfData_0(0);
double res = L2Residual_GMRF_0_0();
double initialRes = res;
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[0]) {
/* Statements in this Scop: S90 */
for (int i0 = iterationOffsetBegin[0][1]; (i0<=(iterationOffsetEnd[0][1]+1)); i0 += 1) {
double* fieldData_VecP_GMRF_0_p1 = (&fieldData_VecP_GMRF[0][(i0*6)]);
double* fieldData_Residual_GMRF_0_p1 = (&fieldData_Residual_GMRF[0][(i0*6)]);
int i1 = iterationOffsetBegin[0][0];
for (; (i1<((iterationOffsetBegin[0][0]+1)&(~1))); i1 += 1) {
fieldData_VecP_GMRF_0_p1[(i1+8)] = fieldData_Residual_GMRF_0_p1[(i1+8)];
}
for (; (i1<(iterationOffsetEnd[0][0]-1)); i1 += 4) {
/* fieldData_VecP_GMRF_0_p1[(i1+8)] = fieldData_Residual_GMRF_0_p1[(i1+8)]; */
__m128d vec0 = _mm_loadu_pd((&fieldData_Residual_GMRF_0_p1[(i1+8)]));
__m128d vec0_2 = _mm_loadu_pd((&fieldData_Residual_GMRF_0_p1[(i1+10)]));
__m128d vec1;
__m128d vec1_2;
vec1 = vec0;
vec1_2 = vec0_2;
_mm_storeu_pd((&fieldData_VecP_GMRF_0_p1[(i1+8)]), vec1);
_mm_storeu_pd((&fieldData_VecP_GMRF_0_p1[(i1+10)]), vec1_2);
}
for (; (i1<(iterationOffsetEnd[0][0]+2)); i1 += 1) {
fieldData_VecP_GMRF_0_p1[(i1+8)] = fieldData_Residual_GMRF_0_p1[(i1+8)];
}
}
}
}
for (unsigned int someRandomIndexVar = 0; (someRandomIndexVar<512); ++someRandomIndexVar) {
exchvecp_gmrfData_0(0);
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[0]) {
/* Statements in this Scop: S91 */
for (int i0 = iterationOffsetBegin[0][1]; (i0<=(iterationOffsetEnd[0][1]+1)); i0 += 1) {
double* fieldData_VecGradP_GMRF_0_p1 = (&fieldData_VecGradP_GMRF[0][i0]);
double* fieldData_VecP_GMRF_0_p1 = (&fieldData_VecP_GMRF[0][(i0*5)]);
double* fieldData_LaplaceCoeff_GMRF_0_p1 = (&fieldData_LaplaceCoeff_GMRF[0][(i0*5)]);
int i1 = (iterationOffsetBegin[0][0]+i0);
for (; (i1<(((iterationOffsetBegin[0][0]+i0)+1)&(~1))); i1 += 1) {
fieldData_VecGradP_GMRF_0_p1[i1] = (((((((((fieldData_LaplaceCoeff_GMRF_0_p1[(i1+8)]*fieldData_VecP_GMRF_0_p1[(i1+8)])+(fieldData_LaplaceCoeff_GMRF_0_p1[(i1+32)]*fieldData_VecP_GMRF_0_p1[(i1+9)]))+(fieldData_LaplaceCoeff_GMRF_0_p1[(i1+56)]*fieldData_VecP_GMRF_0_p1[(i1+7)]))+(fieldData_LaplaceCoeff_GMRF_0_p1[(i1+80)]*fieldData_VecP_GMRF_0_p1[(i1+14)]))+(fieldData_LaplaceCoeff_GMRF_0_p1[(i1+104)]*fieldData_VecP_GMRF_0_p1[(i1+2)]))+(fieldData_LaplaceCoeff_GMRF_0_p1[(i1+128)]*fieldData_VecP_GMRF_0_p1[(i1+1)]))+(fieldData_LaplaceCoeff_GMRF_0_p1[(i1+152)]*fieldData_VecP_GMRF_0_p1[(i1+13)]))+(fieldData_LaplaceCoeff_GMRF_0_p1[(i1+176)]*fieldData_VecP_GMRF_0_p1[(i1+3)]))+(fieldData_LaplaceCoeff_GMRF_0_p1[(i1+200)]*fieldData_VecP_GMRF_0_p1[(i1+15)]));
}
for (; (i1<((iterationOffsetEnd[0][0]+i0)-1)); i1 += 4) {
/* fieldData_VecGradP_GMRF_0_p1[i1] = (((((((((fieldData_LaplaceCoeff_GMRF_0_p1[(i1+8)]*fieldData_VecP_GMRF_0_p1[(i1+8)])+(fieldData_LaplaceCoeff_GMRF_0_p1[(i1+32)]*fieldData_VecP_GMRF_0_p1[(i1+9)]))+(fieldData_LaplaceCoeff_GMRF_0_p1[(i1+56)]*fieldData_VecP_GMRF_0_p1[(i1+7)]))+(fieldData_LaplaceCoeff_GMRF_0_p1[(i1+80)]*fieldData_VecP_GMRF_0_p1[(i1+14)]))+(fieldData_LaplaceCoeff_GMRF_0_p1[(i1+104)]*fieldData_VecP_GMRF_0_p1[(i1+2)]))+(fieldData_LaplaceCoeff_GMRF_0_p1[(i1+128)]*fieldData_VecP_GMRF_0_p1[(i1+1)]))+(fieldData_LaplaceCoeff_GMRF_0_p1[(i1+152)]*fieldData_VecP_GMRF_0_p1[(i1+13)]))+(fieldData_LaplaceCoeff_GMRF_0_p1[(i1+176)]*fieldData_VecP_GMRF_0_p1[(i1+3)]))+(fieldData_LaplaceCoeff_GMRF_0_p1[(i1+200)]*fieldData_VecP_GMRF_0_p1[(i1+15)])); */
__m128d vec0 = _mm_loadu_pd((&fieldData_LaplaceCoeff_GMRF_0_p1[(i1+200)]));
__m128d vec0_2 = _mm_loadu_pd((&fieldData_LaplaceCoeff_GMRF_0_p1[(i1+202)]));
__m128d vec1 = _mm_loadu_pd((&fieldData_VecP_GMRF_0_p1[(i1+15)]));
__m128d vec1_2 = _mm_loadu_pd((&fieldData_VecP_GMRF_0_p1[(i1+17)]));
__m128d vec2 = _mm_loadu_pd((&fieldData_LaplaceCoeff_GMRF_0_p1[(i1+176)]));
__m128d vec2_2 = _mm_loadu_pd((&fieldData_LaplaceCoeff_GMRF_0_p1[(i1+178)]));
__m128d vec3 = _mm_loadu_pd((&fieldData_VecP_GMRF_0_p1[(i1+3)]));
__m128d vec3_2 = _mm_loadu_pd((&fieldData_VecP_GMRF_0_p1[(i1+5)]));
__m128d vec4 = _mm_loadu_pd((&fieldData_LaplaceCoeff_GMRF_0_p1[(i1+152)]));
__m128d vec4_2 = _mm_loadu_pd((&fieldData_LaplaceCoeff_GMRF_0_p1[(i1+154)]));
__m128d vec5 = _mm_loadu_pd((&fieldData_VecP_GMRF_0_p1[(i1+13)]));
__m128d vec5_2 = _mm_loadu_pd((&fieldData_VecP_GMRF_0_p1[(i1+15)]));
__m128d vec6 = _mm_loadu_pd((&fieldData_LaplaceCoeff_GMRF_0_p1[(i1+128)]));
__m128d vec6_2 = _mm_loadu_pd((&fieldData_LaplaceCoeff_GMRF_0_p1[(i1+130)]));
__m128d vec7 = _mm_loadu_pd((&fieldData_VecP_GMRF_0_p1[(i1+1)]));
__m128d vec7_2 = _mm_loadu_pd((&fieldData_VecP_GMRF_0_p1[(i1+3)]));
__m128d vec8 = _mm_loadu_pd((&fieldData_LaplaceCoeff_GMRF_0_p1[(i1+104)]));
__m128d vec8_2 = _mm_loadu_pd((&fieldData_LaplaceCoeff_GMRF_0_p1[(i1+106)]));
__m128d vec9 = _mm_loadu_pd((&fieldData_VecP_GMRF_0_p1[(i1+2)]));
__m128d vec9_2 = _mm_loadu_pd((&fieldData_VecP_GMRF_0_p1[(i1+4)]));
__m128d vec10 = _mm_loadu_pd((&fieldData_LaplaceCoeff_GMRF_0_p1[(i1+80)]));
__m128d vec10_2 = _mm_loadu_pd((&fieldData_LaplaceCoeff_GMRF_0_p1[(i1+82)]));
__m128d vec11 = _mm_loadu_pd((&fieldData_VecP_GMRF_0_p1[(i1+14)]));
__m128d vec11_2 = _mm_loadu_pd((&fieldData_VecP_GMRF_0_p1[(i1+16)]));
__m128d vec12 = _mm_loadu_pd((&fieldData_LaplaceCoeff_GMRF_0_p1[(i1+56)]));
__m128d vec12_2 = _mm_loadu_pd((&fieldData_LaplaceCoeff_GMRF_0_p1[(i1+58)]));
__m128d vec13 = _mm_loadu_pd((&fieldData_VecP_GMRF_0_p1[(i1+7)]));
__m128d vec13_2 = _mm_loadu_pd((&fieldData_VecP_GMRF_0_p1[(i1+9)]));
__m128d vec14 = _mm_loadu_pd((&fieldData_LaplaceCoeff_GMRF_0_p1[(i1+8)]));
__m128d vec14_2 = _mm_loadu_pd((&fieldData_LaplaceCoeff_GMRF_0_p1[(i1+10)]));
__m128d vec15 = _mm_loadu_pd((&fieldData_VecP_GMRF_0_p1[(i1+8)]));
__m128d vec15_2 = _mm_loadu_pd((&fieldData_VecP_GMRF_0_p1[(i1+10)]));
__m128d vec16 = _mm_loadu_pd((&fieldData_LaplaceCoeff_GMRF_0_p1[(i1+32)]));
__m128d vec16_2 = _mm_loadu_pd((&fieldData_LaplaceCoeff_GMRF_0_p1[(i1+34)]));
__m128d vec17 = _mm_loadu_pd((&fieldData_VecP_GMRF_0_p1[(i1+9)]));
__m128d vec17_2 = _mm_loadu_pd((&fieldData_VecP_GMRF_0_p1[(i1+11)]));
__m128d vec18;
__m128d vec18_2;
vec18 = _mm_add_pd(_mm_mul_pd(vec0, vec1), _mm_add_pd(_mm_mul_pd(vec2, vec3), _mm_add_pd(_mm_mul_pd(vec4, vec5), _mm_add_pd(_mm_mul_pd(vec6, vec7), _mm_add_pd(_mm_mul_pd(vec8, vec9), _mm_add_pd(_mm_mul_pd(vec10, vec11), _mm_add_pd(_mm_mul_pd(vec12, vec13), _mm_add_pd(_mm_mul_pd(vec14, vec15), _mm_mul_pd(vec16, vec17)))))))));
vec18_2 = _mm_add_pd(_mm_mul_pd(vec0_2, vec1_2), _mm_add_pd(_mm_mul_pd(vec2_2, vec3_2), _mm_add_pd(_mm_mul_pd(vec4_2, vec5_2), _mm_add_pd(_mm_mul_pd(vec6_2, vec7_2), _mm_add_pd(_mm_mul_pd(vec8_2, vec9_2), _mm_add_pd(_mm_mul_pd(vec10_2, vec11_2), _mm_add_pd(_mm_mul_pd(vec12_2, vec13_2), _mm_add_pd(_mm_mul_pd(vec14_2, vec15_2), _mm_mul_pd(vec16_2, vec17_2)))))))));
_mm_storeu_pd((&fieldData_VecGradP_GMRF_0_p1[i1]), vec18);
_mm_storeu_pd((&fieldData_VecGradP_GMRF_0_p1[(i1+2)]), vec18_2);
}
for (; (i1<((iterationOffsetEnd[0][0]+i0)+2)); i1 += 1) {
fieldData_VecGradP_GMRF_0_p1[i1] = (((((((((fieldData_LaplaceCoeff_GMRF_0_p1[(i1+8)]*fieldData_VecP_GMRF_0_p1[(i1+8)])+(fieldData_LaplaceCoeff_GMRF_0_p1[(i1+32)]*fieldData_VecP_GMRF_0_p1[(i1+9)]))+(fieldData_LaplaceCoeff_GMRF_0_p1[(i1+56)]*fieldData_VecP_GMRF_0_p1[(i1+7)]))+(fieldData_LaplaceCoeff_GMRF_0_p1[(i1+80)]*fieldData_VecP_GMRF_0_p1[(i1+14)]))+(fieldData_LaplaceCoeff_GMRF_0_p1[(i1+104)]*fieldData_VecP_GMRF_0_p1[(i1+2)]))+(fieldData_LaplaceCoeff_GMRF_0_p1[(i1+128)]*fieldData_VecP_GMRF_0_p1[(i1+1)]))+(fieldData_LaplaceCoeff_GMRF_0_p1[(i1+152)]*fieldData_VecP_GMRF_0_p1[(i1+13)]))+(fieldData_LaplaceCoeff_GMRF_0_p1[(i1+176)]*fieldData_VecP_GMRF_0_p1[(i1+3)]))+(fieldData_LaplaceCoeff_GMRF_0_p1[(i1+200)]*fieldData_VecP_GMRF_0_p1[(i1+15)]));
}
}
}
}
double alphaDenom = 0.000000e+00;
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[0]) {
for (int y = iterationOffsetBegin[0][1]; (y<(iterationOffsetEnd[0][1]+2)); y += 1) {
double* fieldData_VecGradP_GMRF_0_p1 = (&fieldData_VecGradP_GMRF[0][(y*2)]);
double* fieldData_VecP_GMRF_0_p1 = (&fieldData_VecP_GMRF[0][(y*6)]);
int x = iterationOffsetBegin[0][0];
for (; (x<((iterationOffsetBegin[0][0]+1)&(~1))); x += 1) {
alphaDenom += (fieldData_VecP_GMRF_0_p1[(x+8)]*fieldData_VecGradP_GMRF_0_p1[x]);
}
__m128d vec0 = _mm_set1_pd(0.000000e+00);
for (; (x<(iterationOffsetEnd[0][0]-1)); x += 4) {
/* alphaDenom += (fieldData_VecP_GMRF_0_p1[(x+8)]*fieldData_VecGradP_GMRF_0_p1[x]); */
__m128d vec1 = _mm_loadu_pd((&fieldData_VecP_GMRF_0_p1[(x+8)]));
__m128d vec1_2 = _mm_loadu_pd((&fieldData_VecP_GMRF_0_p1[(x+10)]));
__m128d vec2 = _mm_loadu_pd((&fieldData_VecGradP_GMRF_0_p1[x]));
__m128d vec2_2 = _mm_loadu_pd((&fieldData_VecGradP_GMRF_0_p1[(x+2)]));
vec0 = _mm_add_pd(_mm_mul_pd(vec1, vec2), vec0);
vec0 = _mm_add_pd(_mm_mul_pd(vec1_2, vec2_2), vec0);
}
{
 __m128d v = vec0;
alphaDenom += _mm_cvtsd_f64(_mm_hadd_pd(v,v));
}
for (; (x<(iterationOffsetEnd[0][0]+2)); x += 1) {
alphaDenom += (fieldData_VecP_GMRF_0_p1[(x+8)]*fieldData_VecGradP_GMRF_0_p1[x]);
}
}
}
}
MPI_Allreduce(MPI_IN_PLACE, &alphaDenom, 1, MPI_DOUBLE, MPI_SUM, mpiCommunicator);
double alpha = ((res*res)/alphaDenom);
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[0]) {
/* Statements in this Scop: S92, S93 */
{
for (int i1 = iterationOffsetBegin[0][1]; (i1<=(iterationOffsetEnd[0][1]+1)); i1 += 1) {
double* fieldData_VecP_GMRF_0_p1 = (&fieldData_VecP_GMRF[0][(i1*6)]);
double* fieldData_Solution_GMRF_0_p1 = (&fieldData_Solution_GMRF[0][(i1*6)]);
int i2 = iterationOffsetBegin[0][0];
for (; (i2<((iterationOffsetBegin[0][0]+1)&(~1))); i2 += 1) {
fieldData_Solution_GMRF_0_p1[(i2+8)] += (alpha*fieldData_VecP_GMRF_0_p1[(i2+8)]);
}
__m128d vec0 = _mm_set1_pd(alpha);
for (; (i2<(iterationOffsetEnd[0][0]-1)); i2 += 4) {
/* fieldData_Solution_GMRF_0_p1[(i2+8)] += (alpha*fieldData_VecP_GMRF_0_p1[(i2+8)]); */
__m128d vec1 = _mm_loadu_pd((&fieldData_VecP_GMRF_0_p1[(i2+8)]));
__m128d vec1_2 = _mm_loadu_pd((&fieldData_VecP_GMRF_0_p1[(i2+10)]));
__m128d vec2 = _mm_loadu_pd((&fieldData_Solution_GMRF_0_p1[(i2+8)]));
__m128d vec2_2 = _mm_loadu_pd((&fieldData_Solution_GMRF_0_p1[(i2+12)]));
vec2 = _mm_add_pd(_mm_mul_pd(vec0, vec1), vec2);
vec2_2 = _mm_add_pd(_mm_mul_pd(vec0, vec1_2), vec2_2);
_mm_storeu_pd((&fieldData_Solution_GMRF_0_p1[(i2+8)]), vec2);
_mm_storeu_pd((&fieldData_Solution_GMRF_0_p1[(i2+12)]), vec2_2);
}
for (; (i2<(iterationOffsetEnd[0][0]+2)); i2 += 1) {
fieldData_Solution_GMRF_0_p1[(i2+8)] += (alpha*fieldData_VecP_GMRF_0_p1[(i2+8)]);
}
}
for (int i1 = iterationOffsetBegin[0][1]; (i1<=(iterationOffsetEnd[0][1]+1)); i1 += 1) {
double* fieldData_VecGradP_GMRF_0_p1 = (&fieldData_VecGradP_GMRF[0][(i1*2)]);
double* fieldData_Residual_GMRF_0_p1 = (&fieldData_Residual_GMRF[0][(i1*6)]);
int i2 = iterationOffsetBegin[0][0];
for (; (i2<((iterationOffsetBegin[0][0]+1)&(~1))); i2 += 1) {
fieldData_Residual_GMRF_0_p1[(i2+8)] -= (alpha*fieldData_VecGradP_GMRF_0_p1[i2]);
}
__m128d vec1 = _mm_set1_pd(alpha);
for (; (i2<(iterationOffsetEnd[0][0]-1)); i2 += 4) {
/* fieldData_Residual_GMRF_0_p1[(i2+8)] -= (alpha*fieldData_VecGradP_GMRF_0_p1[i2]); */
__m128d vec0 = _mm_loadu_pd((&fieldData_Residual_GMRF_0_p1[(i2+8)]));
__m128d vec0_2 = _mm_loadu_pd((&fieldData_Residual_GMRF_0_p1[(i2+12)]));
__m128d vec2 = _mm_loadu_pd((&fieldData_VecGradP_GMRF_0_p1[i2]));
__m128d vec2_2 = _mm_loadu_pd((&fieldData_VecGradP_GMRF_0_p1[(i2+2)]));
vec0 = _mm_sub_pd(vec0, _mm_mul_pd(vec1, vec2));
vec0_2 = _mm_sub_pd(vec0_2, _mm_mul_pd(vec1, vec2_2));
_mm_storeu_pd((&fieldData_Residual_GMRF_0_p1[(i2+8)]), vec0);
_mm_storeu_pd((&fieldData_Residual_GMRF_0_p1[(i2+12)]), vec0_2);
}
for (; (i2<(iterationOffsetEnd[0][0]+2)); i2 += 1) {
fieldData_Residual_GMRF_0_p1[(i2+8)] -= (alpha*fieldData_VecGradP_GMRF_0_p1[i2]);
}
}
}
}
}
double nextRes = L2Residual_GMRF_0_0();
if ((nextRes<=(initialRes*1.000000e-03))) {
return;
}
double beta = ((nextRes*nextRes)/(res*res));
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[0]) {
/* Statements in this Scop: S94 */
for (int i0 = iterationOffsetBegin[0][1]; (i0<=(iterationOffsetEnd[0][1]+1)); i0 += 1) {
double* fieldData_VecP_GMRF_0_p1 = (&fieldData_VecP_GMRF[0][(i0*6)]);
double* fieldData_Residual_GMRF_0_p1 = (&fieldData_Residual_GMRF[0][(i0*6)]);
int i1 = iterationOffsetBegin[0][0];
for (; (i1<((iterationOffsetBegin[0][0]+1)&(~1))); i1 += 1) {
fieldData_VecP_GMRF_0_p1[(i1+8)] = (fieldData_Residual_GMRF_0_p1[(i1+8)]+(beta*fieldData_VecP_GMRF_0_p1[(i1+8)]));
}
__m128d vec0 = _mm_set1_pd(beta);
for (; (i1<(iterationOffsetEnd[0][0]-1)); i1 += 4) {
/* fieldData_VecP_GMRF_0_p1[(i1+8)] = (fieldData_Residual_GMRF_0_p1[(i1+8)]+(beta*fieldData_VecP_GMRF_0_p1[(i1+8)])); */
__m128d vec1 = _mm_loadu_pd((&fieldData_VecP_GMRF_0_p1[(i1+8)]));
__m128d vec1_2 = _mm_loadu_pd((&fieldData_VecP_GMRF_0_p1[(i1+10)]));
__m128d vec2 = _mm_loadu_pd((&fieldData_Residual_GMRF_0_p1[(i1+8)]));
__m128d vec2_2 = _mm_loadu_pd((&fieldData_Residual_GMRF_0_p1[(i1+10)]));
vec1 = _mm_add_pd(_mm_mul_pd(vec0, vec1), vec2);
vec1_2 = _mm_add_pd(_mm_mul_pd(vec0, vec1_2), vec2_2);
_mm_storeu_pd((&fieldData_VecP_GMRF_0_p1[(i1+8)]), vec1);
_mm_storeu_pd((&fieldData_VecP_GMRF_0_p1[(i1+10)]), vec1_2);
}
for (; (i1<(iterationOffsetEnd[0][0]+2)); i1 += 1) {
fieldData_VecP_GMRF_0_p1[(i1+8)] = (fieldData_Residual_GMRF_0_p1[(i1+8)]+(beta*fieldData_VecP_GMRF_0_p1[(i1+8)]));
}
}
}
}
res = nextRes;
}
}
