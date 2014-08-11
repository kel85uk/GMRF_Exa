#include "MultiGrid/MultiGrid.h"
void Correction_8() {
exchsolutionData_8(0);
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[1]) {
/* Statements in this Scop: S168 */
for (int i0 = iterationOffsetBegin[1][1]; (i0<=(iterationOffsetEnd[1][1]+256)); i0 += 1) {
double* fieldData_Solution_8_p1 = (&fieldData_Solution[8][(i0*259)]);
double* fieldData_Solution_7_p2 = (&fieldData_Solution[7][(((i0/2)*132)+((i0%2)*132))]);
double* fieldData_Solution_7_p1 = (&fieldData_Solution[7][((i0/2)*132)]);
int i1 = (iterationOffsetBegin[1][0]+i0);
for (; (i1<=((iterationOffsetEnd[1][0]+i0)+255)); i1 += 2) {
fieldData_Solution_8_p1[(i1+262)] += ((((fieldData_Solution_7_p2[((((i1-i0)%2)+((i1-i0)/2))+134)]+fieldData_Solution_7_p1[(((i1-i0)/2)+134)])+fieldData_Solution_7_p1[((((i1-i0)%2)+((i1-i0)/2))+134)])+fieldData_Solution_7_p2[(((i1-i0)/2)+134)])*2.500000e-01);
fieldData_Solution_8_p1[(i1+263)] += ((((fieldData_Solution_7_p2[(((((i1-i0)+1)/2)+(((i1-i0)+1)%2))+134)]+fieldData_Solution_7_p1[((((i1-i0)+1)/2)+134)])+fieldData_Solution_7_p1[(((((i1-i0)+1)/2)+(((i1-i0)+1)%2))+134)])+fieldData_Solution_7_p2[((((i1-i0)+1)/2)+134)])*2.500000e-01);
}
for (; (i1<=((iterationOffsetEnd[1][0]+i0)+256)); i1 += 1) {
fieldData_Solution_8_p1[(i1+262)] += ((((fieldData_Solution_7_p2[((((i1-i0)%2)+((i1-i0)/2))+134)]+fieldData_Solution_7_p1[(((i1-i0)/2)+134)])+fieldData_Solution_7_p1[((((i1-i0)%2)+((i1-i0)/2))+134)])+fieldData_Solution_7_p2[(((i1-i0)/2)+134)])*2.500000e-01);
}
}
}
}
}
