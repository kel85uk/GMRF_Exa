#include "Globals/Globals.h"

void initGlobals() {
mpiCommunicator = MPI_COMM_WORLD;
MPI_Comm_rank(mpiCommunicator, &mpiRank);
MPI_Comm_size(mpiCommunicator, &mpiSize);
std::srand(mpiRank);
for (int neighborIdx = 0; (neighborIdx<4); neighborIdx += 1) {
buffer_Recv[neighborIdx] = 0;
}
for (int neighborIdx = 0; (neighborIdx<4); neighborIdx += 1) {
buffer_Send[neighborIdx] = 0;
}
commId = -1;
for (int levelIdx = 0; (levelIdx<9); levelIdx += 1) {
fieldData_LaplaceCoeff[levelIdx] = 0;
}
for (int levelIdx = 0; (levelIdx<9); levelIdx += 1) {
fieldData_LaplaceCoeff_GMRF[levelIdx] = 0;
}
for (int levelIdx = 0; (levelIdx<9); levelIdx += 1) {
fieldData_RHS[levelIdx] = 0;
}
for (int levelIdx = 0; (levelIdx<9); levelIdx += 1) {
fieldData_RHS_GMRF[levelIdx] = 0;
}
for (int levelIdx = 0; (levelIdx<9); levelIdx += 1) {
fieldData_Residual[levelIdx] = 0;
}
for (int levelIdx = 0; (levelIdx<9); levelIdx += 1) {
fieldData_Residual_GMRF[levelIdx] = 0;
}
for (int levelIdx = 0; (levelIdx<9); levelIdx += 1) {
fieldData_Solution[levelIdx] = 0;
}
for (int levelIdx = 0; (levelIdx<9); levelIdx += 1) {
fieldData_SolutionMean[levelIdx] = 0;
}
for (int levelIdx = 0; (levelIdx<9); levelIdx += 1) {
fieldData_Solution_GMRF[levelIdx] = 0;
}
for (int levelIdx = 0; (levelIdx<9); levelIdx += 1) {
fieldData_VecGradP[levelIdx] = 0;
}
for (int levelIdx = 0; (levelIdx<9); levelIdx += 1) {
fieldData_VecGradP_GMRF[levelIdx] = 0;
}
for (int levelIdx = 0; (levelIdx<9); levelIdx += 1) {
fieldData_VecP[levelIdx] = 0;
}
for (int levelIdx = 0; (levelIdx<9); levelIdx += 1) {
fieldData_VecP_GMRF[levelIdx] = 0;
}
for (int domainIdx = 0; (domainIdx<2); domainIdx += 1) {
isValidForSubdomain[domainIdx] = false;
}
for (int domainIdx = 0; (domainIdx<2); domainIdx += 1) {
iterationOffsetBegin[domainIdx] = Vec3i(1, 1, 1);
}
for (int domainIdx = 0; (domainIdx<2); domainIdx += 1) {
iterationOffsetEnd[domainIdx] = Vec3i(-1, -1, -1);
}
for (int domainIdx = 0; (domainIdx<2); domainIdx += 1) {
for (int neighborIdx = 0; (neighborIdx<4); neighborIdx += 1) {
neighbor_fragCommId[domainIdx][neighborIdx] = -1;
}
}
for (int domainIdx = 0; (domainIdx<2); domainIdx += 1) {
for (int neighborIdx = 0; (neighborIdx<4); neighborIdx += 1) {
neighbor_isRemote[domainIdx][neighborIdx] = false;
}
}
for (int domainIdx = 0; (domainIdx<2); domainIdx += 1) {
for (int neighborIdx = 0; (neighborIdx<4); neighborIdx += 1) {
neighbor_isValid[domainIdx][neighborIdx] = false;
}
}
for (int domainIdx = 0; (domainIdx<2); domainIdx += 1) {
for (int neighborIdx = 0; (neighborIdx<4); neighborIdx += 1) {
neighbor_remoteRank[domainIdx][neighborIdx] = MPI_PROC_NULL;
}
}
pos = Vec3(0, 0, 0);
posBegin = Vec3(0, 0, 0);
posEnd = Vec3(0, 0, 0);
primitiveId = -1;
for (int neighborIdx = 0; (neighborIdx<4); neighborIdx += 1) {
reqOutstanding_Recv[neighborIdx] = false;
}
for (int neighborIdx = 0; (neighborIdx<4); neighborIdx += 1) {
reqOutstanding_Send[neighborIdx] = false;
}
MPI_Type_vector(1, 129, 132, MPI_DOUBLE, &mpiDatatype_1_129_132);
MPI_Type_commit(&mpiDatatype_1_129_132);
MPI_Type_vector(9, 67, 4556, MPI_DOUBLE, &mpiDatatype_9_67_4556);
MPI_Type_commit(&mpiDatatype_9_67_4556);
MPI_Type_vector(1, 257, 260, MPI_DOUBLE, &mpiDatatype_1_257_260);
MPI_Type_commit(&mpiDatatype_1_257_260);
MPI_Type_vector(11, 1, 12, MPI_DOUBLE, &mpiDatatype_11_1_12);
MPI_Type_commit(&mpiDatatype_11_1_12);
MPI_Type_vector(1, 131, 132, MPI_DOUBLE, &mpiDatatype_1_131_132);
MPI_Type_commit(&mpiDatatype_1_131_132);
MPI_Type_vector(257, 1, 260, MPI_DOUBLE, &mpiDatatype_257_1_260);
MPI_Type_commit(&mpiDatatype_257_1_260);
MPI_Type_vector(1, 3, 6, MPI_DOUBLE, &mpiDatatype_1_3_6);
MPI_Type_commit(&mpiDatatype_1_3_6);
MPI_Type_vector(35, 1, 36, MPI_DOUBLE, &mpiDatatype_35_1_36);
MPI_Type_commit(&mpiDatatype_35_1_36);
MPI_Type_vector(9, 5, 30, MPI_DOUBLE, &mpiDatatype_9_5_30);
MPI_Type_commit(&mpiDatatype_9_5_30);
MPI_Type_vector(9, 3, 30, MPI_DOUBLE, &mpiDatatype_9_3_30);
MPI_Type_commit(&mpiDatatype_9_3_30);
MPI_Type_vector(2, 1, 6, MPI_DOUBLE, &mpiDatatype_2_1_6);
MPI_Type_commit(&mpiDatatype_2_1_6);
MPI_Type_vector(5, 1, 8, MPI_DOUBLE, &mpiDatatype_5_1_8);
MPI_Type_commit(&mpiDatatype_5_1_8);
MPI_Type_vector(9, 1, 12, MPI_DOUBLE, &mpiDatatype_9_1_12);
MPI_Type_commit(&mpiDatatype_9_1_12);
MPI_Type_vector(9, 17, 380, MPI_DOUBLE, &mpiDatatype_9_17_380);
MPI_Type_commit(&mpiDatatype_9_17_380);
MPI_Type_vector(9, 129, 17292, MPI_DOUBLE, &mpiDatatype_9_129_17292);
MPI_Type_commit(&mpiDatatype_9_129_17292);
MPI_Type_vector(1, 7, 8, MPI_DOUBLE, &mpiDatatype_1_7_8);
MPI_Type_commit(&mpiDatatype_1_7_8);
MPI_Type_vector(9, 257, 67340, MPI_DOUBLE, &mpiDatatype_9_257_67340);
MPI_Type_commit(&mpiDatatype_9_257_67340);
MPI_Type_vector(3, 1, 6, MPI_DOUBLE, &mpiDatatype_3_1_6);
MPI_Type_commit(&mpiDatatype_3_1_6);
MPI_Type_vector(1, 11, 12, MPI_DOUBLE, &mpiDatatype_1_11_12);
MPI_Type_commit(&mpiDatatype_1_11_12);
MPI_Type_vector(129, 1, 132, MPI_DOUBLE, &mpiDatatype_129_1_132);
MPI_Type_commit(&mpiDatatype_129_1_132);
MPI_Type_vector(9, 33, 1260, MPI_DOUBLE, &mpiDatatype_9_33_1260);
MPI_Type_commit(&mpiDatatype_9_33_1260);
MPI_Type_vector(1, 259, 260, MPI_DOUBLE, &mpiDatatype_1_259_260);
MPI_Type_commit(&mpiDatatype_1_259_260);
MPI_Type_vector(9, 5, 56, MPI_DOUBLE, &mpiDatatype_9_5_56);
MPI_Type_commit(&mpiDatatype_9_5_56);
MPI_Type_vector(9, 11, 132, MPI_DOUBLE, &mpiDatatype_9_11_132);
MPI_Type_commit(&mpiDatatype_9_11_132);
MPI_Type_vector(17, 1, 20, MPI_DOUBLE, &mpiDatatype_17_1_20);
MPI_Type_commit(&mpiDatatype_17_1_20);
MPI_Type_vector(9, 7, 56, MPI_DOUBLE, &mpiDatatype_9_7_56);
MPI_Type_commit(&mpiDatatype_9_7_56);
MPI_Type_vector(9, 131, 17292, MPI_DOUBLE, &mpiDatatype_9_131_17292);
MPI_Type_commit(&mpiDatatype_9_131_17292);
MPI_Type_vector(65, 1, 68, MPI_DOUBLE, &mpiDatatype_65_1_68);
MPI_Type_commit(&mpiDatatype_65_1_68);
MPI_Type_vector(1, 2, 6, MPI_DOUBLE, &mpiDatatype_1_2_6);
MPI_Type_commit(&mpiDatatype_1_2_6);
MPI_Type_vector(1, 5, 6, MPI_DOUBLE, &mpiDatatype_1_5_6);
MPI_Type_commit(&mpiDatatype_1_5_6);
MPI_Type_vector(259, 1, 260, MPI_DOUBLE, &mpiDatatype_259_1_260);
MPI_Type_commit(&mpiDatatype_259_1_260);
MPI_Type_vector(9, 65, 4556, MPI_DOUBLE, &mpiDatatype_9_65_4556);
MPI_Type_commit(&mpiDatatype_9_65_4556);
MPI_Type_vector(9, 2, 24, MPI_DOUBLE, &mpiDatatype_9_2_24);
MPI_Type_commit(&mpiDatatype_9_2_24);
MPI_Type_vector(1, 19, 20, MPI_DOUBLE, &mpiDatatype_1_19_20);
MPI_Type_commit(&mpiDatatype_1_19_20);
MPI_Type_vector(131, 1, 132, MPI_DOUBLE, &mpiDatatype_131_1_132);
MPI_Type_commit(&mpiDatatype_131_1_132);
MPI_Type_vector(9, 4, 24, MPI_DOUBLE, &mpiDatatype_9_4_24);
MPI_Type_commit(&mpiDatatype_9_4_24);
MPI_Type_vector(4, 1, 6, MPI_DOUBLE, &mpiDatatype_4_1_6);
MPI_Type_commit(&mpiDatatype_4_1_6);
MPI_Type_vector(9, 19, 380, MPI_DOUBLE, &mpiDatatype_9_19_380);
MPI_Type_commit(&mpiDatatype_9_19_380);
MPI_Type_vector(1, 17, 20, MPI_DOUBLE, &mpiDatatype_1_17_20);
MPI_Type_commit(&mpiDatatype_1_17_20);
MPI_Type_vector(9, 9, 132, MPI_DOUBLE, &mpiDatatype_9_9_132);
MPI_Type_commit(&mpiDatatype_9_9_132);
MPI_Type_vector(1, 9, 12, MPI_DOUBLE, &mpiDatatype_1_9_12);
MPI_Type_commit(&mpiDatatype_1_9_12);
MPI_Type_vector(9, 259, 67340, MPI_DOUBLE, &mpiDatatype_9_259_67340);
MPI_Type_commit(&mpiDatatype_9_259_67340);
MPI_Type_vector(33, 1, 36, MPI_DOUBLE, &mpiDatatype_33_1_36);
MPI_Type_commit(&mpiDatatype_33_1_36);
MPI_Type_vector(1, 67, 68, MPI_DOUBLE, &mpiDatatype_1_67_68);
MPI_Type_commit(&mpiDatatype_1_67_68);
MPI_Type_vector(9, 35, 1260, MPI_DOUBLE, &mpiDatatype_9_35_1260);
MPI_Type_commit(&mpiDatatype_9_35_1260);
MPI_Type_vector(1, 65, 68, MPI_DOUBLE, &mpiDatatype_1_65_68);
MPI_Type_commit(&mpiDatatype_1_65_68);
MPI_Type_vector(7, 1, 8, MPI_DOUBLE, &mpiDatatype_7_1_8);
MPI_Type_commit(&mpiDatatype_7_1_8);
MPI_Type_vector(19, 1, 20, MPI_DOUBLE, &mpiDatatype_19_1_20);
MPI_Type_commit(&mpiDatatype_19_1_20);
MPI_Type_vector(1, 5, 8, MPI_DOUBLE, &mpiDatatype_1_5_8);
MPI_Type_commit(&mpiDatatype_1_5_8);
MPI_Type_vector(1, 35, 36, MPI_DOUBLE, &mpiDatatype_1_35_36);
MPI_Type_commit(&mpiDatatype_1_35_36);
MPI_Type_vector(1, 33, 36, MPI_DOUBLE, &mpiDatatype_1_33_36);
MPI_Type_commit(&mpiDatatype_1_33_36);
MPI_Type_vector(67, 1, 68, MPI_DOUBLE, &mpiDatatype_67_1_68);
MPI_Type_commit(&mpiDatatype_67_1_68);
MPI_Type_vector(5, 1, 6, MPI_DOUBLE, &mpiDatatype_5_1_6);
MPI_Type_commit(&mpiDatatype_5_1_6);
MPI_Type_vector(1, 4, 6, MPI_DOUBLE, &mpiDatatype_1_4_6);
MPI_Type_commit(&mpiDatatype_1_4_6);
}
