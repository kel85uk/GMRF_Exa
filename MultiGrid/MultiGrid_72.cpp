#include "MultiGrid/MultiGrid.h"
void Correction_1() {
exchsolutionData_1(0);
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[1]) {
/* Statements in this Scop: S161 */
for (int i0 = iterationOffsetBegin[1][1]; (i0<=(iterationOffsetEnd[1][1]+2)); i0 += 1) {
double* fieldData_Solution_0_p1 = (&fieldData_Solution[0][((i0/2)*6)]);
double* fieldData_Solution_0_p2 = (&fieldData_Solution[0][(((i0/2)*6)+((i0%2)*6))]);
double* fieldData_Solution_1_p1 = (&fieldData_Solution[1][(i0*5)]);
int i1 = (iterationOffsetBegin[1][0]+i0);
for (; (i1<=((iterationOffsetEnd[1][0]+i0)+1)); i1 += 2) {
fieldData_Solution_1_p1[(i1+8)] += ((((fieldData_Solution_0_p2[(((i1-i0)/2)+8)]+fieldData_Solution_0_p2[((((i1-i0)%2)+((i1-i0)/2))+8)])+fieldData_Solution_0_p1[(((i1-i0)/2)+8)])+fieldData_Solution_0_p1[((((i1-i0)%2)+((i1-i0)/2))+8)])*2.500000e-01);
fieldData_Solution_1_p1[(i1+9)] += ((((fieldData_Solution_0_p2[((((i1-i0)+1)/2)+8)]+fieldData_Solution_0_p2[(((((i1-i0)+1)/2)+(((i1-i0)+1)%2))+8)])+fieldData_Solution_0_p1[((((i1-i0)+1)/2)+8)])+fieldData_Solution_0_p1[(((((i1-i0)+1)/2)+(((i1-i0)+1)%2))+8)])*2.500000e-01);
}
for (; (i1<=((iterationOffsetEnd[1][0]+i0)+2)); i1 += 1) {
fieldData_Solution_1_p1[(i1+8)] += ((((fieldData_Solution_0_p2[(((i1-i0)/2)+8)]+fieldData_Solution_0_p2[((((i1-i0)%2)+((i1-i0)/2))+8)])+fieldData_Solution_0_p1[(((i1-i0)/2)+8)])+fieldData_Solution_0_p1[((((i1-i0)%2)+((i1-i0)/2))+8)])*2.500000e-01);
}
}
}
}
}
