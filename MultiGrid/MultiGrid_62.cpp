#include "MultiGrid/MultiGrid.h"
void Restriction_7() {
exchresidualData_7(0);
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[1]) {
/* Statements in this Scop: S151 */
for (int i0 = iterationOffsetBegin[1][1]; (i0<=(iterationOffsetEnd[1][1]+64)); i0 += 1) {
double* fieldData_RHS_6_p1 = (&fieldData_RHS[6][(i0*66)]);
double* fieldData_Residual_7_p1 = (&fieldData_Residual[7][(i0*264)]);
int i1 = iterationOffsetBegin[1][0];
for (; (i1<=(iterationOffsetEnd[1][0]+63)); i1 += 2) {
fieldData_RHS_6_p1[i1] = ((((((fieldData_Residual_7_p1[((i1*2)+1)]+fieldData_Residual_7_p1[((i1*2)+3)])+fieldData_Residual_7_p1[((i1*2)+267)])+fieldData_Residual_7_p1[((i1*2)+265)])*2.500000e-01)+((((fieldData_Residual_7_p1[((i1*2)+2)]+fieldData_Residual_7_p1[((i1*2)+133)])+fieldData_Residual_7_p1[((i1*2)+266)])+fieldData_Residual_7_p1[((i1*2)+135)])*5.000000e-01))+fieldData_Residual_7_p1[((i1*2)+134)]);
fieldData_RHS_6_p1[(i1+1)] = ((((((fieldData_Residual_7_p1[((i1*2)+3)]+fieldData_Residual_7_p1[((i1*2)+5)])+fieldData_Residual_7_p1[((i1*2)+269)])+fieldData_Residual_7_p1[((i1*2)+267)])*2.500000e-01)+((((fieldData_Residual_7_p1[((i1*2)+4)]+fieldData_Residual_7_p1[((i1*2)+135)])+fieldData_Residual_7_p1[((i1*2)+268)])+fieldData_Residual_7_p1[((i1*2)+137)])*5.000000e-01))+fieldData_Residual_7_p1[((i1*2)+136)]);
}
for (; (i1<=(iterationOffsetEnd[1][0]+64)); i1 += 1) {
fieldData_RHS_6_p1[i1] = ((((((fieldData_Residual_7_p1[((i1*2)+1)]+fieldData_Residual_7_p1[((i1*2)+3)])+fieldData_Residual_7_p1[((i1*2)+267)])+fieldData_Residual_7_p1[((i1*2)+265)])*2.500000e-01)+((((fieldData_Residual_7_p1[((i1*2)+2)]+fieldData_Residual_7_p1[((i1*2)+133)])+fieldData_Residual_7_p1[((i1*2)+266)])+fieldData_Residual_7_p1[((i1*2)+135)])*5.000000e-01))+fieldData_Residual_7_p1[((i1*2)+134)]);
}
}
}
}
}
