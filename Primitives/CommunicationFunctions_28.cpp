#include "Primitives/CommunicationFunctions.h"
void exchresidualData_8(unsigned int slot) {
;
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[1]) {
;
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[1]) {
if ((neighbor_isValid[1][1]&&neighbor_isRemote[1][1])) {
MPI_Isend(&fieldData_Residual[8][518], 1, mpiDatatype_257_1_260, neighbor_remoteRank[1][1], ((unsigned int)commId << 16) + ((unsigned int)(neighbor_fragCommId[1][1]) & 0x0000ffff), mpiCommunicator, &mpiRequest_Send[1]);
reqOutstanding_Send[1] = true;
}
}
}
;
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[1]) {
if ((neighbor_isValid[1][0]&&neighbor_isRemote[1][0])) {
MPI_Irecv(&fieldData_Residual[8][262], 1, mpiDatatype_257_1_260, neighbor_remoteRank[1][0], ((unsigned int)(neighbor_fragCommId[1][0]) << 16) + ((unsigned int)commId & 0x0000ffff), mpiCommunicator, &mpiRequest_Recv[0]);
reqOutstanding_Recv[0] = true;
}
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[1]) {
if (reqOutstanding_Recv[0]) {
waitForMPIReq(&mpiRequest_Recv[0]);
reqOutstanding_Recv[0] = false;
}
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[1]) {
;
}
}
;
;
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[1]) {
if (reqOutstanding_Send[1]) {
waitForMPIReq(&mpiRequest_Send[1]);
reqOutstanding_Send[1] = false;
}
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[1]) {
;
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[1]) {
if ((neighbor_isValid[1][3]&&neighbor_isRemote[1][3])) {
MPI_Isend(&fieldData_Residual[8][66822], 1, mpiDatatype_1_257_260, neighbor_remoteRank[1][3], ((unsigned int)commId << 16) + ((unsigned int)(neighbor_fragCommId[1][3]) & 0x0000ffff), mpiCommunicator, &mpiRequest_Send[3]);
reqOutstanding_Send[3] = true;
}
}
}
;
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[1]) {
if ((neighbor_isValid[1][2]&&neighbor_isRemote[1][2])) {
MPI_Irecv(&fieldData_Residual[8][262], 1, mpiDatatype_1_257_260, neighbor_remoteRank[1][2], ((unsigned int)(neighbor_fragCommId[1][2]) << 16) + ((unsigned int)commId & 0x0000ffff), mpiCommunicator, &mpiRequest_Recv[2]);
reqOutstanding_Recv[2] = true;
}
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[1]) {
if (reqOutstanding_Recv[2]) {
waitForMPIReq(&mpiRequest_Recv[2]);
reqOutstanding_Recv[2] = false;
}
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[1]) {
;
}
}
;
;
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[1]) {
if (reqOutstanding_Send[3]) {
waitForMPIReq(&mpiRequest_Send[3]);
reqOutstanding_Send[3] = false;
}
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[1]) {
;
;
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[1]) {
if ((neighbor_isValid[1][0]&&neighbor_isRemote[1][0])) {
MPI_Isend(&fieldData_Residual[8][3], 1, mpiDatatype_259_1_260, neighbor_remoteRank[1][0], ((unsigned int)commId << 16) + ((unsigned int)(neighbor_fragCommId[1][0]) & 0x0000ffff), mpiCommunicator, &mpiRequest_Send[0]);
reqOutstanding_Send[0] = true;
}
if ((neighbor_isValid[1][1]&&neighbor_isRemote[1][1])) {
MPI_Isend(&fieldData_Residual[8][257], 1, mpiDatatype_259_1_260, neighbor_remoteRank[1][1], ((unsigned int)commId << 16) + ((unsigned int)(neighbor_fragCommId[1][1]) & 0x0000ffff), mpiCommunicator, &mpiRequest_Send[1]);
reqOutstanding_Send[1] = true;
}
}
}
;
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[1]) {
if ((neighbor_isValid[1][0]&&neighbor_isRemote[1][0])) {
MPI_Irecv(&fieldData_Residual[8][1], 1, mpiDatatype_259_1_260, neighbor_remoteRank[1][0], ((unsigned int)(neighbor_fragCommId[1][0]) << 16) + ((unsigned int)commId & 0x0000ffff), mpiCommunicator, &mpiRequest_Recv[0]);
reqOutstanding_Recv[0] = true;
}
if ((neighbor_isValid[1][1]&&neighbor_isRemote[1][1])) {
MPI_Irecv(&fieldData_Residual[8][259], 1, mpiDatatype_259_1_260, neighbor_remoteRank[1][1], ((unsigned int)(neighbor_fragCommId[1][1]) << 16) + ((unsigned int)commId & 0x0000ffff), mpiCommunicator, &mpiRequest_Recv[1]);
reqOutstanding_Recv[1] = true;
}
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[1]) {
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
if (isValidForSubdomain[1]) {
;
;
}
}
;
;
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[1]) {
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
if (isValidForSubdomain[1]) {
;
;
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[1]) {
if ((neighbor_isValid[1][2]&&neighbor_isRemote[1][2])) {
MPI_Isend(&fieldData_Residual[8][521], 1, mpiDatatype_1_259_260, neighbor_remoteRank[1][2], ((unsigned int)commId << 16) + ((unsigned int)(neighbor_fragCommId[1][2]) & 0x0000ffff), mpiCommunicator, &mpiRequest_Send[2]);
reqOutstanding_Send[2] = true;
}
if ((neighbor_isValid[1][3]&&neighbor_isRemote[1][3])) {
MPI_Isend(&fieldData_Residual[8][66561], 1, mpiDatatype_1_259_260, neighbor_remoteRank[1][3], ((unsigned int)commId << 16) + ((unsigned int)(neighbor_fragCommId[1][3]) & 0x0000ffff), mpiCommunicator, &mpiRequest_Send[3]);
reqOutstanding_Send[3] = true;
}
}
}
;
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[1]) {
if ((neighbor_isValid[1][2]&&neighbor_isRemote[1][2])) {
MPI_Irecv(&fieldData_Residual[8][1], 1, mpiDatatype_1_259_260, neighbor_remoteRank[1][2], ((unsigned int)(neighbor_fragCommId[1][2]) << 16) + ((unsigned int)commId & 0x0000ffff), mpiCommunicator, &mpiRequest_Recv[2]);
reqOutstanding_Recv[2] = true;
}
if ((neighbor_isValid[1][3]&&neighbor_isRemote[1][3])) {
MPI_Irecv(&fieldData_Residual[8][67081], 1, mpiDatatype_1_259_260, neighbor_remoteRank[1][3], ((unsigned int)(neighbor_fragCommId[1][3]) << 16) + ((unsigned int)commId & 0x0000ffff), mpiCommunicator, &mpiRequest_Recv[3]);
reqOutstanding_Recv[3] = true;
}
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[1]) {
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
if (isValidForSubdomain[1]) {
;
;
}
}
;
;
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[1]) {
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
