#include "MultiGrid/MultiGrid.h"
void Smoother_7() {
exchsolutionData_7(0);
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[1]) {
/* Statements in this Scop: S107 */
for (int i0 = iterationOffsetBegin[1][1]; (i0<=(iterationOffsetEnd[1][1]+128)); i0 += 1) {
double* fieldData_RHS_7_p1 = (&fieldData_RHS[7][(i0*129)]);
double* fieldData_Solution_7_p1 = (&fieldData_Solution[7][(i0*131)]);
double* fieldData_LaplaceCoeff_7_p1 = (&fieldData_LaplaceCoeff[7][(i0*131)]);
int i1 = ((((-(((iterationOffsetBegin[1][0]+i0)+1)%2))+iterationOffsetBegin[1][0])+i0)+1);
for (; (i1<=((iterationOffsetEnd[1][0]+i0)+125)); i1 += 4) {
fieldData_Solution_7_p1[(i1+134)] = (fieldData_Solution_7_p1[(i1+134)]+((1.000000e+00/fieldData_LaplaceCoeff_7_p1[(i1+134)])*(fieldData_RHS_7_p1[i1]-(((((((((fieldData_LaplaceCoeff_7_p1[(i1+134)]*fieldData_Solution_7_p1[(i1+134)])+(fieldData_LaplaceCoeff_7_p1[(i1+17426)]*fieldData_Solution_7_p1[(i1+135)]))+(fieldData_LaplaceCoeff_7_p1[(i1+34718)]*fieldData_Solution_7_p1[(i1+133)]))+(fieldData_LaplaceCoeff_7_p1[(i1+52010)]*fieldData_Solution_7_p1[(i1+266)]))+(fieldData_LaplaceCoeff_7_p1[(i1+69302)]*fieldData_Solution_7_p1[(i1+2)]))+(fieldData_LaplaceCoeff_7_p1[(i1+86594)]*fieldData_Solution_7_p1[(i1+1)]))+(fieldData_LaplaceCoeff_7_p1[(i1+103886)]*fieldData_Solution_7_p1[(i1+265)]))+(fieldData_LaplaceCoeff_7_p1[(i1+121178)]*fieldData_Solution_7_p1[(i1+3)]))+(fieldData_LaplaceCoeff_7_p1[(i1+138470)]*fieldData_Solution_7_p1[(i1+267)])))));
fieldData_Solution_7_p1[(i1+136)] = (fieldData_Solution_7_p1[(i1+136)]+((1.000000e+00/fieldData_LaplaceCoeff_7_p1[(i1+136)])*(fieldData_RHS_7_p1[(i1+2)]-(((((((((fieldData_LaplaceCoeff_7_p1[(i1+136)]*fieldData_Solution_7_p1[(i1+136)])+(fieldData_LaplaceCoeff_7_p1[(i1+17428)]*fieldData_Solution_7_p1[(i1+137)]))+(fieldData_LaplaceCoeff_7_p1[(i1+34720)]*fieldData_Solution_7_p1[(i1+135)]))+(fieldData_LaplaceCoeff_7_p1[(i1+52012)]*fieldData_Solution_7_p1[(i1+268)]))+(fieldData_LaplaceCoeff_7_p1[(i1+69304)]*fieldData_Solution_7_p1[(i1+4)]))+(fieldData_LaplaceCoeff_7_p1[(i1+86596)]*fieldData_Solution_7_p1[(i1+3)]))+(fieldData_LaplaceCoeff_7_p1[(i1+103888)]*fieldData_Solution_7_p1[(i1+267)]))+(fieldData_LaplaceCoeff_7_p1[(i1+121180)]*fieldData_Solution_7_p1[(i1+5)]))+(fieldData_LaplaceCoeff_7_p1[(i1+138472)]*fieldData_Solution_7_p1[(i1+269)])))));
}
for (; (i1<=((iterationOffsetEnd[1][0]+i0)+128)); i1 += 2) {
fieldData_Solution_7_p1[(i1+134)] = (fieldData_Solution_7_p1[(i1+134)]+((1.000000e+00/fieldData_LaplaceCoeff_7_p1[(i1+134)])*(fieldData_RHS_7_p1[i1]-(((((((((fieldData_LaplaceCoeff_7_p1[(i1+134)]*fieldData_Solution_7_p1[(i1+134)])+(fieldData_LaplaceCoeff_7_p1[(i1+17426)]*fieldData_Solution_7_p1[(i1+135)]))+(fieldData_LaplaceCoeff_7_p1[(i1+34718)]*fieldData_Solution_7_p1[(i1+133)]))+(fieldData_LaplaceCoeff_7_p1[(i1+52010)]*fieldData_Solution_7_p1[(i1+266)]))+(fieldData_LaplaceCoeff_7_p1[(i1+69302)]*fieldData_Solution_7_p1[(i1+2)]))+(fieldData_LaplaceCoeff_7_p1[(i1+86594)]*fieldData_Solution_7_p1[(i1+1)]))+(fieldData_LaplaceCoeff_7_p1[(i1+103886)]*fieldData_Solution_7_p1[(i1+265)]))+(fieldData_LaplaceCoeff_7_p1[(i1+121178)]*fieldData_Solution_7_p1[(i1+3)]))+(fieldData_LaplaceCoeff_7_p1[(i1+138470)]*fieldData_Solution_7_p1[(i1+267)])))));
}
}
}
}
exchsolutionData_7(0);
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[1]) {
/* Statements in this Scop: S108 */
for (int i0 = iterationOffsetBegin[1][1]; (i0<=(iterationOffsetEnd[1][1]+128)); i0 += 1) {
double* fieldData_RHS_7_p1 = (&fieldData_RHS[7][(i0*129)]);
double* fieldData_Solution_7_p1 = (&fieldData_Solution[7][(i0*131)]);
double* fieldData_LaplaceCoeff_7_p1 = (&fieldData_LaplaceCoeff[7][(i0*131)]);
int i1 = ((((-((iterationOffsetBegin[1][0]+i0)%2))+iterationOffsetBegin[1][0])+i0)+1);
for (; (i1<=((iterationOffsetEnd[1][0]+i0)+125)); i1 += 4) {
fieldData_Solution_7_p1[(i1+134)] = (fieldData_Solution_7_p1[(i1+134)]+((1.000000e+00/fieldData_LaplaceCoeff_7_p1[(i1+134)])*(fieldData_RHS_7_p1[i1]-(((((((((fieldData_LaplaceCoeff_7_p1[(i1+134)]*fieldData_Solution_7_p1[(i1+134)])+(fieldData_LaplaceCoeff_7_p1[(i1+17426)]*fieldData_Solution_7_p1[(i1+135)]))+(fieldData_LaplaceCoeff_7_p1[(i1+34718)]*fieldData_Solution_7_p1[(i1+133)]))+(fieldData_LaplaceCoeff_7_p1[(i1+52010)]*fieldData_Solution_7_p1[(i1+266)]))+(fieldData_LaplaceCoeff_7_p1[(i1+69302)]*fieldData_Solution_7_p1[(i1+2)]))+(fieldData_LaplaceCoeff_7_p1[(i1+86594)]*fieldData_Solution_7_p1[(i1+1)]))+(fieldData_LaplaceCoeff_7_p1[(i1+103886)]*fieldData_Solution_7_p1[(i1+265)]))+(fieldData_LaplaceCoeff_7_p1[(i1+121178)]*fieldData_Solution_7_p1[(i1+3)]))+(fieldData_LaplaceCoeff_7_p1[(i1+138470)]*fieldData_Solution_7_p1[(i1+267)])))));
fieldData_Solution_7_p1[(i1+136)] = (fieldData_Solution_7_p1[(i1+136)]+((1.000000e+00/fieldData_LaplaceCoeff_7_p1[(i1+136)])*(fieldData_RHS_7_p1[(i1+2)]-(((((((((fieldData_LaplaceCoeff_7_p1[(i1+136)]*fieldData_Solution_7_p1[(i1+136)])+(fieldData_LaplaceCoeff_7_p1[(i1+17428)]*fieldData_Solution_7_p1[(i1+137)]))+(fieldData_LaplaceCoeff_7_p1[(i1+34720)]*fieldData_Solution_7_p1[(i1+135)]))+(fieldData_LaplaceCoeff_7_p1[(i1+52012)]*fieldData_Solution_7_p1[(i1+268)]))+(fieldData_LaplaceCoeff_7_p1[(i1+69304)]*fieldData_Solution_7_p1[(i1+4)]))+(fieldData_LaplaceCoeff_7_p1[(i1+86596)]*fieldData_Solution_7_p1[(i1+3)]))+(fieldData_LaplaceCoeff_7_p1[(i1+103888)]*fieldData_Solution_7_p1[(i1+267)]))+(fieldData_LaplaceCoeff_7_p1[(i1+121180)]*fieldData_Solution_7_p1[(i1+5)]))+(fieldData_LaplaceCoeff_7_p1[(i1+138472)]*fieldData_Solution_7_p1[(i1+269)])))));
}
for (; (i1<=((iterationOffsetEnd[1][0]+i0)+128)); i1 += 2) {
fieldData_Solution_7_p1[(i1+134)] = (fieldData_Solution_7_p1[(i1+134)]+((1.000000e+00/fieldData_LaplaceCoeff_7_p1[(i1+134)])*(fieldData_RHS_7_p1[i1]-(((((((((fieldData_LaplaceCoeff_7_p1[(i1+134)]*fieldData_Solution_7_p1[(i1+134)])+(fieldData_LaplaceCoeff_7_p1[(i1+17426)]*fieldData_Solution_7_p1[(i1+135)]))+(fieldData_LaplaceCoeff_7_p1[(i1+34718)]*fieldData_Solution_7_p1[(i1+133)]))+(fieldData_LaplaceCoeff_7_p1[(i1+52010)]*fieldData_Solution_7_p1[(i1+266)]))+(fieldData_LaplaceCoeff_7_p1[(i1+69302)]*fieldData_Solution_7_p1[(i1+2)]))+(fieldData_LaplaceCoeff_7_p1[(i1+86594)]*fieldData_Solution_7_p1[(i1+1)]))+(fieldData_LaplaceCoeff_7_p1[(i1+103886)]*fieldData_Solution_7_p1[(i1+265)]))+(fieldData_LaplaceCoeff_7_p1[(i1+121178)]*fieldData_Solution_7_p1[(i1+3)]))+(fieldData_LaplaceCoeff_7_p1[(i1+138470)]*fieldData_Solution_7_p1[(i1+267)])))));
}
}
}
}
}
