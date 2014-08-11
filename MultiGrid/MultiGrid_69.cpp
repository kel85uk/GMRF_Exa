#include "MultiGrid/MultiGrid.h"
void Restriction_GMRF_6() {
exchresidual_gmrfData_6(0);
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[0]) {
/* Statements in this Scop: S158 */
for (int i0 = iterationOffsetBegin[0][1]; (i0<=(iterationOffsetEnd[0][1]+32)); i0 += 1) {
double* fieldData_RHS_GMRF_5_p1 = (&fieldData_RHS_GMRF[5][(i0*34)]);
double* fieldData_Residual_GMRF_6_p1 = (&fieldData_Residual_GMRF[6][(i0*136)]);
int i1 = iterationOffsetBegin[0][0];
for (; (i1<=(iterationOffsetEnd[0][0]+31)); i1 += 2) {
fieldData_RHS_GMRF_5_p1[i1] = ((((((fieldData_Residual_GMRF_6_p1[((i1*2)+3)]+fieldData_Residual_GMRF_6_p1[((i1*2)+139)])+fieldData_Residual_GMRF_6_p1[((i1*2)+137)])+fieldData_Residual_GMRF_6_p1[((i1*2)+1)])*2.500000e-01)+((((fieldData_Residual_GMRF_6_p1[((i1*2)+69)]+fieldData_Residual_GMRF_6_p1[((i1*2)+71)])+fieldData_Residual_GMRF_6_p1[((i1*2)+138)])+fieldData_Residual_GMRF_6_p1[((i1*2)+2)])*5.000000e-01))+fieldData_Residual_GMRF_6_p1[((i1*2)+70)]);
fieldData_RHS_GMRF_5_p1[(i1+1)] = ((((((fieldData_Residual_GMRF_6_p1[((i1*2)+5)]+fieldData_Residual_GMRF_6_p1[((i1*2)+141)])+fieldData_Residual_GMRF_6_p1[((i1*2)+139)])+fieldData_Residual_GMRF_6_p1[((i1*2)+3)])*2.500000e-01)+((((fieldData_Residual_GMRF_6_p1[((i1*2)+71)]+fieldData_Residual_GMRF_6_p1[((i1*2)+73)])+fieldData_Residual_GMRF_6_p1[((i1*2)+140)])+fieldData_Residual_GMRF_6_p1[((i1*2)+4)])*5.000000e-01))+fieldData_Residual_GMRF_6_p1[((i1*2)+72)]);
}
for (; (i1<=(iterationOffsetEnd[0][0]+32)); i1 += 1) {
fieldData_RHS_GMRF_5_p1[i1] = ((((((fieldData_Residual_GMRF_6_p1[((i1*2)+3)]+fieldData_Residual_GMRF_6_p1[((i1*2)+139)])+fieldData_Residual_GMRF_6_p1[((i1*2)+137)])+fieldData_Residual_GMRF_6_p1[((i1*2)+1)])*2.500000e-01)+((((fieldData_Residual_GMRF_6_p1[((i1*2)+69)]+fieldData_Residual_GMRF_6_p1[((i1*2)+71)])+fieldData_Residual_GMRF_6_p1[((i1*2)+138)])+fieldData_Residual_GMRF_6_p1[((i1*2)+2)])*5.000000e-01))+fieldData_Residual_GMRF_6_p1[((i1*2)+70)]);
}
}
}
}
}
