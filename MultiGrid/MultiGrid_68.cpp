#include "MultiGrid/MultiGrid.h"
void Restriction_GMRF_5() {
exchresidual_gmrfData_5(0);
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[0]) {
/* Statements in this Scop: S157 */
for (int i0 = iterationOffsetBegin[0][1]; (i0<=(iterationOffsetEnd[0][1]+16)); i0 += 1) {
double* fieldData_RHS_GMRF_4_p1 = (&fieldData_RHS_GMRF[4][(i0*18)]);
double* fieldData_Residual_GMRF_5_p1 = (&fieldData_Residual_GMRF[5][(i0*72)]);
int i1 = iterationOffsetBegin[0][0];
for (; (i1<=(iterationOffsetEnd[0][0]+15)); i1 += 2) {
fieldData_RHS_GMRF_4_p1[i1] = ((((((fieldData_Residual_GMRF_5_p1[((i1*2)+75)]+fieldData_Residual_GMRF_5_p1[((i1*2)+3)])+fieldData_Residual_GMRF_5_p1[((i1*2)+73)])+fieldData_Residual_GMRF_5_p1[((i1*2)+1)])*2.500000e-01)+((((fieldData_Residual_GMRF_5_p1[((i1*2)+37)]+fieldData_Residual_GMRF_5_p1[((i1*2)+74)])+fieldData_Residual_GMRF_5_p1[((i1*2)+2)])+fieldData_Residual_GMRF_5_p1[((i1*2)+39)])*5.000000e-01))+fieldData_Residual_GMRF_5_p1[((i1*2)+38)]);
fieldData_RHS_GMRF_4_p1[(i1+1)] = ((((((fieldData_Residual_GMRF_5_p1[((i1*2)+77)]+fieldData_Residual_GMRF_5_p1[((i1*2)+5)])+fieldData_Residual_GMRF_5_p1[((i1*2)+75)])+fieldData_Residual_GMRF_5_p1[((i1*2)+3)])*2.500000e-01)+((((fieldData_Residual_GMRF_5_p1[((i1*2)+39)]+fieldData_Residual_GMRF_5_p1[((i1*2)+76)])+fieldData_Residual_GMRF_5_p1[((i1*2)+4)])+fieldData_Residual_GMRF_5_p1[((i1*2)+41)])*5.000000e-01))+fieldData_Residual_GMRF_5_p1[((i1*2)+40)]);
}
for (; (i1<=(iterationOffsetEnd[0][0]+16)); i1 += 1) {
fieldData_RHS_GMRF_4_p1[i1] = ((((((fieldData_Residual_GMRF_5_p1[((i1*2)+75)]+fieldData_Residual_GMRF_5_p1[((i1*2)+3)])+fieldData_Residual_GMRF_5_p1[((i1*2)+73)])+fieldData_Residual_GMRF_5_p1[((i1*2)+1)])*2.500000e-01)+((((fieldData_Residual_GMRF_5_p1[((i1*2)+37)]+fieldData_Residual_GMRF_5_p1[((i1*2)+74)])+fieldData_Residual_GMRF_5_p1[((i1*2)+2)])+fieldData_Residual_GMRF_5_p1[((i1*2)+39)])*5.000000e-01))+fieldData_Residual_GMRF_5_p1[((i1*2)+38)]);
}
}
}
}
}
