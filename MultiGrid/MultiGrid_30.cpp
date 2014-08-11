#include "MultiGrid/MultiGrid.h"
void Smoother_GMRF_1() {
exchsolution_gmrfData_1(0);
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[0]) {
/* Statements in this Scop: S111 */
for (int i0 = iterationOffsetBegin[0][1]; (i0<=(iterationOffsetEnd[0][1]+2)); i0 += 1) {
double* fieldData_RHS_GMRF_1_p1 = (&fieldData_RHS_GMRF[1][(i0*3)]);
double* fieldData_LaplaceCoeff_GMRF_1_p1 = (&fieldData_LaplaceCoeff_GMRF[1][(i0*5)]);
double* fieldData_Solution_GMRF_1_p1 = (&fieldData_Solution_GMRF[1][(i0*5)]);
int i1 = ((((-(((iterationOffsetBegin[0][0]+i0)+1)%2))+iterationOffsetBegin[0][0])+i0)+1);
for (; (i1<=((iterationOffsetEnd[0][0]+i0)-1)); i1 += 4) {
fieldData_Solution_GMRF_1_p1[(i1+8)] = (fieldData_Solution_GMRF_1_p1[(i1+8)]+((1.000000e+00/fieldData_LaplaceCoeff_GMRF_1_p1[(i1+8)])*(fieldData_RHS_GMRF_1_p1[i1]-(((((((((fieldData_LaplaceCoeff_GMRF_1_p1[(i1+8)]*fieldData_Solution_GMRF_1_p1[(i1+8)])+(fieldData_LaplaceCoeff_GMRF_1_p1[(i1+38)]*fieldData_Solution_GMRF_1_p1[(i1+9)]))+(fieldData_LaplaceCoeff_GMRF_1_p1[(i1+68)]*fieldData_Solution_GMRF_1_p1[(i1+7)]))+(fieldData_LaplaceCoeff_GMRF_1_p1[(i1+98)]*fieldData_Solution_GMRF_1_p1[(i1+14)]))+(fieldData_LaplaceCoeff_GMRF_1_p1[(i1+128)]*fieldData_Solution_GMRF_1_p1[(i1+2)]))+(fieldData_LaplaceCoeff_GMRF_1_p1[(i1+158)]*fieldData_Solution_GMRF_1_p1[(i1+1)]))+(fieldData_LaplaceCoeff_GMRF_1_p1[(i1+188)]*fieldData_Solution_GMRF_1_p1[(i1+13)]))+(fieldData_LaplaceCoeff_GMRF_1_p1[(i1+218)]*fieldData_Solution_GMRF_1_p1[(i1+3)]))+(fieldData_LaplaceCoeff_GMRF_1_p1[(i1+248)]*fieldData_Solution_GMRF_1_p1[(i1+15)])))));
fieldData_Solution_GMRF_1_p1[(i1+10)] = (fieldData_Solution_GMRF_1_p1[(i1+10)]+((1.000000e+00/fieldData_LaplaceCoeff_GMRF_1_p1[(i1+10)])*(fieldData_RHS_GMRF_1_p1[(i1+2)]-(((((((((fieldData_LaplaceCoeff_GMRF_1_p1[(i1+10)]*fieldData_Solution_GMRF_1_p1[(i1+10)])+(fieldData_LaplaceCoeff_GMRF_1_p1[(i1+40)]*fieldData_Solution_GMRF_1_p1[(i1+11)]))+(fieldData_LaplaceCoeff_GMRF_1_p1[(i1+70)]*fieldData_Solution_GMRF_1_p1[(i1+9)]))+(fieldData_LaplaceCoeff_GMRF_1_p1[(i1+100)]*fieldData_Solution_GMRF_1_p1[(i1+16)]))+(fieldData_LaplaceCoeff_GMRF_1_p1[(i1+130)]*fieldData_Solution_GMRF_1_p1[(i1+4)]))+(fieldData_LaplaceCoeff_GMRF_1_p1[(i1+160)]*fieldData_Solution_GMRF_1_p1[(i1+3)]))+(fieldData_LaplaceCoeff_GMRF_1_p1[(i1+190)]*fieldData_Solution_GMRF_1_p1[(i1+15)]))+(fieldData_LaplaceCoeff_GMRF_1_p1[(i1+220)]*fieldData_Solution_GMRF_1_p1[(i1+5)]))+(fieldData_LaplaceCoeff_GMRF_1_p1[(i1+250)]*fieldData_Solution_GMRF_1_p1[(i1+17)])))));
}
for (; (i1<=((iterationOffsetEnd[0][0]+i0)+2)); i1 += 2) {
fieldData_Solution_GMRF_1_p1[(i1+8)] = (fieldData_Solution_GMRF_1_p1[(i1+8)]+((1.000000e+00/fieldData_LaplaceCoeff_GMRF_1_p1[(i1+8)])*(fieldData_RHS_GMRF_1_p1[i1]-(((((((((fieldData_LaplaceCoeff_GMRF_1_p1[(i1+8)]*fieldData_Solution_GMRF_1_p1[(i1+8)])+(fieldData_LaplaceCoeff_GMRF_1_p1[(i1+38)]*fieldData_Solution_GMRF_1_p1[(i1+9)]))+(fieldData_LaplaceCoeff_GMRF_1_p1[(i1+68)]*fieldData_Solution_GMRF_1_p1[(i1+7)]))+(fieldData_LaplaceCoeff_GMRF_1_p1[(i1+98)]*fieldData_Solution_GMRF_1_p1[(i1+14)]))+(fieldData_LaplaceCoeff_GMRF_1_p1[(i1+128)]*fieldData_Solution_GMRF_1_p1[(i1+2)]))+(fieldData_LaplaceCoeff_GMRF_1_p1[(i1+158)]*fieldData_Solution_GMRF_1_p1[(i1+1)]))+(fieldData_LaplaceCoeff_GMRF_1_p1[(i1+188)]*fieldData_Solution_GMRF_1_p1[(i1+13)]))+(fieldData_LaplaceCoeff_GMRF_1_p1[(i1+218)]*fieldData_Solution_GMRF_1_p1[(i1+3)]))+(fieldData_LaplaceCoeff_GMRF_1_p1[(i1+248)]*fieldData_Solution_GMRF_1_p1[(i1+15)])))));
}
}
}
}
exchsolution_gmrfData_1(0);
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[0]) {
/* Statements in this Scop: S112 */
for (int i0 = iterationOffsetBegin[0][1]; (i0<=(iterationOffsetEnd[0][1]+2)); i0 += 1) {
double* fieldData_RHS_GMRF_1_p1 = (&fieldData_RHS_GMRF[1][(i0*3)]);
double* fieldData_LaplaceCoeff_GMRF_1_p1 = (&fieldData_LaplaceCoeff_GMRF[1][(i0*5)]);
double* fieldData_Solution_GMRF_1_p1 = (&fieldData_Solution_GMRF[1][(i0*5)]);
int i1 = ((((-((iterationOffsetBegin[0][0]+i0)%2))+iterationOffsetBegin[0][0])+i0)+1);
for (; (i1<=((iterationOffsetEnd[0][0]+i0)-1)); i1 += 4) {
fieldData_Solution_GMRF_1_p1[(i1+8)] = (fieldData_Solution_GMRF_1_p1[(i1+8)]+((1.000000e+00/fieldData_LaplaceCoeff_GMRF_1_p1[(i1+8)])*(fieldData_RHS_GMRF_1_p1[i1]-(((((((((fieldData_LaplaceCoeff_GMRF_1_p1[(i1+8)]*fieldData_Solution_GMRF_1_p1[(i1+8)])+(fieldData_LaplaceCoeff_GMRF_1_p1[(i1+38)]*fieldData_Solution_GMRF_1_p1[(i1+9)]))+(fieldData_LaplaceCoeff_GMRF_1_p1[(i1+68)]*fieldData_Solution_GMRF_1_p1[(i1+7)]))+(fieldData_LaplaceCoeff_GMRF_1_p1[(i1+98)]*fieldData_Solution_GMRF_1_p1[(i1+14)]))+(fieldData_LaplaceCoeff_GMRF_1_p1[(i1+128)]*fieldData_Solution_GMRF_1_p1[(i1+2)]))+(fieldData_LaplaceCoeff_GMRF_1_p1[(i1+158)]*fieldData_Solution_GMRF_1_p1[(i1+1)]))+(fieldData_LaplaceCoeff_GMRF_1_p1[(i1+188)]*fieldData_Solution_GMRF_1_p1[(i1+13)]))+(fieldData_LaplaceCoeff_GMRF_1_p1[(i1+218)]*fieldData_Solution_GMRF_1_p1[(i1+3)]))+(fieldData_LaplaceCoeff_GMRF_1_p1[(i1+248)]*fieldData_Solution_GMRF_1_p1[(i1+15)])))));
fieldData_Solution_GMRF_1_p1[(i1+10)] = (fieldData_Solution_GMRF_1_p1[(i1+10)]+((1.000000e+00/fieldData_LaplaceCoeff_GMRF_1_p1[(i1+10)])*(fieldData_RHS_GMRF_1_p1[(i1+2)]-(((((((((fieldData_LaplaceCoeff_GMRF_1_p1[(i1+10)]*fieldData_Solution_GMRF_1_p1[(i1+10)])+(fieldData_LaplaceCoeff_GMRF_1_p1[(i1+40)]*fieldData_Solution_GMRF_1_p1[(i1+11)]))+(fieldData_LaplaceCoeff_GMRF_1_p1[(i1+70)]*fieldData_Solution_GMRF_1_p1[(i1+9)]))+(fieldData_LaplaceCoeff_GMRF_1_p1[(i1+100)]*fieldData_Solution_GMRF_1_p1[(i1+16)]))+(fieldData_LaplaceCoeff_GMRF_1_p1[(i1+130)]*fieldData_Solution_GMRF_1_p1[(i1+4)]))+(fieldData_LaplaceCoeff_GMRF_1_p1[(i1+160)]*fieldData_Solution_GMRF_1_p1[(i1+3)]))+(fieldData_LaplaceCoeff_GMRF_1_p1[(i1+190)]*fieldData_Solution_GMRF_1_p1[(i1+15)]))+(fieldData_LaplaceCoeff_GMRF_1_p1[(i1+220)]*fieldData_Solution_GMRF_1_p1[(i1+5)]))+(fieldData_LaplaceCoeff_GMRF_1_p1[(i1+250)]*fieldData_Solution_GMRF_1_p1[(i1+17)])))));
}
for (; (i1<=((iterationOffsetEnd[0][0]+i0)+2)); i1 += 2) {
fieldData_Solution_GMRF_1_p1[(i1+8)] = (fieldData_Solution_GMRF_1_p1[(i1+8)]+((1.000000e+00/fieldData_LaplaceCoeff_GMRF_1_p1[(i1+8)])*(fieldData_RHS_GMRF_1_p1[i1]-(((((((((fieldData_LaplaceCoeff_GMRF_1_p1[(i1+8)]*fieldData_Solution_GMRF_1_p1[(i1+8)])+(fieldData_LaplaceCoeff_GMRF_1_p1[(i1+38)]*fieldData_Solution_GMRF_1_p1[(i1+9)]))+(fieldData_LaplaceCoeff_GMRF_1_p1[(i1+68)]*fieldData_Solution_GMRF_1_p1[(i1+7)]))+(fieldData_LaplaceCoeff_GMRF_1_p1[(i1+98)]*fieldData_Solution_GMRF_1_p1[(i1+14)]))+(fieldData_LaplaceCoeff_GMRF_1_p1[(i1+128)]*fieldData_Solution_GMRF_1_p1[(i1+2)]))+(fieldData_LaplaceCoeff_GMRF_1_p1[(i1+158)]*fieldData_Solution_GMRF_1_p1[(i1+1)]))+(fieldData_LaplaceCoeff_GMRF_1_p1[(i1+188)]*fieldData_Solution_GMRF_1_p1[(i1+13)]))+(fieldData_LaplaceCoeff_GMRF_1_p1[(i1+218)]*fieldData_Solution_GMRF_1_p1[(i1+3)]))+(fieldData_LaplaceCoeff_GMRF_1_p1[(i1+248)]*fieldData_Solution_GMRF_1_p1[(i1+15)])))));
}
}
}
}
}
