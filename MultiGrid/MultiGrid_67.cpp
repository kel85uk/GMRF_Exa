#include "MultiGrid/MultiGrid.h"
void Restriction_GMRF_4() {
exchresidual_gmrfData_4(0);
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[0]) {
/* Statements in this Scop: S156 */
for (int i0 = iterationOffsetBegin[0][1]; (i0<=(iterationOffsetEnd[0][1]+8)); i0 += 1) {
double* fieldData_RHS_GMRF_3_p1 = (&fieldData_RHS_GMRF[3][(i0*10)]);
double* fieldData_Residual_GMRF_4_p1 = (&fieldData_Residual_GMRF[4][(i0*40)]);
int i1 = iterationOffsetBegin[0][0];
for (; (i1<=(iterationOffsetEnd[0][0]+7)); i1 += 2) {
fieldData_RHS_GMRF_3_p1[i1] = ((((((fieldData_Residual_GMRF_4_p1[((i1*2)+41)]+fieldData_Residual_GMRF_4_p1[((i1*2)+1)])+fieldData_Residual_GMRF_4_p1[((i1*2)+43)])+fieldData_Residual_GMRF_4_p1[((i1*2)+3)])*2.500000e-01)+((((fieldData_Residual_GMRF_4_p1[((i1*2)+2)]+fieldData_Residual_GMRF_4_p1[((i1*2)+23)])+fieldData_Residual_GMRF_4_p1[((i1*2)+42)])+fieldData_Residual_GMRF_4_p1[((i1*2)+21)])*5.000000e-01))+fieldData_Residual_GMRF_4_p1[((i1*2)+22)]);
fieldData_RHS_GMRF_3_p1[(i1+1)] = ((((((fieldData_Residual_GMRF_4_p1[((i1*2)+43)]+fieldData_Residual_GMRF_4_p1[((i1*2)+3)])+fieldData_Residual_GMRF_4_p1[((i1*2)+45)])+fieldData_Residual_GMRF_4_p1[((i1*2)+5)])*2.500000e-01)+((((fieldData_Residual_GMRF_4_p1[((i1*2)+4)]+fieldData_Residual_GMRF_4_p1[((i1*2)+25)])+fieldData_Residual_GMRF_4_p1[((i1*2)+44)])+fieldData_Residual_GMRF_4_p1[((i1*2)+23)])*5.000000e-01))+fieldData_Residual_GMRF_4_p1[((i1*2)+24)]);
}
for (; (i1<=(iterationOffsetEnd[0][0]+8)); i1 += 1) {
fieldData_RHS_GMRF_3_p1[i1] = ((((((fieldData_Residual_GMRF_4_p1[((i1*2)+41)]+fieldData_Residual_GMRF_4_p1[((i1*2)+1)])+fieldData_Residual_GMRF_4_p1[((i1*2)+43)])+fieldData_Residual_GMRF_4_p1[((i1*2)+3)])*2.500000e-01)+((((fieldData_Residual_GMRF_4_p1[((i1*2)+2)]+fieldData_Residual_GMRF_4_p1[((i1*2)+23)])+fieldData_Residual_GMRF_4_p1[((i1*2)+42)])+fieldData_Residual_GMRF_4_p1[((i1*2)+21)])*5.000000e-01))+fieldData_Residual_GMRF_4_p1[((i1*2)+22)]);
}
}
}
}
}
