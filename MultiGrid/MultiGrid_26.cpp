#include "MultiGrid/MultiGrid.h"
void Smoother_5() {
exchsolutionData_5(0);
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[1]) {
/* Statements in this Scop: S103 */
for (int i0 = iterationOffsetBegin[1][1]; (i0<=(iterationOffsetEnd[1][1]+32)); i0 += 1) {
double* fieldData_Solution_5_p1 = (&fieldData_Solution[5][(i0*35)]);
double* fieldData_LaplaceCoeff_5_p1 = (&fieldData_LaplaceCoeff[5][(i0*35)]);
double* fieldData_RHS_5_p1 = (&fieldData_RHS[5][(i0*33)]);
int i1 = ((((-(((iterationOffsetBegin[1][0]+i0)+1)%2))+iterationOffsetBegin[1][0])+i0)+1);
for (; (i1<=((iterationOffsetEnd[1][0]+i0)+29)); i1 += 4) {
fieldData_Solution_5_p1[(i1+38)] = (fieldData_Solution_5_p1[(i1+38)]+((1.000000e+00/fieldData_LaplaceCoeff_5_p1[(i1+38)])*(fieldData_RHS_5_p1[i1]-(((((((((fieldData_LaplaceCoeff_5_p1[(i1+38)]*fieldData_Solution_5_p1[(i1+38)])+(fieldData_LaplaceCoeff_5_p1[(i1+1298)]*fieldData_Solution_5_p1[(i1+39)]))+(fieldData_LaplaceCoeff_5_p1[(i1+2558)]*fieldData_Solution_5_p1[(i1+37)]))+(fieldData_LaplaceCoeff_5_p1[(i1+3818)]*fieldData_Solution_5_p1[(i1+74)]))+(fieldData_LaplaceCoeff_5_p1[(i1+5078)]*fieldData_Solution_5_p1[(i1+2)]))+(fieldData_LaplaceCoeff_5_p1[(i1+6338)]*fieldData_Solution_5_p1[(i1+1)]))+(fieldData_LaplaceCoeff_5_p1[(i1+7598)]*fieldData_Solution_5_p1[(i1+73)]))+(fieldData_LaplaceCoeff_5_p1[(i1+8858)]*fieldData_Solution_5_p1[(i1+3)]))+(fieldData_LaplaceCoeff_5_p1[(i1+10118)]*fieldData_Solution_5_p1[(i1+75)])))));
fieldData_Solution_5_p1[(i1+40)] = (fieldData_Solution_5_p1[(i1+40)]+((1.000000e+00/fieldData_LaplaceCoeff_5_p1[(i1+40)])*(fieldData_RHS_5_p1[(i1+2)]-(((((((((fieldData_LaplaceCoeff_5_p1[(i1+40)]*fieldData_Solution_5_p1[(i1+40)])+(fieldData_LaplaceCoeff_5_p1[(i1+1300)]*fieldData_Solution_5_p1[(i1+41)]))+(fieldData_LaplaceCoeff_5_p1[(i1+2560)]*fieldData_Solution_5_p1[(i1+39)]))+(fieldData_LaplaceCoeff_5_p1[(i1+3820)]*fieldData_Solution_5_p1[(i1+76)]))+(fieldData_LaplaceCoeff_5_p1[(i1+5080)]*fieldData_Solution_5_p1[(i1+4)]))+(fieldData_LaplaceCoeff_5_p1[(i1+6340)]*fieldData_Solution_5_p1[(i1+3)]))+(fieldData_LaplaceCoeff_5_p1[(i1+7600)]*fieldData_Solution_5_p1[(i1+75)]))+(fieldData_LaplaceCoeff_5_p1[(i1+8860)]*fieldData_Solution_5_p1[(i1+5)]))+(fieldData_LaplaceCoeff_5_p1[(i1+10120)]*fieldData_Solution_5_p1[(i1+77)])))));
}
for (; (i1<=((iterationOffsetEnd[1][0]+i0)+32)); i1 += 2) {
fieldData_Solution_5_p1[(i1+38)] = (fieldData_Solution_5_p1[(i1+38)]+((1.000000e+00/fieldData_LaplaceCoeff_5_p1[(i1+38)])*(fieldData_RHS_5_p1[i1]-(((((((((fieldData_LaplaceCoeff_5_p1[(i1+38)]*fieldData_Solution_5_p1[(i1+38)])+(fieldData_LaplaceCoeff_5_p1[(i1+1298)]*fieldData_Solution_5_p1[(i1+39)]))+(fieldData_LaplaceCoeff_5_p1[(i1+2558)]*fieldData_Solution_5_p1[(i1+37)]))+(fieldData_LaplaceCoeff_5_p1[(i1+3818)]*fieldData_Solution_5_p1[(i1+74)]))+(fieldData_LaplaceCoeff_5_p1[(i1+5078)]*fieldData_Solution_5_p1[(i1+2)]))+(fieldData_LaplaceCoeff_5_p1[(i1+6338)]*fieldData_Solution_5_p1[(i1+1)]))+(fieldData_LaplaceCoeff_5_p1[(i1+7598)]*fieldData_Solution_5_p1[(i1+73)]))+(fieldData_LaplaceCoeff_5_p1[(i1+8858)]*fieldData_Solution_5_p1[(i1+3)]))+(fieldData_LaplaceCoeff_5_p1[(i1+10118)]*fieldData_Solution_5_p1[(i1+75)])))));
}
}
}
}
exchsolutionData_5(0);
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[1]) {
/* Statements in this Scop: S104 */
for (int i0 = iterationOffsetBegin[1][1]; (i0<=(iterationOffsetEnd[1][1]+32)); i0 += 1) {
double* fieldData_Solution_5_p1 = (&fieldData_Solution[5][(i0*35)]);
double* fieldData_LaplaceCoeff_5_p1 = (&fieldData_LaplaceCoeff[5][(i0*35)]);
double* fieldData_RHS_5_p1 = (&fieldData_RHS[5][(i0*33)]);
int i1 = ((((-((iterationOffsetBegin[1][0]+i0)%2))+iterationOffsetBegin[1][0])+i0)+1);
for (; (i1<=((iterationOffsetEnd[1][0]+i0)+29)); i1 += 4) {
fieldData_Solution_5_p1[(i1+38)] = (fieldData_Solution_5_p1[(i1+38)]+((1.000000e+00/fieldData_LaplaceCoeff_5_p1[(i1+38)])*(fieldData_RHS_5_p1[i1]-(((((((((fieldData_LaplaceCoeff_5_p1[(i1+38)]*fieldData_Solution_5_p1[(i1+38)])+(fieldData_LaplaceCoeff_5_p1[(i1+1298)]*fieldData_Solution_5_p1[(i1+39)]))+(fieldData_LaplaceCoeff_5_p1[(i1+2558)]*fieldData_Solution_5_p1[(i1+37)]))+(fieldData_LaplaceCoeff_5_p1[(i1+3818)]*fieldData_Solution_5_p1[(i1+74)]))+(fieldData_LaplaceCoeff_5_p1[(i1+5078)]*fieldData_Solution_5_p1[(i1+2)]))+(fieldData_LaplaceCoeff_5_p1[(i1+6338)]*fieldData_Solution_5_p1[(i1+1)]))+(fieldData_LaplaceCoeff_5_p1[(i1+7598)]*fieldData_Solution_5_p1[(i1+73)]))+(fieldData_LaplaceCoeff_5_p1[(i1+8858)]*fieldData_Solution_5_p1[(i1+3)]))+(fieldData_LaplaceCoeff_5_p1[(i1+10118)]*fieldData_Solution_5_p1[(i1+75)])))));
fieldData_Solution_5_p1[(i1+40)] = (fieldData_Solution_5_p1[(i1+40)]+((1.000000e+00/fieldData_LaplaceCoeff_5_p1[(i1+40)])*(fieldData_RHS_5_p1[(i1+2)]-(((((((((fieldData_LaplaceCoeff_5_p1[(i1+40)]*fieldData_Solution_5_p1[(i1+40)])+(fieldData_LaplaceCoeff_5_p1[(i1+1300)]*fieldData_Solution_5_p1[(i1+41)]))+(fieldData_LaplaceCoeff_5_p1[(i1+2560)]*fieldData_Solution_5_p1[(i1+39)]))+(fieldData_LaplaceCoeff_5_p1[(i1+3820)]*fieldData_Solution_5_p1[(i1+76)]))+(fieldData_LaplaceCoeff_5_p1[(i1+5080)]*fieldData_Solution_5_p1[(i1+4)]))+(fieldData_LaplaceCoeff_5_p1[(i1+6340)]*fieldData_Solution_5_p1[(i1+3)]))+(fieldData_LaplaceCoeff_5_p1[(i1+7600)]*fieldData_Solution_5_p1[(i1+75)]))+(fieldData_LaplaceCoeff_5_p1[(i1+8860)]*fieldData_Solution_5_p1[(i1+5)]))+(fieldData_LaplaceCoeff_5_p1[(i1+10120)]*fieldData_Solution_5_p1[(i1+77)])))));
}
for (; (i1<=((iterationOffsetEnd[1][0]+i0)+32)); i1 += 2) {
fieldData_Solution_5_p1[(i1+38)] = (fieldData_Solution_5_p1[(i1+38)]+((1.000000e+00/fieldData_LaplaceCoeff_5_p1[(i1+38)])*(fieldData_RHS_5_p1[i1]-(((((((((fieldData_LaplaceCoeff_5_p1[(i1+38)]*fieldData_Solution_5_p1[(i1+38)])+(fieldData_LaplaceCoeff_5_p1[(i1+1298)]*fieldData_Solution_5_p1[(i1+39)]))+(fieldData_LaplaceCoeff_5_p1[(i1+2558)]*fieldData_Solution_5_p1[(i1+37)]))+(fieldData_LaplaceCoeff_5_p1[(i1+3818)]*fieldData_Solution_5_p1[(i1+74)]))+(fieldData_LaplaceCoeff_5_p1[(i1+5078)]*fieldData_Solution_5_p1[(i1+2)]))+(fieldData_LaplaceCoeff_5_p1[(i1+6338)]*fieldData_Solution_5_p1[(i1+1)]))+(fieldData_LaplaceCoeff_5_p1[(i1+7598)]*fieldData_Solution_5_p1[(i1+73)]))+(fieldData_LaplaceCoeff_5_p1[(i1+8858)]*fieldData_Solution_5_p1[(i1+3)]))+(fieldData_LaplaceCoeff_5_p1[(i1+10118)]*fieldData_Solution_5_p1[(i1+75)])))));
}
}
}
}
}
