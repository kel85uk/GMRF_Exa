#include "Primitives/CommunicationFunctions.h"
void exchresidual_gmrfData_5(unsigned int slot) {
;
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[0]) {
;
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[0]) {
if ((neighbor_isValid[0][1]&&neighbor_isRemote[0][1])) {
MPI_Isend(&fieldData_Residual_GMRF[5][70], 1, mpiDatatype_33_1_36, neighbor_remoteRank[0][1], ((unsigned int)commId << 16) + ((unsigned int)(neighbor_fragCommId[0][1]) & 0x0000ffff), mpiCommunicator, &mpiRequest_Send[1]);
reqOutstanding_Send[1] = true;
}
}
}
;
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[0]) {
if ((neighbor_isValid[0][0]&&neighbor_isRemote[0][0])) {
MPI_Irecv(&fieldData_Residual_GMRF[5][38], 1, mpiDatatype_33_1_36, neighbor_remoteRank[0][0], ((unsigned int)(neighbor_fragCommId[0][0]) << 16) + ((unsigned int)commId & 0x0000ffff), mpiCommunicator, &mpiRequest_Recv[0]);
reqOutstanding_Recv[0] = true;
}
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[0]) {
if (reqOutstanding_Recv[0]) {
waitForMPIReq(&mpiRequest_Recv[0]);
reqOutstanding_Recv[0] = false;
}
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[0]) {
;
}
}
;
;
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[0]) {
if (reqOutstanding_Send[1]) {
waitForMPIReq(&mpiRequest_Send[1]);
reqOutstanding_Send[1] = false;
}
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[0]) {
;
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[0]) {
if ((neighbor_isValid[0][3]&&neighbor_isRemote[0][3])) {
MPI_Isend(&fieldData_Residual_GMRF[5][1190], 1, mpiDatatype_1_33_36, neighbor_remoteRank[0][3], ((unsigned int)commId << 16) + ((unsigned int)(neighbor_fragCommId[0][3]) & 0x0000ffff), mpiCommunicator, &mpiRequest_Send[3]);
reqOutstanding_Send[3] = true;
}
}
}
;
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[0]) {
if ((neighbor_isValid[0][2]&&neighbor_isRemote[0][2])) {
MPI_Irecv(&fieldData_Residual_GMRF[5][38], 1, mpiDatatype_1_33_36, neighbor_remoteRank[0][2], ((unsigned int)(neighbor_fragCommId[0][2]) << 16) + ((unsigned int)commId & 0x0000ffff), mpiCommunicator, &mpiRequest_Recv[2]);
reqOutstanding_Recv[2] = true;
}
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[0]) {
if (reqOutstanding_Recv[2]) {
waitForMPIReq(&mpiRequest_Recv[2]);
reqOutstanding_Recv[2] = false;
}
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[0]) {
;
}
}
;
;
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[0]) {
if (reqOutstanding_Send[3]) {
waitForMPIReq(&mpiRequest_Send[3]);
reqOutstanding_Send[3] = false;
}
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[0]) {
;
;
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[0]) {
if ((neighbor_isValid[0][0]&&neighbor_isRemote[0][0])) {
MPI_Isend(&fieldData_Residual_GMRF[5][3], 1, mpiDatatype_35_1_36, neighbor_remoteRank[0][0], ((unsigned int)commId << 16) + ((unsigned int)(neighbor_fragCommId[0][0]) & 0x0000ffff), mpiCommunicator, &mpiRequest_Send[0]);
reqOutstanding_Send[0] = true;
}
if ((neighbor_isValid[0][1]&&neighbor_isRemote[0][1])) {
MPI_Isend(&fieldData_Residual_GMRF[5][33], 1, mpiDatatype_35_1_36, neighbor_remoteRank[0][1], ((unsigned int)commId << 16) + ((unsigned int)(neighbor_fragCommId[0][1]) & 0x0000ffff), mpiCommunicator, &mpiRequest_Send[1]);
reqOutstanding_Send[1] = true;
}
}
}
;
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[0]) {
if ((neighbor_isValid[0][0]&&neighbor_isRemote[0][0])) {
MPI_Irecv(&fieldData_Residual_GMRF[5][1], 1, mpiDatatype_35_1_36, neighbor_remoteRank[0][0], ((unsigned int)(neighbor_fragCommId[0][0]) << 16) + ((unsigned int)commId & 0x0000ffff), mpiCommunicator, &mpiRequest_Recv[0]);
reqOutstanding_Recv[0] = true;
}
if ((neighbor_isValid[0][1]&&neighbor_isRemote[0][1])) {
MPI_Irecv(&fieldData_Residual_GMRF[5][35], 1, mpiDatatype_35_1_36, neighbor_remoteRank[0][1], ((unsigned int)(neighbor_fragCommId[0][1]) << 16) + ((unsigned int)commId & 0x0000ffff), mpiCommunicator, &mpiRequest_Recv[1]);
reqOutstanding_Recv[1] = true;
}
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[0]) {
if (reqOutstanding_Recv[0]) {
waitForMPIReq(&mpiRequest_Recv[0]);
reqOutstanding_Recv[0] = false;
}
if (reqOutstanding_Recv[1]) {
waitForMPIReq(&mpiRequest_Recv[1]);
reqOutstanding_Recv[1] = false;
}
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[0]) {
;
;
}
}
;
;
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[0]) {
if (reqOutstanding_Send[0]) {
waitForMPIReq(&mpiRequest_Send[0]);
reqOutstanding_Send[0] = false;
}
if (reqOutstanding_Send[1]) {
waitForMPIReq(&mpiRequest_Send[1]);
reqOutstanding_Send[1] = false;
}
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[0]) {
;
;
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[0]) {
if ((neighbor_isValid[0][2]&&neighbor_isRemote[0][2])) {
MPI_Isend(&fieldData_Residual_GMRF[5][73], 1, mpiDatatype_1_35_36, neighbor_remoteRank[0][2], ((unsigned int)commId << 16) + ((unsigned int)(neighbor_fragCommId[0][2]) & 0x0000ffff), mpiCommunicator, &mpiRequest_Send[2]);
reqOutstanding_Send[2] = true;
}
if ((neighbor_isValid[0][3]&&neighbor_isRemote[0][3])) {
MPI_Isend(&fieldData_Residual_GMRF[5][1153], 1, mpiDatatype_1_35_36, neighbor_remoteRank[0][3], ((unsigned int)commId << 16) + ((unsigned int)(neighbor_fragCommId[0][3]) & 0x0000ffff), mpiCommunicator, &mpiRequest_Send[3]);
reqOutstanding_Send[3] = true;
}
}
}
;
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[0]) {
if ((neighbor_isValid[0][2]&&neighbor_isRemote[0][2])) {
MPI_Irecv(&fieldData_Residual_GMRF[5][1], 1, mpiDatatype_1_35_36, neighbor_remoteRank[0][2], ((unsigned int)(neighbor_fragCommId[0][2]) << 16) + ((unsigned int)commId & 0x0000ffff), mpiCommunicator, &mpiRequest_Recv[2]);
reqOutstanding_Recv[2] = true;
}
if ((neighbor_isValid[0][3]&&neighbor_isRemote[0][3])) {
MPI_Irecv(&fieldData_Residual_GMRF[5][1225], 1, mpiDatatype_1_35_36, neighbor_remoteRank[0][3], ((unsigned int)(neighbor_fragCommId[0][3]) << 16) + ((unsigned int)commId & 0x0000ffff), mpiCommunicator, &mpiRequest_Recv[3]);
reqOutstanding_Recv[3] = true;
}
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[0]) {
if (reqOutstanding_Recv[2]) {
waitForMPIReq(&mpiRequest_Recv[2]);
reqOutstanding_Recv[2] = false;
}
if (reqOutstanding_Recv[3]) {
waitForMPIReq(&mpiRequest_Recv[3]);
reqOutstanding_Recv[3] = false;
}
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[0]) {
;
;
}
}
;
;
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[0]) {
if (reqOutstanding_Send[2]) {
waitForMPIReq(&mpiRequest_Send[2]);
reqOutstanding_Send[2] = false;
}
if (reqOutstanding_Send[3]) {
waitForMPIReq(&mpiRequest_Send[3]);
reqOutstanding_Send[3] = false;
}
}
}
}
