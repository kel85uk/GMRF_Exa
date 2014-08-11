#include "MultiGrid/MultiGrid.h"
void UpResidual_GMRF_8() {
exchsolution_gmrfData_8(0);
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[0]) {
/* Statements in this Scop: S144 */
for (int i0 = iterationOffsetBegin[0][1]; (i0<=(iterationOffsetEnd[0][1]+256)); i0 += 1) {
double* fieldData_Residual_GMRF_8_p1 = (&fieldData_Residual_GMRF[8][(i0*259)]);
double* fieldData_Solution_GMRF_8_p1 = (&fieldData_Solution_GMRF[8][(i0*259)]);
double* fieldData_RHS_GMRF_8_p1 = (&fieldData_RHS_GMRF[8][(i0*257)]);
double* fieldData_LaplaceCoeff_GMRF_8_p1 = (&fieldData_LaplaceCoeff_GMRF[8][(i0*259)]);
int i1 = (iterationOffsetBegin[0][0]+i0);
for (; (i1<(((iterationOffsetBegin[0][0]+i0)+1)&(~1))); i1 += 1) {
fieldData_Residual_GMRF_8_p1[(i1+262)] = (fieldData_RHS_GMRF_8_p1[i1]-(((((((((fieldData_LaplaceCoeff_GMRF_8_p1[(i1+262)]*fieldData_Solution_GMRF_8_p1[(i1+262)])+(fieldData_LaplaceCoeff_GMRF_8_p1[(i1+67602)]*fieldData_Solution_GMRF_8_p1[(i1+263)]))+(fieldData_LaplaceCoeff_GMRF_8_p1[(i1+134942)]*fieldData_Solution_GMRF_8_p1[(i1+261)]))+(fieldData_LaplaceCoeff_GMRF_8_p1[(i1+202282)]*fieldData_Solution_GMRF_8_p1[(i1+522)]))+(fieldData_LaplaceCoeff_GMRF_8_p1[(i1+269622)]*fieldData_Solution_GMRF_8_p1[(i1+2)]))+(fieldData_LaplaceCoeff_GMRF_8_p1[(i1+336962)]*fieldData_Solution_GMRF_8_p1[(i1+1)]))+(fieldData_LaplaceCoeff_GMRF_8_p1[(i1+404302)]*fieldData_Solution_GMRF_8_p1[(i1+521)]))+(fieldData_LaplaceCoeff_GMRF_8_p1[(i1+471642)]*fieldData_Solution_GMRF_8_p1[(i1+3)]))+(fieldData_LaplaceCoeff_GMRF_8_p1[(i1+538982)]*fieldData_Solution_GMRF_8_p1[(i1+523)])));
}
for (; (i1<((iterationOffsetEnd[0][0]+i0)+254)); i1 += 4) {
/* fieldData_Residual_GMRF_8_p1[(i1+262)] = (fieldData_RHS_GMRF_8_p1[i1]-(((((((((fieldData_LaplaceCoeff_GMRF_8_p1[(i1+262)]*fieldData_Solution_GMRF_8_p1[(i1+262)])+(fieldData_LaplaceCoeff_GMRF_8_p1[(i1+67602)]*fieldData_Solution_GMRF_8_p1[(i1+263)]))+(fieldData_LaplaceCoeff_GMRF_8_p1[(i1+134942)]*fieldData_Solution_GMRF_8_p1[(i1+261)]))+(fieldData_LaplaceCoeff_GMRF_8_p1[(i1+202282)]*fieldData_Solution_GMRF_8_p1[(i1+522)]))+(fieldData_LaplaceCoeff_GMRF_8_p1[(i1+269622)]*fieldData_Solution_GMRF_8_p1[(i1+2)]))+(fieldData_LaplaceCoeff_GMRF_8_p1[(i1+336962)]*fieldData_Solution_GMRF_8_p1[(i1+1)]))+(fieldData_LaplaceCoeff_GMRF_8_p1[(i1+404302)]*fieldData_Solution_GMRF_8_p1[(i1+521)]))+(fieldData_LaplaceCoeff_GMRF_8_p1[(i1+471642)]*fieldData_Solution_GMRF_8_p1[(i1+3)]))+(fieldData_LaplaceCoeff_GMRF_8_p1[(i1+538982)]*fieldData_Solution_GMRF_8_p1[(i1+523)]))); */
__m128d vec0 = _mm_loadu_pd((&fieldData_RHS_GMRF_8_p1[i1]));
__m128d vec0_2 = _mm_loadu_pd((&fieldData_RHS_GMRF_8_p1[(i1+2)]));
__m128d vec1 = _mm_loadu_pd((&fieldData_LaplaceCoeff_GMRF_8_p1[(i1+538982)]));
__m128d vec1_2 = _mm_loadu_pd((&fieldData_LaplaceCoeff_GMRF_8_p1[(i1+538984)]));
__m128d vec2 = _mm_loadu_pd((&fieldData_Solution_GMRF_8_p1[(i1+523)]));
__m128d vec2_2 = _mm_loadu_pd((&fieldData_Solution_GMRF_8_p1[(i1+525)]));
__m128d vec3 = _mm_loadu_pd((&fieldData_LaplaceCoeff_GMRF_8_p1[(i1+471642)]));
__m128d vec3_2 = _mm_loadu_pd((&fieldData_LaplaceCoeff_GMRF_8_p1[(i1+471644)]));
__m128d vec4 = _mm_loadu_pd((&fieldData_Solution_GMRF_8_p1[(i1+3)]));
__m128d vec4_2 = _mm_loadu_pd((&fieldData_Solution_GMRF_8_p1[(i1+5)]));
__m128d vec5 = _mm_loadu_pd((&fieldData_LaplaceCoeff_GMRF_8_p1[(i1+404302)]));
__m128d vec5_2 = _mm_loadu_pd((&fieldData_LaplaceCoeff_GMRF_8_p1[(i1+404304)]));
__m128d vec6 = _mm_loadu_pd((&fieldData_Solution_GMRF_8_p1[(i1+521)]));
__m128d vec6_2 = _mm_loadu_pd((&fieldData_Solution_GMRF_8_p1[(i1+523)]));
__m128d vec7 = _mm_loadu_pd((&fieldData_LaplaceCoeff_GMRF_8_p1[(i1+336962)]));
__m128d vec7_2 = _mm_loadu_pd((&fieldData_LaplaceCoeff_GMRF_8_p1[(i1+336964)]));
__m128d vec8 = _mm_loadu_pd((&fieldData_Solution_GMRF_8_p1[(i1+1)]));
__m128d vec8_2 = _mm_loadu_pd((&fieldData_Solution_GMRF_8_p1[(i1+3)]));
__m128d vec9 = _mm_loadu_pd((&fieldData_LaplaceCoeff_GMRF_8_p1[(i1+269622)]));
__m128d vec9_2 = _mm_loadu_pd((&fieldData_LaplaceCoeff_GMRF_8_p1[(i1+269624)]));
__m128d vec10 = _mm_loadu_pd((&fieldData_Solution_GMRF_8_p1[(i1+2)]));
__m128d vec10_2 = _mm_loadu_pd((&fieldData_Solution_GMRF_8_p1[(i1+4)]));
__m128d vec11 = _mm_loadu_pd((&fieldData_LaplaceCoeff_GMRF_8_p1[(i1+202282)]));
__m128d vec11_2 = _mm_loadu_pd((&fieldData_LaplaceCoeff_GMRF_8_p1[(i1+202284)]));
__m128d vec12 = _mm_loadu_pd((&fieldData_Solution_GMRF_8_p1[(i1+522)]));
__m128d vec12_2 = _mm_loadu_pd((&fieldData_Solution_GMRF_8_p1[(i1+524)]));
__m128d vec13 = _mm_loadu_pd((&fieldData_LaplaceCoeff_GMRF_8_p1[(i1+134942)]));
__m128d vec13_2 = _mm_loadu_pd((&fieldData_LaplaceCoeff_GMRF_8_p1[(i1+134944)]));
__m128d vec14 = _mm_loadu_pd((&fieldData_Solution_GMRF_8_p1[(i1+261)]));
__m128d vec14_2 = _mm_loadu_pd((&fieldData_Solution_GMRF_8_p1[(i1+263)]));
__m128d vec15 = _mm_loadu_pd((&fieldData_LaplaceCoeff_GMRF_8_p1[(i1+262)]));
__m128d vec15_2 = _mm_loadu_pd((&fieldData_LaplaceCoeff_GMRF_8_p1[(i1+264)]));
__m128d vec16 = _mm_loadu_pd((&fieldData_Solution_GMRF_8_p1[(i1+262)]));
__m128d vec16_2 = _mm_loadu_pd((&fieldData_Solution_GMRF_8_p1[(i1+264)]));
__m128d vec17 = _mm_loadu_pd((&fieldData_LaplaceCoeff_GMRF_8_p1[(i1+67602)]));
__m128d vec17_2 = _mm_loadu_pd((&fieldData_LaplaceCoeff_GMRF_8_p1[(i1+67604)]));
__m128d vec18 = _mm_loadu_pd((&fieldData_Solution_GMRF_8_p1[(i1+263)]));
__m128d vec18_2 = _mm_loadu_pd((&fieldData_Solution_GMRF_8_p1[(i1+265)]));
__m128d vec19;
__m128d vec19_2;
vec19 = _mm_sub_pd(vec0, _mm_add_pd(_mm_mul_pd(vec1, vec2), _mm_add_pd(_mm_mul_pd(vec3, vec4), _mm_add_pd(_mm_mul_pd(vec5, vec6), _mm_add_pd(_mm_mul_pd(vec7, vec8), _mm_add_pd(_mm_mul_pd(vec9, vec10), _mm_add_pd(_mm_mul_pd(vec11, vec12), _mm_add_pd(_mm_mul_pd(vec13, vec14), _mm_add_pd(_mm_mul_pd(vec15, vec16), _mm_mul_pd(vec17, vec18))))))))));
vec19_2 = _mm_sub_pd(vec0_2, _mm_add_pd(_mm_mul_pd(vec1_2, vec2_2), _mm_add_pd(_mm_mul_pd(vec3_2, vec4_2), _mm_add_pd(_mm_mul_pd(vec5_2, vec6_2), _mm_add_pd(_mm_mul_pd(vec7_2, vec8_2), _mm_add_pd(_mm_mul_pd(vec9_2, vec10_2), _mm_add_pd(_mm_mul_pd(vec11_2, vec12_2), _mm_add_pd(_mm_mul_pd(vec13_2, vec14_2), _mm_add_pd(_mm_mul_pd(vec15_2, vec16_2), _mm_mul_pd(vec17_2, vec18_2))))))))));
_mm_storeu_pd((&fieldData_Residual_GMRF_8_p1[(i1+262)]), vec19);
_mm_storeu_pd((&fieldData_Residual_GMRF_8_p1[(i1+264)]), vec19_2);
}
for (; (i1<((iterationOffsetEnd[0][0]+i0)+257)); i1 += 1) {
fieldData_Residual_GMRF_8_p1[(i1+262)] = (fieldData_RHS_GMRF_8_p1[i1]-(((((((((fieldData_LaplaceCoeff_GMRF_8_p1[(i1+262)]*fieldData_Solution_GMRF_8_p1[(i1+262)])+(fieldData_LaplaceCoeff_GMRF_8_p1[(i1+67602)]*fieldData_Solution_GMRF_8_p1[(i1+263)]))+(fieldData_LaplaceCoeff_GMRF_8_p1[(i1+134942)]*fieldData_Solution_GMRF_8_p1[(i1+261)]))+(fieldData_LaplaceCoeff_GMRF_8_p1[(i1+202282)]*fieldData_Solution_GMRF_8_p1[(i1+522)]))+(fieldData_LaplaceCoeff_GMRF_8_p1[(i1+269622)]*fieldData_Solution_GMRF_8_p1[(i1+2)]))+(fieldData_LaplaceCoeff_GMRF_8_p1[(i1+336962)]*fieldData_Solution_GMRF_8_p1[(i1+1)]))+(fieldData_LaplaceCoeff_GMRF_8_p1[(i1+404302)]*fieldData_Solution_GMRF_8_p1[(i1+521)]))+(fieldData_LaplaceCoeff_GMRF_8_p1[(i1+471642)]*fieldData_Solution_GMRF_8_p1[(i1+3)]))+(fieldData_LaplaceCoeff_GMRF_8_p1[(i1+538982)]*fieldData_Solution_GMRF_8_p1[(i1+523)])));
}
}
}
}
}
