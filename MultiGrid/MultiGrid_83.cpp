#include "MultiGrid/MultiGrid.h"
void Correction_GMRF_4() {
exchsolution_gmrfData_4(0);
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[0]) {
/* Statements in this Scop: S172 */
for (int i0 = iterationOffsetBegin[0][1]; (i0<=(iterationOffsetEnd[0][1]+16)); i0 += 1) {
double* fieldData_Solution_GMRF_3_p2 = (&fieldData_Solution_GMRF[3][(((i0/2)*12)+((i0%2)*12))]);
double* fieldData_Solution_GMRF_3_p1 = (&fieldData_Solution_GMRF[3][((i0/2)*12)]);
double* fieldData_Solution_GMRF_4_p1 = (&fieldData_Solution_GMRF[4][(i0*19)]);
int i1 = (iterationOffsetBegin[0][0]+i0);
for (; (i1<=((iterationOffsetEnd[0][0]+i0)+15)); i1 += 2) {
fieldData_Solution_GMRF_4_p1[(i1+22)] += ((((fieldData_Solution_GMRF_3_p2[((((i1-i0)%2)+((i1-i0)/2))+14)]+fieldData_Solution_GMRF_3_p1[(((i1-i0)/2)+14)])+fieldData_Solution_GMRF_3_p2[(((i1-i0)/2)+14)])+fieldData_Solution_GMRF_3_p1[((((i1-i0)%2)+((i1-i0)/2))+14)])*2.500000e-01);
fieldData_Solution_GMRF_4_p1[(i1+23)] += ((((fieldData_Solution_GMRF_3_p2[(((((i1-i0)+1)/2)+(((i1-i0)+1)%2))+14)]+fieldData_Solution_GMRF_3_p1[((((i1-i0)+1)/2)+14)])+fieldData_Solution_GMRF_3_p2[((((i1-i0)+1)/2)+14)])+fieldData_Solution_GMRF_3_p1[(((((i1-i0)+1)/2)+(((i1-i0)+1)%2))+14)])*2.500000e-01);
}
for (; (i1<=((iterationOffsetEnd[0][0]+i0)+16)); i1 += 1) {
fieldData_Solution_GMRF_4_p1[(i1+22)] += ((((fieldData_Solution_GMRF_3_p2[((((i1-i0)%2)+((i1-i0)/2))+14)]+fieldData_Solution_GMRF_3_p1[(((i1-i0)/2)+14)])+fieldData_Solution_GMRF_3_p2[(((i1-i0)/2)+14)])+fieldData_Solution_GMRF_3_p1[((((i1-i0)%2)+((i1-i0)/2))+14)])*2.500000e-01);
}
}
}
}
}
