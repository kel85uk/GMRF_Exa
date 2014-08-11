#include "MultiGrid/MultiGrid.h"
void Restriction_3() {
exchresidualData_3(0);
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[1]) {
/* Statements in this Scop: S147 */
for (int i0 = iterationOffsetBegin[1][1]; (i0<=(iterationOffsetEnd[1][1]+4)); i0 += 1) {
double* fieldData_RHS_2_p1 = (&fieldData_RHS[2][(i0*6)]);
double* fieldData_Residual_3_p1 = (&fieldData_Residual[3][(i0*24)]);
int i1 = iterationOffsetBegin[1][0];
for (; (i1<=(iterationOffsetEnd[1][0]+3)); i1 += 2) {
fieldData_RHS_2_p1[i1] = ((((((fieldData_Residual_3_p1[((i1*2)+3)]+fieldData_Residual_3_p1[((i1*2)+27)])+fieldData_Residual_3_p1[((i1*2)+1)])+fieldData_Residual_3_p1[((i1*2)+25)])*2.500000e-01)+((((fieldData_Residual_3_p1[((i1*2)+15)]+fieldData_Residual_3_p1[((i1*2)+26)])+fieldData_Residual_3_p1[((i1*2)+2)])+fieldData_Residual_3_p1[((i1*2)+13)])*5.000000e-01))+fieldData_Residual_3_p1[((i1*2)+14)]);
fieldData_RHS_2_p1[(i1+1)] = ((((((fieldData_Residual_3_p1[((i1*2)+5)]+fieldData_Residual_3_p1[((i1*2)+29)])+fieldData_Residual_3_p1[((i1*2)+3)])+fieldData_Residual_3_p1[((i1*2)+27)])*2.500000e-01)+((((fieldData_Residual_3_p1[((i1*2)+17)]+fieldData_Residual_3_p1[((i1*2)+28)])+fieldData_Residual_3_p1[((i1*2)+4)])+fieldData_Residual_3_p1[((i1*2)+15)])*5.000000e-01))+fieldData_Residual_3_p1[((i1*2)+16)]);
}
for (; (i1<=(iterationOffsetEnd[1][0]+4)); i1 += 1) {
fieldData_RHS_2_p1[i1] = ((((((fieldData_Residual_3_p1[((i1*2)+3)]+fieldData_Residual_3_p1[((i1*2)+27)])+fieldData_Residual_3_p1[((i1*2)+1)])+fieldData_Residual_3_p1[((i1*2)+25)])*2.500000e-01)+((((fieldData_Residual_3_p1[((i1*2)+15)]+fieldData_Residual_3_p1[((i1*2)+26)])+fieldData_Residual_3_p1[((i1*2)+2)])+fieldData_Residual_3_p1[((i1*2)+13)])*5.000000e-01))+fieldData_Residual_3_p1[((i1*2)+14)]);
}
}
}
}
}
