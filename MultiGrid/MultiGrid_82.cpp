#include "MultiGrid/MultiGrid.h"
void Correction_GMRF_3() {
exchsolution_gmrfData_3(0);
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[0]) {
/* Statements in this Scop: S171 */
for (int i0 = iterationOffsetBegin[0][1]; (i0<=(iterationOffsetEnd[0][1]+8)); i0 += 1) {
double* fieldData_Solution_GMRF_3_p1 = (&fieldData_Solution_GMRF[3][(i0*11)]);
double* fieldData_Solution_GMRF_2_p1 = (&fieldData_Solution_GMRF[2][((i0/2)*8)]);
double* fieldData_Solution_GMRF_2_p2 = (&fieldData_Solution_GMRF[2][(((i0/2)*8)+((i0%2)*8))]);
int i1 = (iterationOffsetBegin[0][0]+i0);
for (; (i1<=((iterationOffsetEnd[0][0]+i0)+7)); i1 += 2) {
fieldData_Solution_GMRF_3_p1[(i1+14)] += ((((fieldData_Solution_GMRF_2_p2[(((i1-i0)/2)+10)]+fieldData_Solution_GMRF_2_p1[(((i1-i0)/2)+10)])+fieldData_Solution_GMRF_2_p2[((((i1-i0)%2)+((i1-i0)/2))+10)])+fieldData_Solution_GMRF_2_p1[((((i1-i0)%2)+((i1-i0)/2))+10)])*2.500000e-01);
fieldData_Solution_GMRF_3_p1[(i1+15)] += ((((fieldData_Solution_GMRF_2_p2[((((i1-i0)+1)/2)+10)]+fieldData_Solution_GMRF_2_p1[((((i1-i0)+1)/2)+10)])+fieldData_Solution_GMRF_2_p2[(((((i1-i0)+1)/2)+(((i1-i0)+1)%2))+10)])+fieldData_Solution_GMRF_2_p1[(((((i1-i0)+1)/2)+(((i1-i0)+1)%2))+10)])*2.500000e-01);
}
for (; (i1<=((iterationOffsetEnd[0][0]+i0)+8)); i1 += 1) {
fieldData_Solution_GMRF_3_p1[(i1+14)] += ((((fieldData_Solution_GMRF_2_p2[(((i1-i0)/2)+10)]+fieldData_Solution_GMRF_2_p1[(((i1-i0)/2)+10)])+fieldData_Solution_GMRF_2_p2[((((i1-i0)%2)+((i1-i0)/2))+10)])+fieldData_Solution_GMRF_2_p1[((((i1-i0)%2)+((i1-i0)/2))+10)])*2.500000e-01);
}
}
}
}
}
