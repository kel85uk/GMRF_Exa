#include "MultiGrid/MultiGrid.h"
void Restriction_GMRF_8() {
exchresidual_gmrfData_8(0);
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[0]) {
/* Statements in this Scop: S160 */
for (int i0 = iterationOffsetBegin[0][1]; (i0<=(iterationOffsetEnd[0][1]+128)); i0 += 1) {
double* fieldData_RHS_GMRF_7_p1 = (&fieldData_RHS_GMRF[7][(i0*130)]);
double* fieldData_Residual_GMRF_8_p1 = (&fieldData_Residual_GMRF[8][(i0*520)]);
int i1 = iterationOffsetBegin[0][0];
for (; (i1<=(iterationOffsetEnd[0][0]+127)); i1 += 2) {
fieldData_RHS_GMRF_7_p1[i1] = ((((((fieldData_Residual_GMRF_8_p1[((i1*2)+3)]+fieldData_Residual_GMRF_8_p1[((i1*2)+1)])+fieldData_Residual_GMRF_8_p1[((i1*2)+521)])+fieldData_Residual_GMRF_8_p1[((i1*2)+523)])*2.500000e-01)+((((fieldData_Residual_GMRF_8_p1[((i1*2)+2)]+fieldData_Residual_GMRF_8_p1[((i1*2)+261)])+fieldData_Residual_GMRF_8_p1[((i1*2)+522)])+fieldData_Residual_GMRF_8_p1[((i1*2)+263)])*5.000000e-01))+fieldData_Residual_GMRF_8_p1[((i1*2)+262)]);
fieldData_RHS_GMRF_7_p1[(i1+1)] = ((((((fieldData_Residual_GMRF_8_p1[((i1*2)+5)]+fieldData_Residual_GMRF_8_p1[((i1*2)+3)])+fieldData_Residual_GMRF_8_p1[((i1*2)+523)])+fieldData_Residual_GMRF_8_p1[((i1*2)+525)])*2.500000e-01)+((((fieldData_Residual_GMRF_8_p1[((i1*2)+4)]+fieldData_Residual_GMRF_8_p1[((i1*2)+263)])+fieldData_Residual_GMRF_8_p1[((i1*2)+524)])+fieldData_Residual_GMRF_8_p1[((i1*2)+265)])*5.000000e-01))+fieldData_Residual_GMRF_8_p1[((i1*2)+264)]);
}
for (; (i1<=(iterationOffsetEnd[0][0]+128)); i1 += 1) {
fieldData_RHS_GMRF_7_p1[i1] = ((((((fieldData_Residual_GMRF_8_p1[((i1*2)+3)]+fieldData_Residual_GMRF_8_p1[((i1*2)+1)])+fieldData_Residual_GMRF_8_p1[((i1*2)+521)])+fieldData_Residual_GMRF_8_p1[((i1*2)+523)])*2.500000e-01)+((((fieldData_Residual_GMRF_8_p1[((i1*2)+2)]+fieldData_Residual_GMRF_8_p1[((i1*2)+261)])+fieldData_Residual_GMRF_8_p1[((i1*2)+522)])+fieldData_Residual_GMRF_8_p1[((i1*2)+263)])*5.000000e-01))+fieldData_Residual_GMRF_8_p1[((i1*2)+262)]);
}
}
}
}
}
