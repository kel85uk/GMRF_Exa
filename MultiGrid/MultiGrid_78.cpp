#include "MultiGrid/MultiGrid.h"
void Correction_7() {
exchsolutionData_7(0);
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[1]) {
/* Statements in this Scop: S167 */
for (int i0 = iterationOffsetBegin[1][1]; (i0<=(iterationOffsetEnd[1][1]+128)); i0 += 1) {
double* fieldData_Solution_6_p2 = (&fieldData_Solution[6][(((i0/2)*68)+((i0%2)*68))]);
double* fieldData_Solution_6_p1 = (&fieldData_Solution[6][((i0/2)*68)]);
double* fieldData_Solution_7_p1 = (&fieldData_Solution[7][(i0*131)]);
int i1 = (iterationOffsetBegin[1][0]+i0);
for (; (i1<=((iterationOffsetEnd[1][0]+i0)+127)); i1 += 2) {
fieldData_Solution_7_p1[(i1+134)] += ((((fieldData_Solution_6_p1[((((i1-i0)%2)+((i1-i0)/2))+70)]+fieldData_Solution_6_p1[(((i1-i0)/2)+70)])+fieldData_Solution_6_p2[(((i1-i0)/2)+70)])+fieldData_Solution_6_p2[((((i1-i0)%2)+((i1-i0)/2))+70)])*2.500000e-01);
fieldData_Solution_7_p1[(i1+135)] += ((((fieldData_Solution_6_p1[(((((i1-i0)+1)/2)+(((i1-i0)+1)%2))+70)]+fieldData_Solution_6_p1[((((i1-i0)+1)/2)+70)])+fieldData_Solution_6_p2[((((i1-i0)+1)/2)+70)])+fieldData_Solution_6_p2[(((((i1-i0)+1)/2)+(((i1-i0)+1)%2))+70)])*2.500000e-01);
}
for (; (i1<=((iterationOffsetEnd[1][0]+i0)+128)); i1 += 1) {
fieldData_Solution_7_p1[(i1+134)] += ((((fieldData_Solution_6_p1[((((i1-i0)%2)+((i1-i0)/2))+70)]+fieldData_Solution_6_p1[(((i1-i0)/2)+70)])+fieldData_Solution_6_p2[(((i1-i0)/2)+70)])+fieldData_Solution_6_p2[((((i1-i0)%2)+((i1-i0)/2))+70)])*2.500000e-01);
}
}
}
}
}
