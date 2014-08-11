#include "MultiGrid/MultiGrid.h"
void Smoother_3() {
exchsolutionData_3(0);
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[1]) {
/* Statements in this Scop: S99 */
for (int i0 = iterationOffsetBegin[1][1]; (i0<=(iterationOffsetEnd[1][1]+8)); i0 += 1) {
double* fieldData_Solution_3_p1 = (&fieldData_Solution[3][(i0*11)]);
double* fieldData_LaplaceCoeff_3_p1 = (&fieldData_LaplaceCoeff[3][(i0*11)]);
double* fieldData_RHS_3_p1 = (&fieldData_RHS[3][(i0*9)]);
int i1 = ((((-(((iterationOffsetBegin[1][0]+i0)+1)%2))+iterationOffsetBegin[1][0])+i0)+1);
for (; (i1<=((iterationOffsetEnd[1][0]+i0)+5)); i1 += 4) {
fieldData_Solution_3_p1[(i1+14)] = (fieldData_Solution_3_p1[(i1+14)]+((1.000000e+00/fieldData_LaplaceCoeff_3_p1[(i1+14)])*(fieldData_RHS_3_p1[i1]-(((((((((fieldData_LaplaceCoeff_3_p1[(i1+14)]*fieldData_Solution_3_p1[(i1+14)])+(fieldData_LaplaceCoeff_3_p1[(i1+146)]*fieldData_Solution_3_p1[(i1+15)]))+(fieldData_LaplaceCoeff_3_p1[(i1+278)]*fieldData_Solution_3_p1[(i1+13)]))+(fieldData_LaplaceCoeff_3_p1[(i1+410)]*fieldData_Solution_3_p1[(i1+26)]))+(fieldData_LaplaceCoeff_3_p1[(i1+542)]*fieldData_Solution_3_p1[(i1+2)]))+(fieldData_LaplaceCoeff_3_p1[(i1+674)]*fieldData_Solution_3_p1[(i1+1)]))+(fieldData_LaplaceCoeff_3_p1[(i1+806)]*fieldData_Solution_3_p1[(i1+25)]))+(fieldData_LaplaceCoeff_3_p1[(i1+938)]*fieldData_Solution_3_p1[(i1+3)]))+(fieldData_LaplaceCoeff_3_p1[(i1+1070)]*fieldData_Solution_3_p1[(i1+27)])))));
fieldData_Solution_3_p1[(i1+16)] = (fieldData_Solution_3_p1[(i1+16)]+((1.000000e+00/fieldData_LaplaceCoeff_3_p1[(i1+16)])*(fieldData_RHS_3_p1[(i1+2)]-(((((((((fieldData_LaplaceCoeff_3_p1[(i1+16)]*fieldData_Solution_3_p1[(i1+16)])+(fieldData_LaplaceCoeff_3_p1[(i1+148)]*fieldData_Solution_3_p1[(i1+17)]))+(fieldData_LaplaceCoeff_3_p1[(i1+280)]*fieldData_Solution_3_p1[(i1+15)]))+(fieldData_LaplaceCoeff_3_p1[(i1+412)]*fieldData_Solution_3_p1[(i1+28)]))+(fieldData_LaplaceCoeff_3_p1[(i1+544)]*fieldData_Solution_3_p1[(i1+4)]))+(fieldData_LaplaceCoeff_3_p1[(i1+676)]*fieldData_Solution_3_p1[(i1+3)]))+(fieldData_LaplaceCoeff_3_p1[(i1+808)]*fieldData_Solution_3_p1[(i1+27)]))+(fieldData_LaplaceCoeff_3_p1[(i1+940)]*fieldData_Solution_3_p1[(i1+5)]))+(fieldData_LaplaceCoeff_3_p1[(i1+1072)]*fieldData_Solution_3_p1[(i1+29)])))));
}
for (; (i1<=((iterationOffsetEnd[1][0]+i0)+8)); i1 += 2) {
fieldData_Solution_3_p1[(i1+14)] = (fieldData_Solution_3_p1[(i1+14)]+((1.000000e+00/fieldData_LaplaceCoeff_3_p1[(i1+14)])*(fieldData_RHS_3_p1[i1]-(((((((((fieldData_LaplaceCoeff_3_p1[(i1+14)]*fieldData_Solution_3_p1[(i1+14)])+(fieldData_LaplaceCoeff_3_p1[(i1+146)]*fieldData_Solution_3_p1[(i1+15)]))+(fieldData_LaplaceCoeff_3_p1[(i1+278)]*fieldData_Solution_3_p1[(i1+13)]))+(fieldData_LaplaceCoeff_3_p1[(i1+410)]*fieldData_Solution_3_p1[(i1+26)]))+(fieldData_LaplaceCoeff_3_p1[(i1+542)]*fieldData_Solution_3_p1[(i1+2)]))+(fieldData_LaplaceCoeff_3_p1[(i1+674)]*fieldData_Solution_3_p1[(i1+1)]))+(fieldData_LaplaceCoeff_3_p1[(i1+806)]*fieldData_Solution_3_p1[(i1+25)]))+(fieldData_LaplaceCoeff_3_p1[(i1+938)]*fieldData_Solution_3_p1[(i1+3)]))+(fieldData_LaplaceCoeff_3_p1[(i1+1070)]*fieldData_Solution_3_p1[(i1+27)])))));
}
}
}
}
exchsolutionData_3(0);
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[1]) {
/* Statements in this Scop: S100 */
for (int i0 = iterationOffsetBegin[1][1]; (i0<=(iterationOffsetEnd[1][1]+8)); i0 += 1) {
double* fieldData_Solution_3_p1 = (&fieldData_Solution[3][(i0*11)]);
double* fieldData_LaplaceCoeff_3_p1 = (&fieldData_LaplaceCoeff[3][(i0*11)]);
double* fieldData_RHS_3_p1 = (&fieldData_RHS[3][(i0*9)]);
int i1 = ((((-((iterationOffsetBegin[1][0]+i0)%2))+iterationOffsetBegin[1][0])+i0)+1);
for (; (i1<=((iterationOffsetEnd[1][0]+i0)+5)); i1 += 4) {
fieldData_Solution_3_p1[(i1+14)] = (fieldData_Solution_3_p1[(i1+14)]+((1.000000e+00/fieldData_LaplaceCoeff_3_p1[(i1+14)])*(fieldData_RHS_3_p1[i1]-(((((((((fieldData_LaplaceCoeff_3_p1[(i1+14)]*fieldData_Solution_3_p1[(i1+14)])+(fieldData_LaplaceCoeff_3_p1[(i1+146)]*fieldData_Solution_3_p1[(i1+15)]))+(fieldData_LaplaceCoeff_3_p1[(i1+278)]*fieldData_Solution_3_p1[(i1+13)]))+(fieldData_LaplaceCoeff_3_p1[(i1+410)]*fieldData_Solution_3_p1[(i1+26)]))+(fieldData_LaplaceCoeff_3_p1[(i1+542)]*fieldData_Solution_3_p1[(i1+2)]))+(fieldData_LaplaceCoeff_3_p1[(i1+674)]*fieldData_Solution_3_p1[(i1+1)]))+(fieldData_LaplaceCoeff_3_p1[(i1+806)]*fieldData_Solution_3_p1[(i1+25)]))+(fieldData_LaplaceCoeff_3_p1[(i1+938)]*fieldData_Solution_3_p1[(i1+3)]))+(fieldData_LaplaceCoeff_3_p1[(i1+1070)]*fieldData_Solution_3_p1[(i1+27)])))));
fieldData_Solution_3_p1[(i1+16)] = (fieldData_Solution_3_p1[(i1+16)]+((1.000000e+00/fieldData_LaplaceCoeff_3_p1[(i1+16)])*(fieldData_RHS_3_p1[(i1+2)]-(((((((((fieldData_LaplaceCoeff_3_p1[(i1+16)]*fieldData_Solution_3_p1[(i1+16)])+(fieldData_LaplaceCoeff_3_p1[(i1+148)]*fieldData_Solution_3_p1[(i1+17)]))+(fieldData_LaplaceCoeff_3_p1[(i1+280)]*fieldData_Solution_3_p1[(i1+15)]))+(fieldData_LaplaceCoeff_3_p1[(i1+412)]*fieldData_Solution_3_p1[(i1+28)]))+(fieldData_LaplaceCoeff_3_p1[(i1+544)]*fieldData_Solution_3_p1[(i1+4)]))+(fieldData_LaplaceCoeff_3_p1[(i1+676)]*fieldData_Solution_3_p1[(i1+3)]))+(fieldData_LaplaceCoeff_3_p1[(i1+808)]*fieldData_Solution_3_p1[(i1+27)]))+(fieldData_LaplaceCoeff_3_p1[(i1+940)]*fieldData_Solution_3_p1[(i1+5)]))+(fieldData_LaplaceCoeff_3_p1[(i1+1072)]*fieldData_Solution_3_p1[(i1+29)])))));
}
for (; (i1<=((iterationOffsetEnd[1][0]+i0)+8)); i1 += 2) {
fieldData_Solution_3_p1[(i1+14)] = (fieldData_Solution_3_p1[(i1+14)]+((1.000000e+00/fieldData_LaplaceCoeff_3_p1[(i1+14)])*(fieldData_RHS_3_p1[i1]-(((((((((fieldData_LaplaceCoeff_3_p1[(i1+14)]*fieldData_Solution_3_p1[(i1+14)])+(fieldData_LaplaceCoeff_3_p1[(i1+146)]*fieldData_Solution_3_p1[(i1+15)]))+(fieldData_LaplaceCoeff_3_p1[(i1+278)]*fieldData_Solution_3_p1[(i1+13)]))+(fieldData_LaplaceCoeff_3_p1[(i1+410)]*fieldData_Solution_3_p1[(i1+26)]))+(fieldData_LaplaceCoeff_3_p1[(i1+542)]*fieldData_Solution_3_p1[(i1+2)]))+(fieldData_LaplaceCoeff_3_p1[(i1+674)]*fieldData_Solution_3_p1[(i1+1)]))+(fieldData_LaplaceCoeff_3_p1[(i1+806)]*fieldData_Solution_3_p1[(i1+25)]))+(fieldData_LaplaceCoeff_3_p1[(i1+938)]*fieldData_Solution_3_p1[(i1+3)]))+(fieldData_LaplaceCoeff_3_p1[(i1+1070)]*fieldData_Solution_3_p1[(i1+27)])))));
}
}
}
}
}
