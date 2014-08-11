#include "MultiGrid/MultiGrid.h"
void Restriction_4() {
exchresidualData_4(0);
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[1]) {
/* Statements in this Scop: S148 */
for (int i0 = iterationOffsetBegin[1][1]; (i0<=(iterationOffsetEnd[1][1]+8)); i0 += 1) {
double* fieldData_RHS_3_p1 = (&fieldData_RHS[3][(i0*10)]);
double* fieldData_Residual_4_p1 = (&fieldData_Residual[4][(i0*40)]);
int i1 = iterationOffsetBegin[1][0];
for (; (i1<=(iterationOffsetEnd[1][0]+7)); i1 += 2) {
fieldData_RHS_3_p1[i1] = ((((((fieldData_Residual_4_p1[((i1*2)+43)]+fieldData_Residual_4_p1[((i1*2)+3)])+fieldData_Residual_4_p1[((i1*2)+41)])+fieldData_Residual_4_p1[((i1*2)+1)])*2.500000e-01)+((((fieldData_Residual_4_p1[((i1*2)+21)]+fieldData_Residual_4_p1[((i1*2)+2)])+fieldData_Residual_4_p1[((i1*2)+42)])+fieldData_Residual_4_p1[((i1*2)+23)])*5.000000e-01))+fieldData_Residual_4_p1[((i1*2)+22)]);
fieldData_RHS_3_p1[(i1+1)] = ((((((fieldData_Residual_4_p1[((i1*2)+45)]+fieldData_Residual_4_p1[((i1*2)+5)])+fieldData_Residual_4_p1[((i1*2)+43)])+fieldData_Residual_4_p1[((i1*2)+3)])*2.500000e-01)+((((fieldData_Residual_4_p1[((i1*2)+23)]+fieldData_Residual_4_p1[((i1*2)+4)])+fieldData_Residual_4_p1[((i1*2)+44)])+fieldData_Residual_4_p1[((i1*2)+25)])*5.000000e-01))+fieldData_Residual_4_p1[((i1*2)+24)]);
}
for (; (i1<=(iterationOffsetEnd[1][0]+8)); i1 += 1) {
fieldData_RHS_3_p1[i1] = ((((((fieldData_Residual_4_p1[((i1*2)+43)]+fieldData_Residual_4_p1[((i1*2)+3)])+fieldData_Residual_4_p1[((i1*2)+41)])+fieldData_Residual_4_p1[((i1*2)+1)])*2.500000e-01)+((((fieldData_Residual_4_p1[((i1*2)+21)]+fieldData_Residual_4_p1[((i1*2)+2)])+fieldData_Residual_4_p1[((i1*2)+42)])+fieldData_Residual_4_p1[((i1*2)+23)])*5.000000e-01))+fieldData_Residual_4_p1[((i1*2)+22)]);
}
}
}
}
}
