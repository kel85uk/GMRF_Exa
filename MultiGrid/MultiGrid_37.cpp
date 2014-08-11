#include "MultiGrid/MultiGrid.h"
void Smoother_GMRF_8() {
exchsolution_gmrfData_8(0);
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[0]) {
/* Statements in this Scop: S125 */
for (int i0 = iterationOffsetBegin[0][1]; (i0<=(iterationOffsetEnd[0][1]+256)); i0 += 1) {
double* fieldData_Solution_GMRF_8_p1 = (&fieldData_Solution_GMRF[8][(i0*259)]);
double* fieldData_RHS_GMRF_8_p1 = (&fieldData_RHS_GMRF[8][(i0*257)]);
double* fieldData_LaplaceCoeff_GMRF_8_p1 = (&fieldData_LaplaceCoeff_GMRF[8][(i0*259)]);
int i1 = ((((-(((iterationOffsetBegin[0][0]+i0)+1)%2))+iterationOffsetBegin[0][0])+i0)+1);
for (; (i1<=((iterationOffsetEnd[0][0]+i0)+253)); i1 += 4) {
fieldData_Solution_GMRF_8_p1[(i1+262)] = (fieldData_Solution_GMRF_8_p1[(i1+262)]+((1.000000e+00/fieldData_LaplaceCoeff_GMRF_8_p1[(i1+262)])*(fieldData_RHS_GMRF_8_p1[i1]-(((((((((fieldData_LaplaceCoeff_GMRF_8_p1[(i1+262)]*fieldData_Solution_GMRF_8_p1[(i1+262)])+(fieldData_LaplaceCoeff_GMRF_8_p1[(i1+67602)]*fieldData_Solution_GMRF_8_p1[(i1+263)]))+(fieldData_LaplaceCoeff_GMRF_8_p1[(i1+134942)]*fieldData_Solution_GMRF_8_p1[(i1+261)]))+(fieldData_LaplaceCoeff_GMRF_8_p1[(i1+202282)]*fieldData_Solution_GMRF_8_p1[(i1+522)]))+(fieldData_LaplaceCoeff_GMRF_8_p1[(i1+269622)]*fieldData_Solution_GMRF_8_p1[(i1+2)]))+(fieldData_LaplaceCoeff_GMRF_8_p1[(i1+336962)]*fieldData_Solution_GMRF_8_p1[(i1+1)]))+(fieldData_LaplaceCoeff_GMRF_8_p1[(i1+404302)]*fieldData_Solution_GMRF_8_p1[(i1+521)]))+(fieldData_LaplaceCoeff_GMRF_8_p1[(i1+471642)]*fieldData_Solution_GMRF_8_p1[(i1+3)]))+(fieldData_LaplaceCoeff_GMRF_8_p1[(i1+538982)]*fieldData_Solution_GMRF_8_p1[(i1+523)])))));
fieldData_Solution_GMRF_8_p1[(i1+264)] = (fieldData_Solution_GMRF_8_p1[(i1+264)]+((1.000000e+00/fieldData_LaplaceCoeff_GMRF_8_p1[(i1+264)])*(fieldData_RHS_GMRF_8_p1[(i1+2)]-(((((((((fieldData_LaplaceCoeff_GMRF_8_p1[(i1+264)]*fieldData_Solution_GMRF_8_p1[(i1+264)])+(fieldData_LaplaceCoeff_GMRF_8_p1[(i1+67604)]*fieldData_Solution_GMRF_8_p1[(i1+265)]))+(fieldData_LaplaceCoeff_GMRF_8_p1[(i1+134944)]*fieldData_Solution_GMRF_8_p1[(i1+263)]))+(fieldData_LaplaceCoeff_GMRF_8_p1[(i1+202284)]*fieldData_Solution_GMRF_8_p1[(i1+524)]))+(fieldData_LaplaceCoeff_GMRF_8_p1[(i1+269624)]*fieldData_Solution_GMRF_8_p1[(i1+4)]))+(fieldData_LaplaceCoeff_GMRF_8_p1[(i1+336964)]*fieldData_Solution_GMRF_8_p1[(i1+3)]))+(fieldData_LaplaceCoeff_GMRF_8_p1[(i1+404304)]*fieldData_Solution_GMRF_8_p1[(i1+523)]))+(fieldData_LaplaceCoeff_GMRF_8_p1[(i1+471644)]*fieldData_Solution_GMRF_8_p1[(i1+5)]))+(fieldData_LaplaceCoeff_GMRF_8_p1[(i1+538984)]*fieldData_Solution_GMRF_8_p1[(i1+525)])))));
}
for (; (i1<=((iterationOffsetEnd[0][0]+i0)+256)); i1 += 2) {
fieldData_Solution_GMRF_8_p1[(i1+262)] = (fieldData_Solution_GMRF_8_p1[(i1+262)]+((1.000000e+00/fieldData_LaplaceCoeff_GMRF_8_p1[(i1+262)])*(fieldData_RHS_GMRF_8_p1[i1]-(((((((((fieldData_LaplaceCoeff_GMRF_8_p1[(i1+262)]*fieldData_Solution_GMRF_8_p1[(i1+262)])+(fieldData_LaplaceCoeff_GMRF_8_p1[(i1+67602)]*fieldData_Solution_GMRF_8_p1[(i1+263)]))+(fieldData_LaplaceCoeff_GMRF_8_p1[(i1+134942)]*fieldData_Solution_GMRF_8_p1[(i1+261)]))+(fieldData_LaplaceCoeff_GMRF_8_p1[(i1+202282)]*fieldData_Solution_GMRF_8_p1[(i1+522)]))+(fieldData_LaplaceCoeff_GMRF_8_p1[(i1+269622)]*fieldData_Solution_GMRF_8_p1[(i1+2)]))+(fieldData_LaplaceCoeff_GMRF_8_p1[(i1+336962)]*fieldData_Solution_GMRF_8_p1[(i1+1)]))+(fieldData_LaplaceCoeff_GMRF_8_p1[(i1+404302)]*fieldData_Solution_GMRF_8_p1[(i1+521)]))+(fieldData_LaplaceCoeff_GMRF_8_p1[(i1+471642)]*fieldData_Solution_GMRF_8_p1[(i1+3)]))+(fieldData_LaplaceCoeff_GMRF_8_p1[(i1+538982)]*fieldData_Solution_GMRF_8_p1[(i1+523)])))));
}
}
}
}
exchsolution_gmrfData_8(0);
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[0]) {
/* Statements in this Scop: S126 */
for (int i0 = iterationOffsetBegin[0][1]; (i0<=(iterationOffsetEnd[0][1]+256)); i0 += 1) {
double* fieldData_Solution_GMRF_8_p1 = (&fieldData_Solution_GMRF[8][(i0*259)]);
double* fieldData_RHS_GMRF_8_p1 = (&fieldData_RHS_GMRF[8][(i0*257)]);
double* fieldData_LaplaceCoeff_GMRF_8_p1 = (&fieldData_LaplaceCoeff_GMRF[8][(i0*259)]);
int i1 = ((((-((iterationOffsetBegin[0][0]+i0)%2))+iterationOffsetBegin[0][0])+i0)+1);
for (; (i1<=((iterationOffsetEnd[0][0]+i0)+253)); i1 += 4) {
fieldData_Solution_GMRF_8_p1[(i1+262)] = (fieldData_Solution_GMRF_8_p1[(i1+262)]+((1.000000e+00/fieldData_LaplaceCoeff_GMRF_8_p1[(i1+262)])*(fieldData_RHS_GMRF_8_p1[i1]-(((((((((fieldData_LaplaceCoeff_GMRF_8_p1[(i1+262)]*fieldData_Solution_GMRF_8_p1[(i1+262)])+(fieldData_LaplaceCoeff_GMRF_8_p1[(i1+67602)]*fieldData_Solution_GMRF_8_p1[(i1+263)]))+(fieldData_LaplaceCoeff_GMRF_8_p1[(i1+134942)]*fieldData_Solution_GMRF_8_p1[(i1+261)]))+(fieldData_LaplaceCoeff_GMRF_8_p1[(i1+202282)]*fieldData_Solution_GMRF_8_p1[(i1+522)]))+(fieldData_LaplaceCoeff_GMRF_8_p1[(i1+269622)]*fieldData_Solution_GMRF_8_p1[(i1+2)]))+(fieldData_LaplaceCoeff_GMRF_8_p1[(i1+336962)]*fieldData_Solution_GMRF_8_p1[(i1+1)]))+(fieldData_LaplaceCoeff_GMRF_8_p1[(i1+404302)]*fieldData_Solution_GMRF_8_p1[(i1+521)]))+(fieldData_LaplaceCoeff_GMRF_8_p1[(i1+471642)]*fieldData_Solution_GMRF_8_p1[(i1+3)]))+(fieldData_LaplaceCoeff_GMRF_8_p1[(i1+538982)]*fieldData_Solution_GMRF_8_p1[(i1+523)])))));
fieldData_Solution_GMRF_8_p1[(i1+264)] = (fieldData_Solution_GMRF_8_p1[(i1+264)]+((1.000000e+00/fieldData_LaplaceCoeff_GMRF_8_p1[(i1+264)])*(fieldData_RHS_GMRF_8_p1[(i1+2)]-(((((((((fieldData_LaplaceCoeff_GMRF_8_p1[(i1+264)]*fieldData_Solution_GMRF_8_p1[(i1+264)])+(fieldData_LaplaceCoeff_GMRF_8_p1[(i1+67604)]*fieldData_Solution_GMRF_8_p1[(i1+265)]))+(fieldData_LaplaceCoeff_GMRF_8_p1[(i1+134944)]*fieldData_Solution_GMRF_8_p1[(i1+263)]))+(fieldData_LaplaceCoeff_GMRF_8_p1[(i1+202284)]*fieldData_Solution_GMRF_8_p1[(i1+524)]))+(fieldData_LaplaceCoeff_GMRF_8_p1[(i1+269624)]*fieldData_Solution_GMRF_8_p1[(i1+4)]))+(fieldData_LaplaceCoeff_GMRF_8_p1[(i1+336964)]*fieldData_Solution_GMRF_8_p1[(i1+3)]))+(fieldData_LaplaceCoeff_GMRF_8_p1[(i1+404304)]*fieldData_Solution_GMRF_8_p1[(i1+523)]))+(fieldData_LaplaceCoeff_GMRF_8_p1[(i1+471644)]*fieldData_Solution_GMRF_8_p1[(i1+5)]))+(fieldData_LaplaceCoeff_GMRF_8_p1[(i1+538984)]*fieldData_Solution_GMRF_8_p1[(i1+525)])))));
}
for (; (i1<=((iterationOffsetEnd[0][0]+i0)+256)); i1 += 2) {
fieldData_Solution_GMRF_8_p1[(i1+262)] = (fieldData_Solution_GMRF_8_p1[(i1+262)]+((1.000000e+00/fieldData_LaplaceCoeff_GMRF_8_p1[(i1+262)])*(fieldData_RHS_GMRF_8_p1[i1]-(((((((((fieldData_LaplaceCoeff_GMRF_8_p1[(i1+262)]*fieldData_Solution_GMRF_8_p1[(i1+262)])+(fieldData_LaplaceCoeff_GMRF_8_p1[(i1+67602)]*fieldData_Solution_GMRF_8_p1[(i1+263)]))+(fieldData_LaplaceCoeff_GMRF_8_p1[(i1+134942)]*fieldData_Solution_GMRF_8_p1[(i1+261)]))+(fieldData_LaplaceCoeff_GMRF_8_p1[(i1+202282)]*fieldData_Solution_GMRF_8_p1[(i1+522)]))+(fieldData_LaplaceCoeff_GMRF_8_p1[(i1+269622)]*fieldData_Solution_GMRF_8_p1[(i1+2)]))+(fieldData_LaplaceCoeff_GMRF_8_p1[(i1+336962)]*fieldData_Solution_GMRF_8_p1[(i1+1)]))+(fieldData_LaplaceCoeff_GMRF_8_p1[(i1+404302)]*fieldData_Solution_GMRF_8_p1[(i1+521)]))+(fieldData_LaplaceCoeff_GMRF_8_p1[(i1+471642)]*fieldData_Solution_GMRF_8_p1[(i1+3)]))+(fieldData_LaplaceCoeff_GMRF_8_p1[(i1+538982)]*fieldData_Solution_GMRF_8_p1[(i1+523)])))));
}
}
}
}
}
