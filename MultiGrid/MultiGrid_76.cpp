#include "MultiGrid/MultiGrid.h"
void Correction_5() {
exchsolutionData_5(0);
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[1]) {
/* Statements in this Scop: S165 */
for (int i0 = iterationOffsetBegin[1][1]; (i0<=(iterationOffsetEnd[1][1]+32)); i0 += 1) {
double* fieldData_Solution_5_p1 = (&fieldData_Solution[5][(i0*35)]);
double* fieldData_Solution_4_p2 = (&fieldData_Solution[4][(((i0/2)*20)+((i0%2)*20))]);
double* fieldData_Solution_4_p1 = (&fieldData_Solution[4][((i0/2)*20)]);
int i1 = (iterationOffsetBegin[1][0]+i0);
for (; (i1<=((iterationOffsetEnd[1][0]+i0)+31)); i1 += 2) {
fieldData_Solution_5_p1[(i1+38)] += ((((fieldData_Solution_4_p2[(((i1-i0)/2)+22)]+fieldData_Solution_4_p1[(((i1-i0)/2)+22)])+fieldData_Solution_4_p2[((((i1-i0)%2)+((i1-i0)/2))+22)])+fieldData_Solution_4_p1[((((i1-i0)%2)+((i1-i0)/2))+22)])*2.500000e-01);
fieldData_Solution_5_p1[(i1+39)] += ((((fieldData_Solution_4_p2[((((i1-i0)+1)/2)+22)]+fieldData_Solution_4_p1[((((i1-i0)+1)/2)+22)])+fieldData_Solution_4_p2[(((((i1-i0)+1)/2)+(((i1-i0)+1)%2))+22)])+fieldData_Solution_4_p1[(((((i1-i0)+1)/2)+(((i1-i0)+1)%2))+22)])*2.500000e-01);
}
for (; (i1<=((iterationOffsetEnd[1][0]+i0)+32)); i1 += 1) {
fieldData_Solution_5_p1[(i1+38)] += ((((fieldData_Solution_4_p2[(((i1-i0)/2)+22)]+fieldData_Solution_4_p1[(((i1-i0)/2)+22)])+fieldData_Solution_4_p2[((((i1-i0)%2)+((i1-i0)/2))+22)])+fieldData_Solution_4_p1[((((i1-i0)%2)+((i1-i0)/2))+22)])*2.500000e-01);
}
}
}
}
}
