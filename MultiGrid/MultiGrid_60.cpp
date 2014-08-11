#include "MultiGrid/MultiGrid.h"
void Restriction_5() {
exchresidualData_5(0);
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[1]) {
/* Statements in this Scop: S149 */
for (int i0 = iterationOffsetBegin[1][1]; (i0<=(iterationOffsetEnd[1][1]+16)); i0 += 1) {
double* fieldData_RHS_4_p1 = (&fieldData_RHS[4][(i0*18)]);
double* fieldData_Residual_5_p1 = (&fieldData_Residual[5][(i0*72)]);
int i1 = iterationOffsetBegin[1][0];
for (; (i1<=(iterationOffsetEnd[1][0]+15)); i1 += 2) {
fieldData_RHS_4_p1[i1] = ((((((fieldData_Residual_5_p1[((i1*2)+75)]+fieldData_Residual_5_p1[((i1*2)+73)])+fieldData_Residual_5_p1[((i1*2)+1)])+fieldData_Residual_5_p1[((i1*2)+3)])*2.500000e-01)+((((fieldData_Residual_5_p1[((i1*2)+2)]+fieldData_Residual_5_p1[((i1*2)+74)])+fieldData_Residual_5_p1[((i1*2)+37)])+fieldData_Residual_5_p1[((i1*2)+39)])*5.000000e-01))+fieldData_Residual_5_p1[((i1*2)+38)]);
fieldData_RHS_4_p1[(i1+1)] = ((((((fieldData_Residual_5_p1[((i1*2)+77)]+fieldData_Residual_5_p1[((i1*2)+75)])+fieldData_Residual_5_p1[((i1*2)+3)])+fieldData_Residual_5_p1[((i1*2)+5)])*2.500000e-01)+((((fieldData_Residual_5_p1[((i1*2)+4)]+fieldData_Residual_5_p1[((i1*2)+76)])+fieldData_Residual_5_p1[((i1*2)+39)])+fieldData_Residual_5_p1[((i1*2)+41)])*5.000000e-01))+fieldData_Residual_5_p1[((i1*2)+40)]);
}
for (; (i1<=(iterationOffsetEnd[1][0]+16)); i1 += 1) {
fieldData_RHS_4_p1[i1] = ((((((fieldData_Residual_5_p1[((i1*2)+75)]+fieldData_Residual_5_p1[((i1*2)+73)])+fieldData_Residual_5_p1[((i1*2)+1)])+fieldData_Residual_5_p1[((i1*2)+3)])*2.500000e-01)+((((fieldData_Residual_5_p1[((i1*2)+2)]+fieldData_Residual_5_p1[((i1*2)+74)])+fieldData_Residual_5_p1[((i1*2)+37)])+fieldData_Residual_5_p1[((i1*2)+39)])*5.000000e-01))+fieldData_Residual_5_p1[((i1*2)+38)]);
}
}
}
}
}
