#include "Globals/Globals.h"

void destroyGlobals() {
for (int neighborIdx = 0; (neighborIdx<4); neighborIdx += 1) {
if (buffer_Recv[1]) {
delete [] buffer_Recv[1];
buffer_Recv[1] = 0;
}
}
for (int neighborIdx = 0; (neighborIdx<4); neighborIdx += 1) {
if (buffer_Send[1]) {
delete [] buffer_Send[1];
buffer_Send[1] = 0;
}
}
for (int levelIdx = 0; (levelIdx<9); levelIdx += 1) {
if (fieldData_LaplaceCoeff[levelIdx]) {
fieldData_LaplaceCoeff[levelIdx] = (fieldData_LaplaceCoeff[levelIdx]-(4-(iterationOffsetBegin[1][0]+2)));
delete [] fieldData_LaplaceCoeff[levelIdx];
fieldData_LaplaceCoeff[levelIdx] = 0;
}
}
for (int levelIdx = 0; (levelIdx<9); levelIdx += 1) {
if (fieldData_LaplaceCoeff_GMRF[levelIdx]) {
fieldData_LaplaceCoeff_GMRF[levelIdx] = (fieldData_LaplaceCoeff_GMRF[levelIdx]-(4-(iterationOffsetBegin[0][0]+2)));
delete [] fieldData_LaplaceCoeff_GMRF[levelIdx];
fieldData_LaplaceCoeff_GMRF[levelIdx] = 0;
}
}
for (int levelIdx = 0; (levelIdx<9); levelIdx += 1) {
if (fieldData_RHS[levelIdx]) {
fieldData_RHS[levelIdx] = (fieldData_RHS[levelIdx]-(4-iterationOffsetBegin[1][0]));
delete [] fieldData_RHS[levelIdx];
fieldData_RHS[levelIdx] = 0;
}
}
for (int levelIdx = 0; (levelIdx<9); levelIdx += 1) {
if (fieldData_RHS_GMRF[levelIdx]) {
fieldData_RHS_GMRF[levelIdx] = (fieldData_RHS_GMRF[levelIdx]-(4-iterationOffsetBegin[0][0]));
delete [] fieldData_RHS_GMRF[levelIdx];
fieldData_RHS_GMRF[levelIdx] = 0;
}
}
for (int levelIdx = 0; (levelIdx<9); levelIdx += 1) {
if (fieldData_Residual[levelIdx]) {
fieldData_Residual[levelIdx] = (fieldData_Residual[levelIdx]-(4-(iterationOffsetBegin[1][0]+2)));
delete [] fieldData_Residual[levelIdx];
fieldData_Residual[levelIdx] = 0;
}
}
for (int levelIdx = 0; (levelIdx<9); levelIdx += 1) {
if (fieldData_Residual_GMRF[levelIdx]) {
fieldData_Residual_GMRF[levelIdx] = (fieldData_Residual_GMRF[levelIdx]-(4-(iterationOffsetBegin[0][0]+2)));
delete [] fieldData_Residual_GMRF[levelIdx];
fieldData_Residual_GMRF[levelIdx] = 0;
}
}
for (int levelIdx = 0; (levelIdx<9); levelIdx += 1) {
if (fieldData_Solution[levelIdx]) {
fieldData_Solution[levelIdx] = (fieldData_Solution[levelIdx]-(4-(iterationOffsetBegin[1][0]+2)));
delete [] fieldData_Solution[levelIdx];
fieldData_Solution[levelIdx] = 0;
}
}
for (int levelIdx = 0; (levelIdx<9); levelIdx += 1) {
if (fieldData_SolutionMean[levelIdx]) {
fieldData_SolutionMean[levelIdx] = (fieldData_SolutionMean[levelIdx]-(4-iterationOffsetBegin[1][0]));
delete [] fieldData_SolutionMean[levelIdx];
fieldData_SolutionMean[levelIdx] = 0;
}
}
for (int levelIdx = 0; (levelIdx<9); levelIdx += 1) {
if (fieldData_Solution_GMRF[levelIdx]) {
fieldData_Solution_GMRF[levelIdx] = (fieldData_Solution_GMRF[levelIdx]-(4-(iterationOffsetBegin[0][0]+2)));
delete [] fieldData_Solution_GMRF[levelIdx];
fieldData_Solution_GMRF[levelIdx] = 0;
}
}
for (int levelIdx = 0; (levelIdx<9); levelIdx += 1) {
if (fieldData_VecGradP[levelIdx]) {
fieldData_VecGradP[levelIdx] = (fieldData_VecGradP[levelIdx]-(4-iterationOffsetBegin[1][0]));
delete [] fieldData_VecGradP[levelIdx];
fieldData_VecGradP[levelIdx] = 0;
}
}
for (int levelIdx = 0; (levelIdx<9); levelIdx += 1) {
if (fieldData_VecGradP_GMRF[levelIdx]) {
fieldData_VecGradP_GMRF[levelIdx] = (fieldData_VecGradP_GMRF[levelIdx]-(4-iterationOffsetBegin[0][0]));
delete [] fieldData_VecGradP_GMRF[levelIdx];
fieldData_VecGradP_GMRF[levelIdx] = 0;
}
}
for (int levelIdx = 0; (levelIdx<9); levelIdx += 1) {
if (fieldData_VecP[levelIdx]) {
fieldData_VecP[levelIdx] = (fieldData_VecP[levelIdx]-(4-(iterationOffsetBegin[1][0]+2)));
delete [] fieldData_VecP[levelIdx];
fieldData_VecP[levelIdx] = 0;
}
}
for (int levelIdx = 0; (levelIdx<9); levelIdx += 1) {
if (fieldData_VecP_GMRF[levelIdx]) {
fieldData_VecP_GMRF[levelIdx] = (fieldData_VecP_GMRF[levelIdx]-(4-(iterationOffsetBegin[0][0]+2)));
delete [] fieldData_VecP_GMRF[levelIdx];
fieldData_VecP_GMRF[levelIdx] = 0;
}
}
MPI_Type_free(&mpiDatatype_1_129_132);
MPI_Type_free(&mpiDatatype_9_67_4556);
MPI_Type_free(&mpiDatatype_1_257_260);
MPI_Type_free(&mpiDatatype_11_1_12);
MPI_Type_free(&mpiDatatype_1_131_132);
MPI_Type_free(&mpiDatatype_257_1_260);
MPI_Type_free(&mpiDatatype_1_3_6);
MPI_Type_free(&mpiDatatype_35_1_36);
MPI_Type_free(&mpiDatatype_9_5_30);
MPI_Type_free(&mpiDatatype_9_3_30);
MPI_Type_free(&mpiDatatype_2_1_6);
MPI_Type_free(&mpiDatatype_5_1_8);
MPI_Type_free(&mpiDatatype_9_1_12);
MPI_Type_free(&mpiDatatype_9_17_380);
MPI_Type_free(&mpiDatatype_9_129_17292);
MPI_Type_free(&mpiDatatype_1_7_8);
MPI_Type_free(&mpiDatatype_9_257_67340);
MPI_Type_free(&mpiDatatype_3_1_6);
MPI_Type_free(&mpiDatatype_1_11_12);
MPI_Type_free(&mpiDatatype_129_1_132);
MPI_Type_free(&mpiDatatype_9_33_1260);
MPI_Type_free(&mpiDatatype_1_259_260);
MPI_Type_free(&mpiDatatype_9_5_56);
MPI_Type_free(&mpiDatatype_9_11_132);
MPI_Type_free(&mpiDatatype_17_1_20);
MPI_Type_free(&mpiDatatype_9_7_56);
MPI_Type_free(&mpiDatatype_9_131_17292);
MPI_Type_free(&mpiDatatype_65_1_68);
MPI_Type_free(&mpiDatatype_1_2_6);
MPI_Type_free(&mpiDatatype_1_5_6);
MPI_Type_free(&mpiDatatype_259_1_260);
MPI_Type_free(&mpiDatatype_9_65_4556);
MPI_Type_free(&mpiDatatype_9_2_24);
MPI_Type_free(&mpiDatatype_1_19_20);
MPI_Type_free(&mpiDatatype_131_1_132);
MPI_Type_free(&mpiDatatype_9_4_24);
MPI_Type_free(&mpiDatatype_4_1_6);
MPI_Type_free(&mpiDatatype_9_19_380);
MPI_Type_free(&mpiDatatype_1_17_20);
MPI_Type_free(&mpiDatatype_9_9_132);
MPI_Type_free(&mpiDatatype_1_9_12);
MPI_Type_free(&mpiDatatype_9_259_67340);
MPI_Type_free(&mpiDatatype_33_1_36);
MPI_Type_free(&mpiDatatype_1_67_68);
MPI_Type_free(&mpiDatatype_9_35_1260);
MPI_Type_free(&mpiDatatype_1_65_68);
MPI_Type_free(&mpiDatatype_7_1_8);
MPI_Type_free(&mpiDatatype_19_1_20);
MPI_Type_free(&mpiDatatype_1_5_8);
MPI_Type_free(&mpiDatatype_1_35_36);
MPI_Type_free(&mpiDatatype_1_33_36);
MPI_Type_free(&mpiDatatype_67_1_68);
MPI_Type_free(&mpiDatatype_5_1_6);
MPI_Type_free(&mpiDatatype_1_4_6);
}
