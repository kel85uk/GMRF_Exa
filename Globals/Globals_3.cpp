#include "Globals/Globals.h"

void setupBuffers() {
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[1]) {
fieldData_Solution[0] = new double[((4-(iterationOffsetBegin[1][0]+2))+24)];
fieldData_Solution[0] = (fieldData_Solution[0]+(4-(iterationOffsetBegin[1][0]+2)));
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[1]) {
fieldData_Solution[1] = new double[((4-(iterationOffsetBegin[1][0]+2))+30)];
fieldData_Solution[1] = (fieldData_Solution[1]+(4-(iterationOffsetBegin[1][0]+2)));
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[1]) {
fieldData_Solution[2] = new double[((4-(iterationOffsetBegin[1][0]+2))+56)];
fieldData_Solution[2] = (fieldData_Solution[2]+(4-(iterationOffsetBegin[1][0]+2)));
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[1]) {
fieldData_Solution[3] = new double[((4-(iterationOffsetBegin[1][0]+2))+132)];
fieldData_Solution[3] = (fieldData_Solution[3]+(4-(iterationOffsetBegin[1][0]+2)));
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[1]) {
fieldData_Solution[4] = new double[((4-(iterationOffsetBegin[1][0]+2))+380)];
fieldData_Solution[4] = (fieldData_Solution[4]+(4-(iterationOffsetBegin[1][0]+2)));
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[1]) {
fieldData_Solution[5] = new double[((4-(iterationOffsetBegin[1][0]+2))+1260)];
fieldData_Solution[5] = (fieldData_Solution[5]+(4-(iterationOffsetBegin[1][0]+2)));
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[1]) {
fieldData_Solution[6] = new double[((4-(iterationOffsetBegin[1][0]+2))+4556)];
fieldData_Solution[6] = (fieldData_Solution[6]+(4-(iterationOffsetBegin[1][0]+2)));
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[1]) {
fieldData_Solution[7] = new double[((4-(iterationOffsetBegin[1][0]+2))+17292)];
fieldData_Solution[7] = (fieldData_Solution[7]+(4-(iterationOffsetBegin[1][0]+2)));
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[1]) {
fieldData_Solution[8] = new double[((4-(iterationOffsetBegin[1][0]+2))+67340)];
fieldData_Solution[8] = (fieldData_Solution[8]+(4-(iterationOffsetBegin[1][0]+2)));
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[1]) {
fieldData_SolutionMean[0] = new double[((4-iterationOffsetBegin[1][0])+4)];
fieldData_SolutionMean[0] = (fieldData_SolutionMean[0]+(4-iterationOffsetBegin[1][0]));
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[1]) {
fieldData_SolutionMean[1] = new double[((4-iterationOffsetBegin[1][0])+12)];
fieldData_SolutionMean[1] = (fieldData_SolutionMean[1]+(4-iterationOffsetBegin[1][0]));
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[1]) {
fieldData_SolutionMean[2] = new double[((4-iterationOffsetBegin[1][0])+30)];
fieldData_SolutionMean[2] = (fieldData_SolutionMean[2]+(4-iterationOffsetBegin[1][0]));
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[1]) {
fieldData_SolutionMean[3] = new double[((4-iterationOffsetBegin[1][0])+90)];
fieldData_SolutionMean[3] = (fieldData_SolutionMean[3]+(4-iterationOffsetBegin[1][0]));
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[1]) {
fieldData_SolutionMean[4] = new double[((4-iterationOffsetBegin[1][0])+306)];
fieldData_SolutionMean[4] = (fieldData_SolutionMean[4]+(4-iterationOffsetBegin[1][0]));
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[1]) {
fieldData_SolutionMean[5] = new double[((4-iterationOffsetBegin[1][0])+1122)];
fieldData_SolutionMean[5] = (fieldData_SolutionMean[5]+(4-iterationOffsetBegin[1][0]));
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[1]) {
fieldData_SolutionMean[6] = new double[((4-iterationOffsetBegin[1][0])+4290)];
fieldData_SolutionMean[6] = (fieldData_SolutionMean[6]+(4-iterationOffsetBegin[1][0]));
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[1]) {
fieldData_SolutionMean[7] = new double[((4-iterationOffsetBegin[1][0])+16770)];
fieldData_SolutionMean[7] = (fieldData_SolutionMean[7]+(4-iterationOffsetBegin[1][0]));
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[1]) {
fieldData_SolutionMean[8] = new double[((4-iterationOffsetBegin[1][0])+66306)];
fieldData_SolutionMean[8] = (fieldData_SolutionMean[8]+(4-iterationOffsetBegin[1][0]));
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[1]) {
fieldData_Residual[0] = new double[((4-(iterationOffsetBegin[1][0]+2))+24)];
fieldData_Residual[0] = (fieldData_Residual[0]+(4-(iterationOffsetBegin[1][0]+2)));
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[1]) {
fieldData_Residual[1] = new double[((4-(iterationOffsetBegin[1][0]+2))+30)];
fieldData_Residual[1] = (fieldData_Residual[1]+(4-(iterationOffsetBegin[1][0]+2)));
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[1]) {
fieldData_Residual[2] = new double[((4-(iterationOffsetBegin[1][0]+2))+56)];
fieldData_Residual[2] = (fieldData_Residual[2]+(4-(iterationOffsetBegin[1][0]+2)));
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[1]) {
fieldData_Residual[3] = new double[((4-(iterationOffsetBegin[1][0]+2))+132)];
fieldData_Residual[3] = (fieldData_Residual[3]+(4-(iterationOffsetBegin[1][0]+2)));
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[1]) {
fieldData_Residual[4] = new double[((4-(iterationOffsetBegin[1][0]+2))+380)];
fieldData_Residual[4] = (fieldData_Residual[4]+(4-(iterationOffsetBegin[1][0]+2)));
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[1]) {
fieldData_Residual[5] = new double[((4-(iterationOffsetBegin[1][0]+2))+1260)];
fieldData_Residual[5] = (fieldData_Residual[5]+(4-(iterationOffsetBegin[1][0]+2)));
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[1]) {
fieldData_Residual[6] = new double[((4-(iterationOffsetBegin[1][0]+2))+4556)];
fieldData_Residual[6] = (fieldData_Residual[6]+(4-(iterationOffsetBegin[1][0]+2)));
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[1]) {
fieldData_Residual[7] = new double[((4-(iterationOffsetBegin[1][0]+2))+17292)];
fieldData_Residual[7] = (fieldData_Residual[7]+(4-(iterationOffsetBegin[1][0]+2)));
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[1]) {
fieldData_Residual[8] = new double[((4-(iterationOffsetBegin[1][0]+2))+67340)];
fieldData_Residual[8] = (fieldData_Residual[8]+(4-(iterationOffsetBegin[1][0]+2)));
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[1]) {
fieldData_RHS[0] = new double[((4-iterationOffsetBegin[1][0])+4)];
fieldData_RHS[0] = (fieldData_RHS[0]+(4-iterationOffsetBegin[1][0]));
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[1]) {
fieldData_RHS[1] = new double[((4-iterationOffsetBegin[1][0])+12)];
fieldData_RHS[1] = (fieldData_RHS[1]+(4-iterationOffsetBegin[1][0]));
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[1]) {
fieldData_RHS[2] = new double[((4-iterationOffsetBegin[1][0])+30)];
fieldData_RHS[2] = (fieldData_RHS[2]+(4-iterationOffsetBegin[1][0]));
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[1]) {
fieldData_RHS[3] = new double[((4-iterationOffsetBegin[1][0])+90)];
fieldData_RHS[3] = (fieldData_RHS[3]+(4-iterationOffsetBegin[1][0]));
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[1]) {
fieldData_RHS[4] = new double[((4-iterationOffsetBegin[1][0])+306)];
fieldData_RHS[4] = (fieldData_RHS[4]+(4-iterationOffsetBegin[1][0]));
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[1]) {
fieldData_RHS[5] = new double[((4-iterationOffsetBegin[1][0])+1122)];
fieldData_RHS[5] = (fieldData_RHS[5]+(4-iterationOffsetBegin[1][0]));
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[1]) {
fieldData_RHS[6] = new double[((4-iterationOffsetBegin[1][0])+4290)];
fieldData_RHS[6] = (fieldData_RHS[6]+(4-iterationOffsetBegin[1][0]));
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[1]) {
fieldData_RHS[7] = new double[((4-iterationOffsetBegin[1][0])+16770)];
fieldData_RHS[7] = (fieldData_RHS[7]+(4-iterationOffsetBegin[1][0]));
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[1]) {
fieldData_RHS[8] = new double[((4-iterationOffsetBegin[1][0])+66306)];
fieldData_RHS[8] = (fieldData_RHS[8]+(4-iterationOffsetBegin[1][0]));
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[1]) {
fieldData_VecP[0] = new double[((4-(iterationOffsetBegin[1][0]+2))+24)];
fieldData_VecP[0] = (fieldData_VecP[0]+(4-(iterationOffsetBegin[1][0]+2)));
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[1]) {
fieldData_VecGradP[0] = new double[((4-iterationOffsetBegin[1][0])+4)];
fieldData_VecGradP[0] = (fieldData_VecGradP[0]+(4-iterationOffsetBegin[1][0]));
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[0]) {
fieldData_Solution_GMRF[0] = new double[((4-(iterationOffsetBegin[0][0]+2))+24)];
fieldData_Solution_GMRF[0] = (fieldData_Solution_GMRF[0]+(4-(iterationOffsetBegin[0][0]+2)));
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[0]) {
fieldData_Solution_GMRF[1] = new double[((4-(iterationOffsetBegin[0][0]+2))+30)];
fieldData_Solution_GMRF[1] = (fieldData_Solution_GMRF[1]+(4-(iterationOffsetBegin[0][0]+2)));
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[0]) {
fieldData_Solution_GMRF[2] = new double[((4-(iterationOffsetBegin[0][0]+2))+56)];
fieldData_Solution_GMRF[2] = (fieldData_Solution_GMRF[2]+(4-(iterationOffsetBegin[0][0]+2)));
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[0]) {
fieldData_Solution_GMRF[3] = new double[((4-(iterationOffsetBegin[0][0]+2))+132)];
fieldData_Solution_GMRF[3] = (fieldData_Solution_GMRF[3]+(4-(iterationOffsetBegin[0][0]+2)));
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[0]) {
fieldData_Solution_GMRF[4] = new double[((4-(iterationOffsetBegin[0][0]+2))+380)];
fieldData_Solution_GMRF[4] = (fieldData_Solution_GMRF[4]+(4-(iterationOffsetBegin[0][0]+2)));
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[0]) {
fieldData_Solution_GMRF[5] = new double[((4-(iterationOffsetBegin[0][0]+2))+1260)];
fieldData_Solution_GMRF[5] = (fieldData_Solution_GMRF[5]+(4-(iterationOffsetBegin[0][0]+2)));
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[0]) {
fieldData_Solution_GMRF[6] = new double[((4-(iterationOffsetBegin[0][0]+2))+4556)];
fieldData_Solution_GMRF[6] = (fieldData_Solution_GMRF[6]+(4-(iterationOffsetBegin[0][0]+2)));
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[0]) {
fieldData_Solution_GMRF[7] = new double[((4-(iterationOffsetBegin[0][0]+2))+17292)];
fieldData_Solution_GMRF[7] = (fieldData_Solution_GMRF[7]+(4-(iterationOffsetBegin[0][0]+2)));
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[0]) {
fieldData_Solution_GMRF[8] = new double[((4-(iterationOffsetBegin[0][0]+2))+67340)];
fieldData_Solution_GMRF[8] = (fieldData_Solution_GMRF[8]+(4-(iterationOffsetBegin[0][0]+2)));
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[0]) {
fieldData_Residual_GMRF[0] = new double[((4-(iterationOffsetBegin[0][0]+2))+24)];
fieldData_Residual_GMRF[0] = (fieldData_Residual_GMRF[0]+(4-(iterationOffsetBegin[0][0]+2)));
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[0]) {
fieldData_Residual_GMRF[1] = new double[((4-(iterationOffsetBegin[0][0]+2))+30)];
fieldData_Residual_GMRF[1] = (fieldData_Residual_GMRF[1]+(4-(iterationOffsetBegin[0][0]+2)));
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[0]) {
fieldData_Residual_GMRF[2] = new double[((4-(iterationOffsetBegin[0][0]+2))+56)];
fieldData_Residual_GMRF[2] = (fieldData_Residual_GMRF[2]+(4-(iterationOffsetBegin[0][0]+2)));
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[0]) {
fieldData_Residual_GMRF[3] = new double[((4-(iterationOffsetBegin[0][0]+2))+132)];
fieldData_Residual_GMRF[3] = (fieldData_Residual_GMRF[3]+(4-(iterationOffsetBegin[0][0]+2)));
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[0]) {
fieldData_Residual_GMRF[4] = new double[((4-(iterationOffsetBegin[0][0]+2))+380)];
fieldData_Residual_GMRF[4] = (fieldData_Residual_GMRF[4]+(4-(iterationOffsetBegin[0][0]+2)));
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[0]) {
fieldData_Residual_GMRF[5] = new double[((4-(iterationOffsetBegin[0][0]+2))+1260)];
fieldData_Residual_GMRF[5] = (fieldData_Residual_GMRF[5]+(4-(iterationOffsetBegin[0][0]+2)));
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[0]) {
fieldData_Residual_GMRF[6] = new double[((4-(iterationOffsetBegin[0][0]+2))+4556)];
fieldData_Residual_GMRF[6] = (fieldData_Residual_GMRF[6]+(4-(iterationOffsetBegin[0][0]+2)));
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[0]) {
fieldData_Residual_GMRF[7] = new double[((4-(iterationOffsetBegin[0][0]+2))+17292)];
fieldData_Residual_GMRF[7] = (fieldData_Residual_GMRF[7]+(4-(iterationOffsetBegin[0][0]+2)));
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[0]) {
fieldData_Residual_GMRF[8] = new double[((4-(iterationOffsetBegin[0][0]+2))+67340)];
fieldData_Residual_GMRF[8] = (fieldData_Residual_GMRF[8]+(4-(iterationOffsetBegin[0][0]+2)));
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[0]) {
fieldData_RHS_GMRF[8] = new double[((4-iterationOffsetBegin[0][0])+66306)];
fieldData_RHS_GMRF[8] = (fieldData_RHS_GMRF[8]+(4-iterationOffsetBegin[0][0]));
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[0]) {
fieldData_RHS_GMRF[0] = new double[((4-iterationOffsetBegin[0][0])+4)];
fieldData_RHS_GMRF[0] = (fieldData_RHS_GMRF[0]+(4-iterationOffsetBegin[0][0]));
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[0]) {
fieldData_RHS_GMRF[1] = new double[((4-iterationOffsetBegin[0][0])+12)];
fieldData_RHS_GMRF[1] = (fieldData_RHS_GMRF[1]+(4-iterationOffsetBegin[0][0]));
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[0]) {
fieldData_RHS_GMRF[2] = new double[((4-iterationOffsetBegin[0][0])+30)];
fieldData_RHS_GMRF[2] = (fieldData_RHS_GMRF[2]+(4-iterationOffsetBegin[0][0]));
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[0]) {
fieldData_RHS_GMRF[3] = new double[((4-iterationOffsetBegin[0][0])+90)];
fieldData_RHS_GMRF[3] = (fieldData_RHS_GMRF[3]+(4-iterationOffsetBegin[0][0]));
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[0]) {
fieldData_RHS_GMRF[4] = new double[((4-iterationOffsetBegin[0][0])+306)];
fieldData_RHS_GMRF[4] = (fieldData_RHS_GMRF[4]+(4-iterationOffsetBegin[0][0]));
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[0]) {
fieldData_RHS_GMRF[5] = new double[((4-iterationOffsetBegin[0][0])+1122)];
fieldData_RHS_GMRF[5] = (fieldData_RHS_GMRF[5]+(4-iterationOffsetBegin[0][0]));
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[0]) {
fieldData_RHS_GMRF[6] = new double[((4-iterationOffsetBegin[0][0])+4290)];
fieldData_RHS_GMRF[6] = (fieldData_RHS_GMRF[6]+(4-iterationOffsetBegin[0][0]));
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[0]) {
fieldData_RHS_GMRF[7] = new double[((4-iterationOffsetBegin[0][0])+16770)];
fieldData_RHS_GMRF[7] = (fieldData_RHS_GMRF[7]+(4-iterationOffsetBegin[0][0]));
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[0]) {
fieldData_VecP_GMRF[0] = new double[((4-(iterationOffsetBegin[0][0]+2))+24)];
fieldData_VecP_GMRF[0] = (fieldData_VecP_GMRF[0]+(4-(iterationOffsetBegin[0][0]+2)));
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[0]) {
fieldData_VecGradP_GMRF[0] = new double[((4-iterationOffsetBegin[0][0])+4)];
fieldData_VecGradP_GMRF[0] = (fieldData_VecGradP_GMRF[0]+(4-iterationOffsetBegin[0][0]));
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[1]) {
fieldData_LaplaceCoeff[0] = new double[((4-(iterationOffsetBegin[1][0]+2))+1944)];
fieldData_LaplaceCoeff[0] = (fieldData_LaplaceCoeff[0]+(4-(iterationOffsetBegin[1][0]+2)));
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[1]) {
fieldData_LaplaceCoeff[1] = new double[((4-(iterationOffsetBegin[1][0]+2))+2430)];
fieldData_LaplaceCoeff[1] = (fieldData_LaplaceCoeff[1]+(4-(iterationOffsetBegin[1][0]+2)));
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[1]) {
fieldData_LaplaceCoeff[2] = new double[((4-(iterationOffsetBegin[1][0]+2))+4536)];
fieldData_LaplaceCoeff[2] = (fieldData_LaplaceCoeff[2]+(4-(iterationOffsetBegin[1][0]+2)));
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[1]) {
fieldData_LaplaceCoeff[3] = new double[((4-(iterationOffsetBegin[1][0]+2))+10692)];
fieldData_LaplaceCoeff[3] = (fieldData_LaplaceCoeff[3]+(4-(iterationOffsetBegin[1][0]+2)));
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[1]) {
fieldData_LaplaceCoeff[4] = new double[((4-(iterationOffsetBegin[1][0]+2))+30780)];
fieldData_LaplaceCoeff[4] = (fieldData_LaplaceCoeff[4]+(4-(iterationOffsetBegin[1][0]+2)));
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[1]) {
fieldData_LaplaceCoeff[5] = new double[((4-(iterationOffsetBegin[1][0]+2))+102060)];
fieldData_LaplaceCoeff[5] = (fieldData_LaplaceCoeff[5]+(4-(iterationOffsetBegin[1][0]+2)));
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[1]) {
fieldData_LaplaceCoeff[6] = new double[((4-(iterationOffsetBegin[1][0]+2))+369036)];
fieldData_LaplaceCoeff[6] = (fieldData_LaplaceCoeff[6]+(4-(iterationOffsetBegin[1][0]+2)));
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[1]) {
fieldData_LaplaceCoeff[7] = new double[((4-(iterationOffsetBegin[1][0]+2))+1400652)];
fieldData_LaplaceCoeff[7] = (fieldData_LaplaceCoeff[7]+(4-(iterationOffsetBegin[1][0]+2)));
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[1]) {
fieldData_LaplaceCoeff[8] = new double[((4-(iterationOffsetBegin[1][0]+2))+5454540)];
fieldData_LaplaceCoeff[8] = (fieldData_LaplaceCoeff[8]+(4-(iterationOffsetBegin[1][0]+2)));
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[0]) {
fieldData_LaplaceCoeff_GMRF[0] = new double[((4-(iterationOffsetBegin[0][0]+2))+1944)];
fieldData_LaplaceCoeff_GMRF[0] = (fieldData_LaplaceCoeff_GMRF[0]+(4-(iterationOffsetBegin[0][0]+2)));
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[0]) {
fieldData_LaplaceCoeff_GMRF[1] = new double[((4-(iterationOffsetBegin[0][0]+2))+2430)];
fieldData_LaplaceCoeff_GMRF[1] = (fieldData_LaplaceCoeff_GMRF[1]+(4-(iterationOffsetBegin[0][0]+2)));
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[0]) {
fieldData_LaplaceCoeff_GMRF[2] = new double[((4-(iterationOffsetBegin[0][0]+2))+4536)];
fieldData_LaplaceCoeff_GMRF[2] = (fieldData_LaplaceCoeff_GMRF[2]+(4-(iterationOffsetBegin[0][0]+2)));
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[0]) {
fieldData_LaplaceCoeff_GMRF[3] = new double[((4-(iterationOffsetBegin[0][0]+2))+10692)];
fieldData_LaplaceCoeff_GMRF[3] = (fieldData_LaplaceCoeff_GMRF[3]+(4-(iterationOffsetBegin[0][0]+2)));
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[0]) {
fieldData_LaplaceCoeff_GMRF[4] = new double[((4-(iterationOffsetBegin[0][0]+2))+30780)];
fieldData_LaplaceCoeff_GMRF[4] = (fieldData_LaplaceCoeff_GMRF[4]+(4-(iterationOffsetBegin[0][0]+2)));
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[0]) {
fieldData_LaplaceCoeff_GMRF[5] = new double[((4-(iterationOffsetBegin[0][0]+2))+102060)];
fieldData_LaplaceCoeff_GMRF[5] = (fieldData_LaplaceCoeff_GMRF[5]+(4-(iterationOffsetBegin[0][0]+2)));
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[0]) {
fieldData_LaplaceCoeff_GMRF[6] = new double[((4-(iterationOffsetBegin[0][0]+2))+369036)];
fieldData_LaplaceCoeff_GMRF[6] = (fieldData_LaplaceCoeff_GMRF[6]+(4-(iterationOffsetBegin[0][0]+2)));
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[0]) {
fieldData_LaplaceCoeff_GMRF[7] = new double[((4-(iterationOffsetBegin[0][0]+2))+1400652)];
fieldData_LaplaceCoeff_GMRF[7] = (fieldData_LaplaceCoeff_GMRF[7]+(4-(iterationOffsetBegin[0][0]+2)));
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[0]) {
fieldData_LaplaceCoeff_GMRF[8] = new double[((4-(iterationOffsetBegin[0][0]+2))+5454540)];
fieldData_LaplaceCoeff_GMRF[8] = (fieldData_LaplaceCoeff_GMRF[8]+(4-(iterationOffsetBegin[0][0]+2)));
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
buffer_Recv[0] = new double[2331];
buffer_Recv[1] = new double[2331];
buffer_Send[0] = new double[2331];
buffer_Send[1] = new double[2331];
}
}
