#include "MultiGrid/MultiGrid.h"
void Smoother_GMRF_2() {
exchsolution_gmrfData_2(0);
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[0]) {
/* Statements in this Scop: S113 */
for (int i0 = iterationOffsetBegin[0][1]; (i0<=(iterationOffsetEnd[0][1]+4)); i0 += 1) {
double* fieldData_LaplaceCoeff_GMRF_2_p1 = (&fieldData_LaplaceCoeff_GMRF[2][(i0*7)]);
double* fieldData_Solution_GMRF_2_p1 = (&fieldData_Solution_GMRF[2][(i0*7)]);
double* fieldData_RHS_GMRF_2_p1 = (&fieldData_RHS_GMRF[2][(i0*5)]);
int i1 = ((((-(((iterationOffsetBegin[0][0]+i0)+1)%2))+iterationOffsetBegin[0][0])+i0)+1);
for (; (i1<=((iterationOffsetEnd[0][0]+i0)+1)); i1 += 4) {
fieldData_Solution_GMRF_2_p1[(i1+10)] = (fieldData_Solution_GMRF_2_p1[(i1+10)]+((1.000000e+00/fieldData_LaplaceCoeff_GMRF_2_p1[(i1+10)])*(fieldData_RHS_GMRF_2_p1[i1]-(((((((((fieldData_LaplaceCoeff_GMRF_2_p1[(i1+10)]*fieldData_Solution_GMRF_2_p1[(i1+10)])+(fieldData_LaplaceCoeff_GMRF_2_p1[(i1+66)]*fieldData_Solution_GMRF_2_p1[(i1+11)]))+(fieldData_LaplaceCoeff_GMRF_2_p1[(i1+122)]*fieldData_Solution_GMRF_2_p1[(i1+9)]))+(fieldData_LaplaceCoeff_GMRF_2_p1[(i1+178)]*fieldData_Solution_GMRF_2_p1[(i1+18)]))+(fieldData_LaplaceCoeff_GMRF_2_p1[(i1+234)]*fieldData_Solution_GMRF_2_p1[(i1+2)]))+(fieldData_LaplaceCoeff_GMRF_2_p1[(i1+290)]*fieldData_Solution_GMRF_2_p1[(i1+1)]))+(fieldData_LaplaceCoeff_GMRF_2_p1[(i1+346)]*fieldData_Solution_GMRF_2_p1[(i1+17)]))+(fieldData_LaplaceCoeff_GMRF_2_p1[(i1+402)]*fieldData_Solution_GMRF_2_p1[(i1+3)]))+(fieldData_LaplaceCoeff_GMRF_2_p1[(i1+458)]*fieldData_Solution_GMRF_2_p1[(i1+19)])))));
fieldData_Solution_GMRF_2_p1[(i1+12)] = (fieldData_Solution_GMRF_2_p1[(i1+12)]+((1.000000e+00/fieldData_LaplaceCoeff_GMRF_2_p1[(i1+12)])*(fieldData_RHS_GMRF_2_p1[(i1+2)]-(((((((((fieldData_LaplaceCoeff_GMRF_2_p1[(i1+12)]*fieldData_Solution_GMRF_2_p1[(i1+12)])+(fieldData_LaplaceCoeff_GMRF_2_p1[(i1+68)]*fieldData_Solution_GMRF_2_p1[(i1+13)]))+(fieldData_LaplaceCoeff_GMRF_2_p1[(i1+124)]*fieldData_Solution_GMRF_2_p1[(i1+11)]))+(fieldData_LaplaceCoeff_GMRF_2_p1[(i1+180)]*fieldData_Solution_GMRF_2_p1[(i1+20)]))+(fieldData_LaplaceCoeff_GMRF_2_p1[(i1+236)]*fieldData_Solution_GMRF_2_p1[(i1+4)]))+(fieldData_LaplaceCoeff_GMRF_2_p1[(i1+292)]*fieldData_Solution_GMRF_2_p1[(i1+3)]))+(fieldData_LaplaceCoeff_GMRF_2_p1[(i1+348)]*fieldData_Solution_GMRF_2_p1[(i1+19)]))+(fieldData_LaplaceCoeff_GMRF_2_p1[(i1+404)]*fieldData_Solution_GMRF_2_p1[(i1+5)]))+(fieldData_LaplaceCoeff_GMRF_2_p1[(i1+460)]*fieldData_Solution_GMRF_2_p1[(i1+21)])))));
}
for (; (i1<=((iterationOffsetEnd[0][0]+i0)+4)); i1 += 2) {
fieldData_Solution_GMRF_2_p1[(i1+10)] = (fieldData_Solution_GMRF_2_p1[(i1+10)]+((1.000000e+00/fieldData_LaplaceCoeff_GMRF_2_p1[(i1+10)])*(fieldData_RHS_GMRF_2_p1[i1]-(((((((((fieldData_LaplaceCoeff_GMRF_2_p1[(i1+10)]*fieldData_Solution_GMRF_2_p1[(i1+10)])+(fieldData_LaplaceCoeff_GMRF_2_p1[(i1+66)]*fieldData_Solution_GMRF_2_p1[(i1+11)]))+(fieldData_LaplaceCoeff_GMRF_2_p1[(i1+122)]*fieldData_Solution_GMRF_2_p1[(i1+9)]))+(fieldData_LaplaceCoeff_GMRF_2_p1[(i1+178)]*fieldData_Solution_GMRF_2_p1[(i1+18)]))+(fieldData_LaplaceCoeff_GMRF_2_p1[(i1+234)]*fieldData_Solution_GMRF_2_p1[(i1+2)]))+(fieldData_LaplaceCoeff_GMRF_2_p1[(i1+290)]*fieldData_Solution_GMRF_2_p1[(i1+1)]))+(fieldData_LaplaceCoeff_GMRF_2_p1[(i1+346)]*fieldData_Solution_GMRF_2_p1[(i1+17)]))+(fieldData_LaplaceCoeff_GMRF_2_p1[(i1+402)]*fieldData_Solution_GMRF_2_p1[(i1+3)]))+(fieldData_LaplaceCoeff_GMRF_2_p1[(i1+458)]*fieldData_Solution_GMRF_2_p1[(i1+19)])))));
}
}
}
}
exchsolution_gmrfData_2(0);
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[0]) {
/* Statements in this Scop: S114 */
for (int i0 = iterationOffsetBegin[0][1]; (i0<=(iterationOffsetEnd[0][1]+4)); i0 += 1) {
double* fieldData_LaplaceCoeff_GMRF_2_p1 = (&fieldData_LaplaceCoeff_GMRF[2][(i0*7)]);
double* fieldData_Solution_GMRF_2_p1 = (&fieldData_Solution_GMRF[2][(i0*7)]);
double* fieldData_RHS_GMRF_2_p1 = (&fieldData_RHS_GMRF[2][(i0*5)]);
int i1 = ((((-((iterationOffsetBegin[0][0]+i0)%2))+iterationOffsetBegin[0][0])+i0)+1);
for (; (i1<=((iterationOffsetEnd[0][0]+i0)+1)); i1 += 4) {
fieldData_Solution_GMRF_2_p1[(i1+10)] = (fieldData_Solution_GMRF_2_p1[(i1+10)]+((1.000000e+00/fieldData_LaplaceCoeff_GMRF_2_p1[(i1+10)])*(fieldData_RHS_GMRF_2_p1[i1]-(((((((((fieldData_LaplaceCoeff_GMRF_2_p1[(i1+10)]*fieldData_Solution_GMRF_2_p1[(i1+10)])+(fieldData_LaplaceCoeff_GMRF_2_p1[(i1+66)]*fieldData_Solution_GMRF_2_p1[(i1+11)]))+(fieldData_LaplaceCoeff_GMRF_2_p1[(i1+122)]*fieldData_Solution_GMRF_2_p1[(i1+9)]))+(fieldData_LaplaceCoeff_GMRF_2_p1[(i1+178)]*fieldData_Solution_GMRF_2_p1[(i1+18)]))+(fieldData_LaplaceCoeff_GMRF_2_p1[(i1+234)]*fieldData_Solution_GMRF_2_p1[(i1+2)]))+(fieldData_LaplaceCoeff_GMRF_2_p1[(i1+290)]*fieldData_Solution_GMRF_2_p1[(i1+1)]))+(fieldData_LaplaceCoeff_GMRF_2_p1[(i1+346)]*fieldData_Solution_GMRF_2_p1[(i1+17)]))+(fieldData_LaplaceCoeff_GMRF_2_p1[(i1+402)]*fieldData_Solution_GMRF_2_p1[(i1+3)]))+(fieldData_LaplaceCoeff_GMRF_2_p1[(i1+458)]*fieldData_Solution_GMRF_2_p1[(i1+19)])))));
fieldData_Solution_GMRF_2_p1[(i1+12)] = (fieldData_Solution_GMRF_2_p1[(i1+12)]+((1.000000e+00/fieldData_LaplaceCoeff_GMRF_2_p1[(i1+12)])*(fieldData_RHS_GMRF_2_p1[(i1+2)]-(((((((((fieldData_LaplaceCoeff_GMRF_2_p1[(i1+12)]*fieldData_Solution_GMRF_2_p1[(i1+12)])+(fieldData_LaplaceCoeff_GMRF_2_p1[(i1+68)]*fieldData_Solution_GMRF_2_p1[(i1+13)]))+(fieldData_LaplaceCoeff_GMRF_2_p1[(i1+124)]*fieldData_Solution_GMRF_2_p1[(i1+11)]))+(fieldData_LaplaceCoeff_GMRF_2_p1[(i1+180)]*fieldData_Solution_GMRF_2_p1[(i1+20)]))+(fieldData_LaplaceCoeff_GMRF_2_p1[(i1+236)]*fieldData_Solution_GMRF_2_p1[(i1+4)]))+(fieldData_LaplaceCoeff_GMRF_2_p1[(i1+292)]*fieldData_Solution_GMRF_2_p1[(i1+3)]))+(fieldData_LaplaceCoeff_GMRF_2_p1[(i1+348)]*fieldData_Solution_GMRF_2_p1[(i1+19)]))+(fieldData_LaplaceCoeff_GMRF_2_p1[(i1+404)]*fieldData_Solution_GMRF_2_p1[(i1+5)]))+(fieldData_LaplaceCoeff_GMRF_2_p1[(i1+460)]*fieldData_Solution_GMRF_2_p1[(i1+21)])))));
}
for (; (i1<=((iterationOffsetEnd[0][0]+i0)+4)); i1 += 2) {
fieldData_Solution_GMRF_2_p1[(i1+10)] = (fieldData_Solution_GMRF_2_p1[(i1+10)]+((1.000000e+00/fieldData_LaplaceCoeff_GMRF_2_p1[(i1+10)])*(fieldData_RHS_GMRF_2_p1[i1]-(((((((((fieldData_LaplaceCoeff_GMRF_2_p1[(i1+10)]*fieldData_Solution_GMRF_2_p1[(i1+10)])+(fieldData_LaplaceCoeff_GMRF_2_p1[(i1+66)]*fieldData_Solution_GMRF_2_p1[(i1+11)]))+(fieldData_LaplaceCoeff_GMRF_2_p1[(i1+122)]*fieldData_Solution_GMRF_2_p1[(i1+9)]))+(fieldData_LaplaceCoeff_GMRF_2_p1[(i1+178)]*fieldData_Solution_GMRF_2_p1[(i1+18)]))+(fieldData_LaplaceCoeff_GMRF_2_p1[(i1+234)]*fieldData_Solution_GMRF_2_p1[(i1+2)]))+(fieldData_LaplaceCoeff_GMRF_2_p1[(i1+290)]*fieldData_Solution_GMRF_2_p1[(i1+1)]))+(fieldData_LaplaceCoeff_GMRF_2_p1[(i1+346)]*fieldData_Solution_GMRF_2_p1[(i1+17)]))+(fieldData_LaplaceCoeff_GMRF_2_p1[(i1+402)]*fieldData_Solution_GMRF_2_p1[(i1+3)]))+(fieldData_LaplaceCoeff_GMRF_2_p1[(i1+458)]*fieldData_Solution_GMRF_2_p1[(i1+19)])))));
}
}
}
}
}
