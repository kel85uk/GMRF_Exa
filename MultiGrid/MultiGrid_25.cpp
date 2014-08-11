#include "MultiGrid/MultiGrid.h"
void Smoother_4() {
exchsolutionData_4(0);
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[1]) {
/* Statements in this Scop: S101 */
for (int i0 = iterationOffsetBegin[1][1]; (i0<=(iterationOffsetEnd[1][1]+16)); i0 += 1) {
double* fieldData_RHS_4_p1 = (&fieldData_RHS[4][(i0*17)]);
double* fieldData_Solution_4_p1 = (&fieldData_Solution[4][(i0*19)]);
double* fieldData_LaplaceCoeff_4_p1 = (&fieldData_LaplaceCoeff[4][(i0*19)]);
int i1 = ((((-(((iterationOffsetBegin[1][0]+i0)+1)%2))+iterationOffsetBegin[1][0])+i0)+1);
for (; (i1<=((iterationOffsetEnd[1][0]+i0)+13)); i1 += 4) {
fieldData_Solution_4_p1[(i1+22)] = (fieldData_Solution_4_p1[(i1+22)]+((1.000000e+00/fieldData_LaplaceCoeff_4_p1[(i1+22)])*(fieldData_RHS_4_p1[i1]-(((((((((fieldData_LaplaceCoeff_4_p1[(i1+22)]*fieldData_Solution_4_p1[(i1+22)])+(fieldData_LaplaceCoeff_4_p1[(i1+402)]*fieldData_Solution_4_p1[(i1+23)]))+(fieldData_LaplaceCoeff_4_p1[(i1+782)]*fieldData_Solution_4_p1[(i1+21)]))+(fieldData_LaplaceCoeff_4_p1[(i1+1162)]*fieldData_Solution_4_p1[(i1+42)]))+(fieldData_LaplaceCoeff_4_p1[(i1+1542)]*fieldData_Solution_4_p1[(i1+2)]))+(fieldData_LaplaceCoeff_4_p1[(i1+1922)]*fieldData_Solution_4_p1[(i1+1)]))+(fieldData_LaplaceCoeff_4_p1[(i1+2302)]*fieldData_Solution_4_p1[(i1+41)]))+(fieldData_LaplaceCoeff_4_p1[(i1+2682)]*fieldData_Solution_4_p1[(i1+3)]))+(fieldData_LaplaceCoeff_4_p1[(i1+3062)]*fieldData_Solution_4_p1[(i1+43)])))));
fieldData_Solution_4_p1[(i1+24)] = (fieldData_Solution_4_p1[(i1+24)]+((1.000000e+00/fieldData_LaplaceCoeff_4_p1[(i1+24)])*(fieldData_RHS_4_p1[(i1+2)]-(((((((((fieldData_LaplaceCoeff_4_p1[(i1+24)]*fieldData_Solution_4_p1[(i1+24)])+(fieldData_LaplaceCoeff_4_p1[(i1+404)]*fieldData_Solution_4_p1[(i1+25)]))+(fieldData_LaplaceCoeff_4_p1[(i1+784)]*fieldData_Solution_4_p1[(i1+23)]))+(fieldData_LaplaceCoeff_4_p1[(i1+1164)]*fieldData_Solution_4_p1[(i1+44)]))+(fieldData_LaplaceCoeff_4_p1[(i1+1544)]*fieldData_Solution_4_p1[(i1+4)]))+(fieldData_LaplaceCoeff_4_p1[(i1+1924)]*fieldData_Solution_4_p1[(i1+3)]))+(fieldData_LaplaceCoeff_4_p1[(i1+2304)]*fieldData_Solution_4_p1[(i1+43)]))+(fieldData_LaplaceCoeff_4_p1[(i1+2684)]*fieldData_Solution_4_p1[(i1+5)]))+(fieldData_LaplaceCoeff_4_p1[(i1+3064)]*fieldData_Solution_4_p1[(i1+45)])))));
}
for (; (i1<=((iterationOffsetEnd[1][0]+i0)+16)); i1 += 2) {
fieldData_Solution_4_p1[(i1+22)] = (fieldData_Solution_4_p1[(i1+22)]+((1.000000e+00/fieldData_LaplaceCoeff_4_p1[(i1+22)])*(fieldData_RHS_4_p1[i1]-(((((((((fieldData_LaplaceCoeff_4_p1[(i1+22)]*fieldData_Solution_4_p1[(i1+22)])+(fieldData_LaplaceCoeff_4_p1[(i1+402)]*fieldData_Solution_4_p1[(i1+23)]))+(fieldData_LaplaceCoeff_4_p1[(i1+782)]*fieldData_Solution_4_p1[(i1+21)]))+(fieldData_LaplaceCoeff_4_p1[(i1+1162)]*fieldData_Solution_4_p1[(i1+42)]))+(fieldData_LaplaceCoeff_4_p1[(i1+1542)]*fieldData_Solution_4_p1[(i1+2)]))+(fieldData_LaplaceCoeff_4_p1[(i1+1922)]*fieldData_Solution_4_p1[(i1+1)]))+(fieldData_LaplaceCoeff_4_p1[(i1+2302)]*fieldData_Solution_4_p1[(i1+41)]))+(fieldData_LaplaceCoeff_4_p1[(i1+2682)]*fieldData_Solution_4_p1[(i1+3)]))+(fieldData_LaplaceCoeff_4_p1[(i1+3062)]*fieldData_Solution_4_p1[(i1+43)])))));
}
}
}
}
exchsolutionData_4(0);
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[1]) {
/* Statements in this Scop: S102 */
for (int i0 = iterationOffsetBegin[1][1]; (i0<=(iterationOffsetEnd[1][1]+16)); i0 += 1) {
double* fieldData_RHS_4_p1 = (&fieldData_RHS[4][(i0*17)]);
double* fieldData_Solution_4_p1 = (&fieldData_Solution[4][(i0*19)]);
double* fieldData_LaplaceCoeff_4_p1 = (&fieldData_LaplaceCoeff[4][(i0*19)]);
int i1 = ((((-((iterationOffsetBegin[1][0]+i0)%2))+iterationOffsetBegin[1][0])+i0)+1);
for (; (i1<=((iterationOffsetEnd[1][0]+i0)+13)); i1 += 4) {
fieldData_Solution_4_p1[(i1+22)] = (fieldData_Solution_4_p1[(i1+22)]+((1.000000e+00/fieldData_LaplaceCoeff_4_p1[(i1+22)])*(fieldData_RHS_4_p1[i1]-(((((((((fieldData_LaplaceCoeff_4_p1[(i1+22)]*fieldData_Solution_4_p1[(i1+22)])+(fieldData_LaplaceCoeff_4_p1[(i1+402)]*fieldData_Solution_4_p1[(i1+23)]))+(fieldData_LaplaceCoeff_4_p1[(i1+782)]*fieldData_Solution_4_p1[(i1+21)]))+(fieldData_LaplaceCoeff_4_p1[(i1+1162)]*fieldData_Solution_4_p1[(i1+42)]))+(fieldData_LaplaceCoeff_4_p1[(i1+1542)]*fieldData_Solution_4_p1[(i1+2)]))+(fieldData_LaplaceCoeff_4_p1[(i1+1922)]*fieldData_Solution_4_p1[(i1+1)]))+(fieldData_LaplaceCoeff_4_p1[(i1+2302)]*fieldData_Solution_4_p1[(i1+41)]))+(fieldData_LaplaceCoeff_4_p1[(i1+2682)]*fieldData_Solution_4_p1[(i1+3)]))+(fieldData_LaplaceCoeff_4_p1[(i1+3062)]*fieldData_Solution_4_p1[(i1+43)])))));
fieldData_Solution_4_p1[(i1+24)] = (fieldData_Solution_4_p1[(i1+24)]+((1.000000e+00/fieldData_LaplaceCoeff_4_p1[(i1+24)])*(fieldData_RHS_4_p1[(i1+2)]-(((((((((fieldData_LaplaceCoeff_4_p1[(i1+24)]*fieldData_Solution_4_p1[(i1+24)])+(fieldData_LaplaceCoeff_4_p1[(i1+404)]*fieldData_Solution_4_p1[(i1+25)]))+(fieldData_LaplaceCoeff_4_p1[(i1+784)]*fieldData_Solution_4_p1[(i1+23)]))+(fieldData_LaplaceCoeff_4_p1[(i1+1164)]*fieldData_Solution_4_p1[(i1+44)]))+(fieldData_LaplaceCoeff_4_p1[(i1+1544)]*fieldData_Solution_4_p1[(i1+4)]))+(fieldData_LaplaceCoeff_4_p1[(i1+1924)]*fieldData_Solution_4_p1[(i1+3)]))+(fieldData_LaplaceCoeff_4_p1[(i1+2304)]*fieldData_Solution_4_p1[(i1+43)]))+(fieldData_LaplaceCoeff_4_p1[(i1+2684)]*fieldData_Solution_4_p1[(i1+5)]))+(fieldData_LaplaceCoeff_4_p1[(i1+3064)]*fieldData_Solution_4_p1[(i1+45)])))));
}
for (; (i1<=((iterationOffsetEnd[1][0]+i0)+16)); i1 += 2) {
fieldData_Solution_4_p1[(i1+22)] = (fieldData_Solution_4_p1[(i1+22)]+((1.000000e+00/fieldData_LaplaceCoeff_4_p1[(i1+22)])*(fieldData_RHS_4_p1[i1]-(((((((((fieldData_LaplaceCoeff_4_p1[(i1+22)]*fieldData_Solution_4_p1[(i1+22)])+(fieldData_LaplaceCoeff_4_p1[(i1+402)]*fieldData_Solution_4_p1[(i1+23)]))+(fieldData_LaplaceCoeff_4_p1[(i1+782)]*fieldData_Solution_4_p1[(i1+21)]))+(fieldData_LaplaceCoeff_4_p1[(i1+1162)]*fieldData_Solution_4_p1[(i1+42)]))+(fieldData_LaplaceCoeff_4_p1[(i1+1542)]*fieldData_Solution_4_p1[(i1+2)]))+(fieldData_LaplaceCoeff_4_p1[(i1+1922)]*fieldData_Solution_4_p1[(i1+1)]))+(fieldData_LaplaceCoeff_4_p1[(i1+2302)]*fieldData_Solution_4_p1[(i1+41)]))+(fieldData_LaplaceCoeff_4_p1[(i1+2682)]*fieldData_Solution_4_p1[(i1+3)]))+(fieldData_LaplaceCoeff_4_p1[(i1+3062)]*fieldData_Solution_4_p1[(i1+43)])))));
}
}
}
}
}
