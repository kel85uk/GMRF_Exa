#include "MultiGrid/MultiGrid.h"
void Restriction_1() {
exchresidualData_1(0);
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[1]) {
/* Statements in this Scop: S145 */
for (int i0 = iterationOffsetBegin[1][1]; (i0<=(iterationOffsetEnd[1][1]+1)); i0 += 1) {
double* fieldData_RHS_0_p1 = (&fieldData_RHS[0][(i0*2)]);
double* fieldData_Residual_1_p1 = (&fieldData_Residual[1][(i0*12)]);
int i1 = iterationOffsetBegin[1][0];
for (; (i1<=iterationOffsetEnd[1][0]); i1 += 2) {
fieldData_RHS_0_p1[i1] = ((((((fieldData_Residual_1_p1[((i1*2)+15)]+fieldData_Residual_1_p1[((i1*2)+1)])+fieldData_Residual_1_p1[((i1*2)+3)])+fieldData_Residual_1_p1[((i1*2)+13)])*2.500000e-01)+((((fieldData_Residual_1_p1[((i1*2)+14)]+fieldData_Residual_1_p1[((i1*2)+9)])+fieldData_Residual_1_p1[((i1*2)+2)])+fieldData_Residual_1_p1[((i1*2)+7)])*5.000000e-01))+fieldData_Residual_1_p1[((i1*2)+8)]);
fieldData_RHS_0_p1[(i1+1)] = ((((((fieldData_Residual_1_p1[((i1*2)+17)]+fieldData_Residual_1_p1[((i1*2)+3)])+fieldData_Residual_1_p1[((i1*2)+5)])+fieldData_Residual_1_p1[((i1*2)+15)])*2.500000e-01)+((((fieldData_Residual_1_p1[((i1*2)+16)]+fieldData_Residual_1_p1[((i1*2)+11)])+fieldData_Residual_1_p1[((i1*2)+4)])+fieldData_Residual_1_p1[((i1*2)+9)])*5.000000e-01))+fieldData_Residual_1_p1[((i1*2)+10)]);
}
for (; (i1<=(iterationOffsetEnd[1][0]+1)); i1 += 1) {
fieldData_RHS_0_p1[i1] = ((((((fieldData_Residual_1_p1[((i1*2)+15)]+fieldData_Residual_1_p1[((i1*2)+1)])+fieldData_Residual_1_p1[((i1*2)+3)])+fieldData_Residual_1_p1[((i1*2)+13)])*2.500000e-01)+((((fieldData_Residual_1_p1[((i1*2)+14)]+fieldData_Residual_1_p1[((i1*2)+9)])+fieldData_Residual_1_p1[((i1*2)+2)])+fieldData_Residual_1_p1[((i1*2)+7)])*5.000000e-01))+fieldData_Residual_1_p1[((i1*2)+8)]);
}
}
}
}
}
