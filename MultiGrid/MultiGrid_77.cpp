#include "MultiGrid/MultiGrid.h"
void Correction_6() {
exchsolutionData_6(0);
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[1]) {
/* Statements in this Scop: S166 */
for (int i0 = iterationOffsetBegin[1][1]; (i0<=(iterationOffsetEnd[1][1]+64)); i0 += 1) {
double* fieldData_Solution_6_p1 = (&fieldData_Solution[6][(i0*67)]);
double* fieldData_Solution_5_p1 = (&fieldData_Solution[5][((i0/2)*36)]);
double* fieldData_Solution_5_p2 = (&fieldData_Solution[5][(((i0/2)*36)+((i0%2)*36))]);
int i1 = (iterationOffsetBegin[1][0]+i0);
for (; (i1<=((iterationOffsetEnd[1][0]+i0)+63)); i1 += 2) {
fieldData_Solution_6_p1[(i1+70)] += ((((fieldData_Solution_5_p1[(((i1-i0)/2)+38)]+fieldData_Solution_5_p2[((((i1-i0)%2)+((i1-i0)/2))+38)])+fieldData_Solution_5_p2[(((i1-i0)/2)+38)])+fieldData_Solution_5_p1[((((i1-i0)%2)+((i1-i0)/2))+38)])*2.500000e-01);
fieldData_Solution_6_p1[(i1+71)] += ((((fieldData_Solution_5_p1[((((i1-i0)+1)/2)+38)]+fieldData_Solution_5_p2[(((((i1-i0)+1)/2)+(((i1-i0)+1)%2))+38)])+fieldData_Solution_5_p2[((((i1-i0)+1)/2)+38)])+fieldData_Solution_5_p1[(((((i1-i0)+1)/2)+(((i1-i0)+1)%2))+38)])*2.500000e-01);
}
for (; (i1<=((iterationOffsetEnd[1][0]+i0)+64)); i1 += 1) {
fieldData_Solution_6_p1[(i1+70)] += ((((fieldData_Solution_5_p1[(((i1-i0)/2)+38)]+fieldData_Solution_5_p2[((((i1-i0)%2)+((i1-i0)/2))+38)])+fieldData_Solution_5_p2[(((i1-i0)/2)+38)])+fieldData_Solution_5_p1[((((i1-i0)%2)+((i1-i0)/2))+38)])*2.500000e-01);
}
}
}
}
}
