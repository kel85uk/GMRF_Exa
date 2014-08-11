#include "MultiGrid/MultiGrid.h"
void Smoother_GMRF_6() {
exchsolution_gmrfData_6(0);
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[0]) {
/* Statements in this Scop: S121 */
for (int i0 = iterationOffsetBegin[0][1]; (i0<=(iterationOffsetEnd[0][1]+64)); i0 += 1) {
double* fieldData_Solution_GMRF_6_p1 = (&fieldData_Solution_GMRF[6][(i0*67)]);
double* fieldData_RHS_GMRF_6_p1 = (&fieldData_RHS_GMRF[6][(i0*65)]);
double* fieldData_LaplaceCoeff_GMRF_6_p1 = (&fieldData_LaplaceCoeff_GMRF[6][(i0*67)]);
int i1 = ((((-(((iterationOffsetBegin[0][0]+i0)+1)%2))+iterationOffsetBegin[0][0])+i0)+1);
for (; (i1<=((iterationOffsetEnd[0][0]+i0)+61)); i1 += 4) {
fieldData_Solution_GMRF_6_p1[(i1+70)] = (fieldData_Solution_GMRF_6_p1[(i1+70)]+((1.000000e+00/fieldData_LaplaceCoeff_GMRF_6_p1[(i1+70)])*(fieldData_RHS_GMRF_6_p1[i1]-(((((((((fieldData_LaplaceCoeff_GMRF_6_p1[(i1+70)]*fieldData_Solution_GMRF_6_p1[(i1+70)])+(fieldData_LaplaceCoeff_GMRF_6_p1[(i1+4626)]*fieldData_Solution_GMRF_6_p1[(i1+71)]))+(fieldData_LaplaceCoeff_GMRF_6_p1[(i1+9182)]*fieldData_Solution_GMRF_6_p1[(i1+69)]))+(fieldData_LaplaceCoeff_GMRF_6_p1[(i1+13738)]*fieldData_Solution_GMRF_6_p1[(i1+138)]))+(fieldData_LaplaceCoeff_GMRF_6_p1[(i1+18294)]*fieldData_Solution_GMRF_6_p1[(i1+2)]))+(fieldData_LaplaceCoeff_GMRF_6_p1[(i1+22850)]*fieldData_Solution_GMRF_6_p1[(i1+1)]))+(fieldData_LaplaceCoeff_GMRF_6_p1[(i1+27406)]*fieldData_Solution_GMRF_6_p1[(i1+137)]))+(fieldData_LaplaceCoeff_GMRF_6_p1[(i1+31962)]*fieldData_Solution_GMRF_6_p1[(i1+3)]))+(fieldData_LaplaceCoeff_GMRF_6_p1[(i1+36518)]*fieldData_Solution_GMRF_6_p1[(i1+139)])))));
fieldData_Solution_GMRF_6_p1[(i1+72)] = (fieldData_Solution_GMRF_6_p1[(i1+72)]+((1.000000e+00/fieldData_LaplaceCoeff_GMRF_6_p1[(i1+72)])*(fieldData_RHS_GMRF_6_p1[(i1+2)]-(((((((((fieldData_LaplaceCoeff_GMRF_6_p1[(i1+72)]*fieldData_Solution_GMRF_6_p1[(i1+72)])+(fieldData_LaplaceCoeff_GMRF_6_p1[(i1+4628)]*fieldData_Solution_GMRF_6_p1[(i1+73)]))+(fieldData_LaplaceCoeff_GMRF_6_p1[(i1+9184)]*fieldData_Solution_GMRF_6_p1[(i1+71)]))+(fieldData_LaplaceCoeff_GMRF_6_p1[(i1+13740)]*fieldData_Solution_GMRF_6_p1[(i1+140)]))+(fieldData_LaplaceCoeff_GMRF_6_p1[(i1+18296)]*fieldData_Solution_GMRF_6_p1[(i1+4)]))+(fieldData_LaplaceCoeff_GMRF_6_p1[(i1+22852)]*fieldData_Solution_GMRF_6_p1[(i1+3)]))+(fieldData_LaplaceCoeff_GMRF_6_p1[(i1+27408)]*fieldData_Solution_GMRF_6_p1[(i1+139)]))+(fieldData_LaplaceCoeff_GMRF_6_p1[(i1+31964)]*fieldData_Solution_GMRF_6_p1[(i1+5)]))+(fieldData_LaplaceCoeff_GMRF_6_p1[(i1+36520)]*fieldData_Solution_GMRF_6_p1[(i1+141)])))));
}
for (; (i1<=((iterationOffsetEnd[0][0]+i0)+64)); i1 += 2) {
fieldData_Solution_GMRF_6_p1[(i1+70)] = (fieldData_Solution_GMRF_6_p1[(i1+70)]+((1.000000e+00/fieldData_LaplaceCoeff_GMRF_6_p1[(i1+70)])*(fieldData_RHS_GMRF_6_p1[i1]-(((((((((fieldData_LaplaceCoeff_GMRF_6_p1[(i1+70)]*fieldData_Solution_GMRF_6_p1[(i1+70)])+(fieldData_LaplaceCoeff_GMRF_6_p1[(i1+4626)]*fieldData_Solution_GMRF_6_p1[(i1+71)]))+(fieldData_LaplaceCoeff_GMRF_6_p1[(i1+9182)]*fieldData_Solution_GMRF_6_p1[(i1+69)]))+(fieldData_LaplaceCoeff_GMRF_6_p1[(i1+13738)]*fieldData_Solution_GMRF_6_p1[(i1+138)]))+(fieldData_LaplaceCoeff_GMRF_6_p1[(i1+18294)]*fieldData_Solution_GMRF_6_p1[(i1+2)]))+(fieldData_LaplaceCoeff_GMRF_6_p1[(i1+22850)]*fieldData_Solution_GMRF_6_p1[(i1+1)]))+(fieldData_LaplaceCoeff_GMRF_6_p1[(i1+27406)]*fieldData_Solution_GMRF_6_p1[(i1+137)]))+(fieldData_LaplaceCoeff_GMRF_6_p1[(i1+31962)]*fieldData_Solution_GMRF_6_p1[(i1+3)]))+(fieldData_LaplaceCoeff_GMRF_6_p1[(i1+36518)]*fieldData_Solution_GMRF_6_p1[(i1+139)])))));
}
}
}
}
exchsolution_gmrfData_6(0);
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[0]) {
/* Statements in this Scop: S122 */
for (int i0 = iterationOffsetBegin[0][1]; (i0<=(iterationOffsetEnd[0][1]+64)); i0 += 1) {
double* fieldData_Solution_GMRF_6_p1 = (&fieldData_Solution_GMRF[6][(i0*67)]);
double* fieldData_RHS_GMRF_6_p1 = (&fieldData_RHS_GMRF[6][(i0*65)]);
double* fieldData_LaplaceCoeff_GMRF_6_p1 = (&fieldData_LaplaceCoeff_GMRF[6][(i0*67)]);
int i1 = ((((-((iterationOffsetBegin[0][0]+i0)%2))+iterationOffsetBegin[0][0])+i0)+1);
for (; (i1<=((iterationOffsetEnd[0][0]+i0)+61)); i1 += 4) {
fieldData_Solution_GMRF_6_p1[(i1+70)] = (fieldData_Solution_GMRF_6_p1[(i1+70)]+((1.000000e+00/fieldData_LaplaceCoeff_GMRF_6_p1[(i1+70)])*(fieldData_RHS_GMRF_6_p1[i1]-(((((((((fieldData_LaplaceCoeff_GMRF_6_p1[(i1+70)]*fieldData_Solution_GMRF_6_p1[(i1+70)])+(fieldData_LaplaceCoeff_GMRF_6_p1[(i1+4626)]*fieldData_Solution_GMRF_6_p1[(i1+71)]))+(fieldData_LaplaceCoeff_GMRF_6_p1[(i1+9182)]*fieldData_Solution_GMRF_6_p1[(i1+69)]))+(fieldData_LaplaceCoeff_GMRF_6_p1[(i1+13738)]*fieldData_Solution_GMRF_6_p1[(i1+138)]))+(fieldData_LaplaceCoeff_GMRF_6_p1[(i1+18294)]*fieldData_Solution_GMRF_6_p1[(i1+2)]))+(fieldData_LaplaceCoeff_GMRF_6_p1[(i1+22850)]*fieldData_Solution_GMRF_6_p1[(i1+1)]))+(fieldData_LaplaceCoeff_GMRF_6_p1[(i1+27406)]*fieldData_Solution_GMRF_6_p1[(i1+137)]))+(fieldData_LaplaceCoeff_GMRF_6_p1[(i1+31962)]*fieldData_Solution_GMRF_6_p1[(i1+3)]))+(fieldData_LaplaceCoeff_GMRF_6_p1[(i1+36518)]*fieldData_Solution_GMRF_6_p1[(i1+139)])))));
fieldData_Solution_GMRF_6_p1[(i1+72)] = (fieldData_Solution_GMRF_6_p1[(i1+72)]+((1.000000e+00/fieldData_LaplaceCoeff_GMRF_6_p1[(i1+72)])*(fieldData_RHS_GMRF_6_p1[(i1+2)]-(((((((((fieldData_LaplaceCoeff_GMRF_6_p1[(i1+72)]*fieldData_Solution_GMRF_6_p1[(i1+72)])+(fieldData_LaplaceCoeff_GMRF_6_p1[(i1+4628)]*fieldData_Solution_GMRF_6_p1[(i1+73)]))+(fieldData_LaplaceCoeff_GMRF_6_p1[(i1+9184)]*fieldData_Solution_GMRF_6_p1[(i1+71)]))+(fieldData_LaplaceCoeff_GMRF_6_p1[(i1+13740)]*fieldData_Solution_GMRF_6_p1[(i1+140)]))+(fieldData_LaplaceCoeff_GMRF_6_p1[(i1+18296)]*fieldData_Solution_GMRF_6_p1[(i1+4)]))+(fieldData_LaplaceCoeff_GMRF_6_p1[(i1+22852)]*fieldData_Solution_GMRF_6_p1[(i1+3)]))+(fieldData_LaplaceCoeff_GMRF_6_p1[(i1+27408)]*fieldData_Solution_GMRF_6_p1[(i1+139)]))+(fieldData_LaplaceCoeff_GMRF_6_p1[(i1+31964)]*fieldData_Solution_GMRF_6_p1[(i1+5)]))+(fieldData_LaplaceCoeff_GMRF_6_p1[(i1+36520)]*fieldData_Solution_GMRF_6_p1[(i1+141)])))));
}
for (; (i1<=((iterationOffsetEnd[0][0]+i0)+64)); i1 += 2) {
fieldData_Solution_GMRF_6_p1[(i1+70)] = (fieldData_Solution_GMRF_6_p1[(i1+70)]+((1.000000e+00/fieldData_LaplaceCoeff_GMRF_6_p1[(i1+70)])*(fieldData_RHS_GMRF_6_p1[i1]-(((((((((fieldData_LaplaceCoeff_GMRF_6_p1[(i1+70)]*fieldData_Solution_GMRF_6_p1[(i1+70)])+(fieldData_LaplaceCoeff_GMRF_6_p1[(i1+4626)]*fieldData_Solution_GMRF_6_p1[(i1+71)]))+(fieldData_LaplaceCoeff_GMRF_6_p1[(i1+9182)]*fieldData_Solution_GMRF_6_p1[(i1+69)]))+(fieldData_LaplaceCoeff_GMRF_6_p1[(i1+13738)]*fieldData_Solution_GMRF_6_p1[(i1+138)]))+(fieldData_LaplaceCoeff_GMRF_6_p1[(i1+18294)]*fieldData_Solution_GMRF_6_p1[(i1+2)]))+(fieldData_LaplaceCoeff_GMRF_6_p1[(i1+22850)]*fieldData_Solution_GMRF_6_p1[(i1+1)]))+(fieldData_LaplaceCoeff_GMRF_6_p1[(i1+27406)]*fieldData_Solution_GMRF_6_p1[(i1+137)]))+(fieldData_LaplaceCoeff_GMRF_6_p1[(i1+31962)]*fieldData_Solution_GMRF_6_p1[(i1+3)]))+(fieldData_LaplaceCoeff_GMRF_6_p1[(i1+36518)]*fieldData_Solution_GMRF_6_p1[(i1+139)])))));
}
}
}
}
}
