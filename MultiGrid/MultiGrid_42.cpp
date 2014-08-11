#include "MultiGrid/MultiGrid.h"
void UpResidual_4() {
exchsolutionData_4(0);
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[1]) {
/* Statements in this Scop: S131 */
for (int i0 = iterationOffsetBegin[1][1]; (i0<=(iterationOffsetEnd[1][1]+16)); i0 += 1) {
double* fieldData_RHS_4_p1 = (&fieldData_RHS[4][(i0*17)]);
double* fieldData_Residual_4_p1 = (&fieldData_Residual[4][(i0*19)]);
double* fieldData_Solution_4_p1 = (&fieldData_Solution[4][(i0*19)]);
double* fieldData_LaplaceCoeff_4_p1 = (&fieldData_LaplaceCoeff[4][(i0*19)]);
int i1 = (iterationOffsetBegin[1][0]+i0);
for (; (i1<(((iterationOffsetBegin[1][0]+i0)+1)&(~1))); i1 += 1) {
fieldData_Residual_4_p1[(i1+22)] = (fieldData_RHS_4_p1[i1]-(((((((((fieldData_LaplaceCoeff_4_p1[(i1+22)]*fieldData_Solution_4_p1[(i1+22)])+(fieldData_LaplaceCoeff_4_p1[(i1+402)]*fieldData_Solution_4_p1[(i1+23)]))+(fieldData_LaplaceCoeff_4_p1[(i1+782)]*fieldData_Solution_4_p1[(i1+21)]))+(fieldData_LaplaceCoeff_4_p1[(i1+1162)]*fieldData_Solution_4_p1[(i1+42)]))+(fieldData_LaplaceCoeff_4_p1[(i1+1542)]*fieldData_Solution_4_p1[(i1+2)]))+(fieldData_LaplaceCoeff_4_p1[(i1+1922)]*fieldData_Solution_4_p1[(i1+1)]))+(fieldData_LaplaceCoeff_4_p1[(i1+2302)]*fieldData_Solution_4_p1[(i1+41)]))+(fieldData_LaplaceCoeff_4_p1[(i1+2682)]*fieldData_Solution_4_p1[(i1+3)]))+(fieldData_LaplaceCoeff_4_p1[(i1+3062)]*fieldData_Solution_4_p1[(i1+43)])));
}
for (; (i1<((iterationOffsetEnd[1][0]+i0)+14)); i1 += 4) {
/* fieldData_Residual_4_p1[(i1+22)] = (fieldData_RHS_4_p1[i1]-(((((((((fieldData_LaplaceCoeff_4_p1[(i1+22)]*fieldData_Solution_4_p1[(i1+22)])+(fieldData_LaplaceCoeff_4_p1[(i1+402)]*fieldData_Solution_4_p1[(i1+23)]))+(fieldData_LaplaceCoeff_4_p1[(i1+782)]*fieldData_Solution_4_p1[(i1+21)]))+(fieldData_LaplaceCoeff_4_p1[(i1+1162)]*fieldData_Solution_4_p1[(i1+42)]))+(fieldData_LaplaceCoeff_4_p1[(i1+1542)]*fieldData_Solution_4_p1[(i1+2)]))+(fieldData_LaplaceCoeff_4_p1[(i1+1922)]*fieldData_Solution_4_p1[(i1+1)]))+(fieldData_LaplaceCoeff_4_p1[(i1+2302)]*fieldData_Solution_4_p1[(i1+41)]))+(fieldData_LaplaceCoeff_4_p1[(i1+2682)]*fieldData_Solution_4_p1[(i1+3)]))+(fieldData_LaplaceCoeff_4_p1[(i1+3062)]*fieldData_Solution_4_p1[(i1+43)]))); */
__m128d vec0 = _mm_loadu_pd((&fieldData_RHS_4_p1[i1]));
__m128d vec0_2 = _mm_loadu_pd((&fieldData_RHS_4_p1[(i1+2)]));
__m128d vec1 = _mm_loadu_pd((&fieldData_LaplaceCoeff_4_p1[(i1+3062)]));
__m128d vec1_2 = _mm_loadu_pd((&fieldData_LaplaceCoeff_4_p1[(i1+3064)]));
__m128d vec2 = _mm_loadu_pd((&fieldData_Solution_4_p1[(i1+43)]));
__m128d vec2_2 = _mm_loadu_pd((&fieldData_Solution_4_p1[(i1+45)]));
__m128d vec3 = _mm_loadu_pd((&fieldData_LaplaceCoeff_4_p1[(i1+2682)]));
__m128d vec3_2 = _mm_loadu_pd((&fieldData_LaplaceCoeff_4_p1[(i1+2684)]));
__m128d vec4 = _mm_loadu_pd((&fieldData_Solution_4_p1[(i1+3)]));
__m128d vec4_2 = _mm_loadu_pd((&fieldData_Solution_4_p1[(i1+5)]));
__m128d vec5 = _mm_loadu_pd((&fieldData_LaplaceCoeff_4_p1[(i1+2302)]));
__m128d vec5_2 = _mm_loadu_pd((&fieldData_LaplaceCoeff_4_p1[(i1+2304)]));
__m128d vec6 = _mm_loadu_pd((&fieldData_Solution_4_p1[(i1+41)]));
__m128d vec6_2 = _mm_loadu_pd((&fieldData_Solution_4_p1[(i1+43)]));
__m128d vec7 = _mm_loadu_pd((&fieldData_LaplaceCoeff_4_p1[(i1+1922)]));
__m128d vec7_2 = _mm_loadu_pd((&fieldData_LaplaceCoeff_4_p1[(i1+1924)]));
__m128d vec8 = _mm_loadu_pd((&fieldData_Solution_4_p1[(i1+1)]));
__m128d vec8_2 = _mm_loadu_pd((&fieldData_Solution_4_p1[(i1+3)]));
__m128d vec9 = _mm_loadu_pd((&fieldData_LaplaceCoeff_4_p1[(i1+1542)]));
__m128d vec9_2 = _mm_loadu_pd((&fieldData_LaplaceCoeff_4_p1[(i1+1544)]));
__m128d vec10 = _mm_loadu_pd((&fieldData_Solution_4_p1[(i1+2)]));
__m128d vec10_2 = _mm_loadu_pd((&fieldData_Solution_4_p1[(i1+4)]));
__m128d vec11 = _mm_loadu_pd((&fieldData_LaplaceCoeff_4_p1[(i1+1162)]));
__m128d vec11_2 = _mm_loadu_pd((&fieldData_LaplaceCoeff_4_p1[(i1+1164)]));
__m128d vec12 = _mm_loadu_pd((&fieldData_Solution_4_p1[(i1+42)]));
__m128d vec12_2 = _mm_loadu_pd((&fieldData_Solution_4_p1[(i1+44)]));
__m128d vec13 = _mm_loadu_pd((&fieldData_LaplaceCoeff_4_p1[(i1+782)]));
__m128d vec13_2 = _mm_loadu_pd((&fieldData_LaplaceCoeff_4_p1[(i1+784)]));
__m128d vec14 = _mm_loadu_pd((&fieldData_Solution_4_p1[(i1+21)]));
__m128d vec14_2 = _mm_loadu_pd((&fieldData_Solution_4_p1[(i1+23)]));
__m128d vec15 = _mm_loadu_pd((&fieldData_LaplaceCoeff_4_p1[(i1+22)]));
__m128d vec15_2 = _mm_loadu_pd((&fieldData_LaplaceCoeff_4_p1[(i1+24)]));
__m128d vec16 = _mm_loadu_pd((&fieldData_Solution_4_p1[(i1+22)]));
__m128d vec16_2 = _mm_loadu_pd((&fieldData_Solution_4_p1[(i1+24)]));
__m128d vec17 = _mm_loadu_pd((&fieldData_LaplaceCoeff_4_p1[(i1+402)]));
__m128d vec17_2 = _mm_loadu_pd((&fieldData_LaplaceCoeff_4_p1[(i1+404)]));
__m128d vec18 = _mm_loadu_pd((&fieldData_Solution_4_p1[(i1+23)]));
__m128d vec18_2 = _mm_loadu_pd((&fieldData_Solution_4_p1[(i1+25)]));
__m128d vec19;
__m128d vec19_2;
vec19 = _mm_sub_pd(vec0, _mm_add_pd(_mm_mul_pd(vec1, vec2), _mm_add_pd(_mm_mul_pd(vec3, vec4), _mm_add_pd(_mm_mul_pd(vec5, vec6), _mm_add_pd(_mm_mul_pd(vec7, vec8), _mm_add_pd(_mm_mul_pd(vec9, vec10), _mm_add_pd(_mm_mul_pd(vec11, vec12), _mm_add_pd(_mm_mul_pd(vec13, vec14), _mm_add_pd(_mm_mul_pd(vec15, vec16), _mm_mul_pd(vec17, vec18))))))))));
vec19_2 = _mm_sub_pd(vec0_2, _mm_add_pd(_mm_mul_pd(vec1_2, vec2_2), _mm_add_pd(_mm_mul_pd(vec3_2, vec4_2), _mm_add_pd(_mm_mul_pd(vec5_2, vec6_2), _mm_add_pd(_mm_mul_pd(vec7_2, vec8_2), _mm_add_pd(_mm_mul_pd(vec9_2, vec10_2), _mm_add_pd(_mm_mul_pd(vec11_2, vec12_2), _mm_add_pd(_mm_mul_pd(vec13_2, vec14_2), _mm_add_pd(_mm_mul_pd(vec15_2, vec16_2), _mm_mul_pd(vec17_2, vec18_2))))))))));
_mm_storeu_pd((&fieldData_Residual_4_p1[(i1+22)]), vec19);
_mm_storeu_pd((&fieldData_Residual_4_p1[(i1+24)]), vec19_2);
}
for (; (i1<((iterationOffsetEnd[1][0]+i0)+17)); i1 += 1) {
fieldData_Residual_4_p1[(i1+22)] = (fieldData_RHS_4_p1[i1]-(((((((((fieldData_LaplaceCoeff_4_p1[(i1+22)]*fieldData_Solution_4_p1[(i1+22)])+(fieldData_LaplaceCoeff_4_p1[(i1+402)]*fieldData_Solution_4_p1[(i1+23)]))+(fieldData_LaplaceCoeff_4_p1[(i1+782)]*fieldData_Solution_4_p1[(i1+21)]))+(fieldData_LaplaceCoeff_4_p1[(i1+1162)]*fieldData_Solution_4_p1[(i1+42)]))+(fieldData_LaplaceCoeff_4_p1[(i1+1542)]*fieldData_Solution_4_p1[(i1+2)]))+(fieldData_LaplaceCoeff_4_p1[(i1+1922)]*fieldData_Solution_4_p1[(i1+1)]))+(fieldData_LaplaceCoeff_4_p1[(i1+2302)]*fieldData_Solution_4_p1[(i1+41)]))+(fieldData_LaplaceCoeff_4_p1[(i1+2682)]*fieldData_Solution_4_p1[(i1+3)]))+(fieldData_LaplaceCoeff_4_p1[(i1+3062)]*fieldData_Solution_4_p1[(i1+43)])));
}
}
}
}
}
