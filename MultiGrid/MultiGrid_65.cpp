#include "MultiGrid/MultiGrid.h"
void Restriction_GMRF_2() {
exchresidual_gmrfData_2(0);
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[0]) {
/* Statements in this Scop: S154 */
for (int i0 = iterationOffsetBegin[0][1]; (i0<=(iterationOffsetEnd[0][1]+2)); i0 += 1) {
double* fieldData_RHS_GMRF_1_p1 = (&fieldData_RHS_GMRF[1][(i0*4)]);
double* fieldData_Residual_GMRF_2_p1 = (&fieldData_Residual_GMRF[2][(i0*16)]);
int i1 = iterationOffsetBegin[0][0];
for (; (i1<=(iterationOffsetEnd[0][0]+1)); i1 += 2) {
fieldData_RHS_GMRF_1_p1[i1] = ((((((fieldData_Residual_GMRF_2_p1[((i1*2)+19)]+fieldData_Residual_GMRF_2_p1[((i1*2)+3)])+fieldData_Residual_GMRF_2_p1[((i1*2)+17)])+fieldData_Residual_GMRF_2_p1[((i1*2)+1)])*2.500000e-01)+((((fieldData_Residual_GMRF_2_p1[((i1*2)+11)]+fieldData_Residual_GMRF_2_p1[((i1*2)+2)])+fieldData_Residual_GMRF_2_p1[((i1*2)+18)])+fieldData_Residual_GMRF_2_p1[((i1*2)+9)])*5.000000e-01))+fieldData_Residual_GMRF_2_p1[((i1*2)+10)]);
fieldData_RHS_GMRF_1_p1[(i1+1)] = ((((((fieldData_Residual_GMRF_2_p1[((i1*2)+21)]+fieldData_Residual_GMRF_2_p1[((i1*2)+5)])+fieldData_Residual_GMRF_2_p1[((i1*2)+19)])+fieldData_Residual_GMRF_2_p1[((i1*2)+3)])*2.500000e-01)+((((fieldData_Residual_GMRF_2_p1[((i1*2)+13)]+fieldData_Residual_GMRF_2_p1[((i1*2)+4)])+fieldData_Residual_GMRF_2_p1[((i1*2)+20)])+fieldData_Residual_GMRF_2_p1[((i1*2)+11)])*5.000000e-01))+fieldData_Residual_GMRF_2_p1[((i1*2)+12)]);
}
for (; (i1<=(iterationOffsetEnd[0][0]+2)); i1 += 1) {
fieldData_RHS_GMRF_1_p1[i1] = ((((((fieldData_Residual_GMRF_2_p1[((i1*2)+19)]+fieldData_Residual_GMRF_2_p1[((i1*2)+3)])+fieldData_Residual_GMRF_2_p1[((i1*2)+17)])+fieldData_Residual_GMRF_2_p1[((i1*2)+1)])*2.500000e-01)+((((fieldData_Residual_GMRF_2_p1[((i1*2)+11)]+fieldData_Residual_GMRF_2_p1[((i1*2)+2)])+fieldData_Residual_GMRF_2_p1[((i1*2)+18)])+fieldData_Residual_GMRF_2_p1[((i1*2)+9)])*5.000000e-01))+fieldData_Residual_GMRF_2_p1[((i1*2)+10)]);
}
}
}
}
}
