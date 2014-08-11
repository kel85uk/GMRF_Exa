#include "Primitives/CommunicationFunctions.h"
void exchsolution_gmrfData_4(unsigned int slot) {
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[0]) {
if ((!neighbor_isValid[0][0])) {
{
double xPos;
double yPos;
/* Statements in this Scop: S530, S529, S528 */
{
{
{
int i1 = 1;
for (; (i1<(2&(~1))); i1 += 1) {
xPos = posBegin[0];
}
__m128d vec1 = _mm_set1_pd(xPos);
for (; (i1<15); i1 += 4) {
/* xPos = posBegin[0]; */
__m128d vec0 = _mm_load1_pd((&posBegin[0]));
__m128d vec0_2 = _mm_load1_pd((&posBegin[0]));
vec1 = vec0;
vec1 = vec0_2;
}
for (; (i1<18); i1 += 1) {
xPos = posBegin[0];
}
}
{
int i1 = 1;
for (; (i1<(2&(~1))); i1 += 1) {
yPos = ((((i1-1)/1.600000e+01)*(posEnd[1]-posBegin[1]))+posBegin[1]);
}
__m128d vec1 = _mm_set1_pd(1.000000e+00);
__m128d vec2 = _mm_set1_pd(1.600000e+01);
__m128d vec5 = _mm_set1_pd(yPos);
for (; (i1<15); i1 += 4) {
/* yPos = ((((i1-1)/1.600000e+01)*(posEnd[1]-posBegin[1]))+posBegin[1]); */
__m128d vec0 = _mm_set_pd(i1+1,i1);
__m128d vec0_2 = _mm_set_pd(i1+1,i1);
__m128d vec3 = _mm_load1_pd((&posEnd[1]));
__m128d vec3_2 = _mm_load1_pd((&posEnd[1]));
__m128d vec4 = _mm_load1_pd((&posBegin[1]));
__m128d vec4_2 = _mm_load1_pd((&posBegin[1]));
vec5 = _mm_add_pd(_mm_mul_pd(_mm_div_pd(_mm_sub_pd(vec0, vec1), vec2), _mm_sub_pd(vec3, vec4)), vec4);
vec5 = _mm_add_pd(_mm_mul_pd(_mm_div_pd(_mm_sub_pd(vec0_2, vec1), vec2), _mm_sub_pd(vec3_2, vec4_2)), vec4_2);
}
for (; (i1<18); i1 += 1) {
yPos = ((((i1-1)/1.600000e+01)*(posEnd[1]-posBegin[1]))+posBegin[1]);
}
}
}
{
double* fieldData_Solution_GMRF_4_p1 = (&fieldData_Solution_GMRF[4][0]);
int i1 = 1;
for (; (i1<=16); i1 += 2) {
fieldData_Solution_GMRF_4_p1[((i1*20)+2)] = 0.000000e+00;
fieldData_Solution_GMRF_4_p1[((i1*20)+22)] = 0.000000e+00;
}
for (; (i1<=17); i1 += 1) {
fieldData_Solution_GMRF_4_p1[((i1*20)+2)] = 0.000000e+00;
}
}
}
}
}
if ((!neighbor_isValid[0][1])) {
{
double xPos;
double yPos;
/* Statements in this Scop: S533, S532, S531 */
{
{
{
double* fieldData_Solution_GMRF_4_p1 = (&fieldData_Solution_GMRF[4][0]);
int i1 = 1;
for (; (i1<=16); i1 += 2) {
fieldData_Solution_GMRF_4_p1[((i1*20)+18)] = 0.000000e+00;
fieldData_Solution_GMRF_4_p1[((i1*20)+38)] = 0.000000e+00;
}
for (; (i1<=17); i1 += 1) {
fieldData_Solution_GMRF_4_p1[((i1*20)+18)] = 0.000000e+00;
}
}
{
int i1 = 1;
for (; (i1<(2&(~1))); i1 += 1) {
xPos = posEnd[0];
}
__m128d vec1 = _mm_set1_pd(xPos);
for (; (i1<15); i1 += 4) {
/* xPos = posEnd[0]; */
__m128d vec0 = _mm_load1_pd((&posEnd[0]));
__m128d vec0_2 = _mm_load1_pd((&posEnd[0]));
vec1 = vec0;
vec1 = vec0_2;
}
for (; (i1<18); i1 += 1) {
xPos = posEnd[0];
}
}
}
{
int i1 = 1;
for (; (i1<(2&(~1))); i1 += 1) {
yPos = ((((i1-1)/1.600000e+01)*(posEnd[1]-posBegin[1]))+posBegin[1]);
}
__m128d vec1 = _mm_set1_pd(1.000000e+00);
__m128d vec2 = _mm_set1_pd(1.600000e+01);
__m128d vec5 = _mm_set1_pd(yPos);
for (; (i1<15); i1 += 4) {
/* yPos = ((((i1-1)/1.600000e+01)*(posEnd[1]-posBegin[1]))+posBegin[1]); */
__m128d vec0 = _mm_set_pd(i1+1,i1);
__m128d vec0_2 = _mm_set_pd(i1+1,i1);
__m128d vec3 = _mm_load1_pd((&posEnd[1]));
__m128d vec3_2 = _mm_load1_pd((&posEnd[1]));
__m128d vec4 = _mm_load1_pd((&posBegin[1]));
__m128d vec4_2 = _mm_load1_pd((&posBegin[1]));
vec5 = _mm_add_pd(_mm_mul_pd(_mm_div_pd(_mm_sub_pd(vec0, vec1), vec2), _mm_sub_pd(vec3, vec4)), vec4);
vec5 = _mm_add_pd(_mm_mul_pd(_mm_div_pd(_mm_sub_pd(vec0_2, vec1), vec2), _mm_sub_pd(vec3_2, vec4_2)), vec4_2);
}
for (; (i1<18); i1 += 1) {
yPos = ((((i1-1)/1.600000e+01)*(posEnd[1]-posBegin[1]))+posBegin[1]);
}
}
}
}
}
if ((!neighbor_isValid[0][2])) {
{
double xPos;
double yPos;
/* Statements in this Scop: S536, S535, S534 */
{
{
{
double* fieldData_Solution_GMRF_4_p1 = (&fieldData_Solution_GMRF[4][0]);
int i2 = 2;
for (; (i2<=17); i2 += 2) {
fieldData_Solution_GMRF_4_p1[(i2+20)] = 0.000000e+00;
fieldData_Solution_GMRF_4_p1[(i2+21)] = 0.000000e+00;
}
for (; (i2<=18); i2 += 1) {
fieldData_Solution_GMRF_4_p1[(i2+20)] = 0.000000e+00;
}
}
{
int i2 = 2;
for (; (i2<=17); i2 += 2) {
yPos = posBegin[1];
yPos = posBegin[1];
}
for (; (i2<=18); i2 += 1) {
yPos = posBegin[1];
}
}
}
{
int i2 = 2;
for (; (i2<=17); i2 += 2) {
xPos = ((((i2-2)/1.600000e+01)*(posEnd[0]-posBegin[0]))+posBegin[0]);
xPos = ((((i2-1)/1.600000e+01)*(posEnd[0]-posBegin[0]))+posBegin[0]);
}
for (; (i2<=18); i2 += 1) {
xPos = ((((i2-2)/1.600000e+01)*(posEnd[0]-posBegin[0]))+posBegin[0]);
}
}
}
}
}
if ((!neighbor_isValid[0][3])) {
{
double xPos;
double yPos;
/* Statements in this Scop: S539, S538, S537 */
{
{
{
int i2 = 2;
for (; (i2<=17); i2 += 2) {
xPos = ((((i2-2)/1.600000e+01)*(posEnd[0]-posBegin[0]))+posBegin[0]);
xPos = ((((i2-1)/1.600000e+01)*(posEnd[0]-posBegin[0]))+posBegin[0]);
}
for (; (i2<=18); i2 += 1) {
xPos = ((((i2-2)/1.600000e+01)*(posEnd[0]-posBegin[0]))+posBegin[0]);
}
}
{
double* fieldData_Solution_GMRF_4_p1 = (&fieldData_Solution_GMRF[4][0]);
int i2 = 2;
for (; (i2<=17); i2 += 2) {
fieldData_Solution_GMRF_4_p1[(i2+340)] = 0.000000e+00;
fieldData_Solution_GMRF_4_p1[(i2+341)] = 0.000000e+00;
}
for (; (i2<=18); i2 += 1) {
fieldData_Solution_GMRF_4_p1[(i2+340)] = 0.000000e+00;
}
}
}
{
int i2 = 2;
for (; (i2<=17); i2 += 2) {
yPos = posEnd[1];
yPos = posEnd[1];
}
for (; (i2<=18); i2 += 1) {
yPos = posEnd[1];
}
}
}
}
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
if ((neighbor_isValid[0][1]&&neighbor_isRemote[0][1])) {
MPI_Isend(&fieldData_Solution_GMRF[4][38], 1, mpiDatatype_17_1_20, neighbor_remoteRank[0][1], ((unsigned int)commId << 16) + ((unsigned int)(neighbor_fragCommId[0][1]) & 0x0000ffff), mpiCommunicator, &mpiRequest_Send[1]);
reqOutstanding_Send[1] = true;
}
}
}
;
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[0]) {
if ((neighbor_isValid[0][0]&&neighbor_isRemote[0][0])) {
MPI_Irecv(&fieldData_Solution_GMRF[4][22], 1, mpiDatatype_17_1_20, neighbor_remoteRank[0][0], ((unsigned int)(neighbor_fragCommId[0][0]) << 16) + ((unsigned int)commId & 0x0000ffff), mpiCommunicator, &mpiRequest_Recv[0]);
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
MPI_Isend(&fieldData_Solution_GMRF[4][342], 1, mpiDatatype_1_17_20, neighbor_remoteRank[0][3], ((unsigned int)commId << 16) + ((unsigned int)(neighbor_fragCommId[0][3]) & 0x0000ffff), mpiCommunicator, &mpiRequest_Send[3]);
reqOutstanding_Send[3] = true;
}
}
}
;
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[0]) {
if ((neighbor_isValid[0][2]&&neighbor_isRemote[0][2])) {
MPI_Irecv(&fieldData_Solution_GMRF[4][22], 1, mpiDatatype_1_17_20, neighbor_remoteRank[0][2], ((unsigned int)(neighbor_fragCommId[0][2]) << 16) + ((unsigned int)commId & 0x0000ffff), mpiCommunicator, &mpiRequest_Recv[2]);
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
MPI_Isend(&fieldData_Solution_GMRF[4][3], 1, mpiDatatype_19_1_20, neighbor_remoteRank[0][0], ((unsigned int)commId << 16) + ((unsigned int)(neighbor_fragCommId[0][0]) & 0x0000ffff), mpiCommunicator, &mpiRequest_Send[0]);
reqOutstanding_Send[0] = true;
}
if ((neighbor_isValid[0][1]&&neighbor_isRemote[0][1])) {
MPI_Isend(&fieldData_Solution_GMRF[4][17], 1, mpiDatatype_19_1_20, neighbor_remoteRank[0][1], ((unsigned int)commId << 16) + ((unsigned int)(neighbor_fragCommId[0][1]) & 0x0000ffff), mpiCommunicator, &mpiRequest_Send[1]);
reqOutstanding_Send[1] = true;
}
}
}
;
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[0]) {
if ((neighbor_isValid[0][0]&&neighbor_isRemote[0][0])) {
MPI_Irecv(&fieldData_Solution_GMRF[4][1], 1, mpiDatatype_19_1_20, neighbor_remoteRank[0][0], ((unsigned int)(neighbor_fragCommId[0][0]) << 16) + ((unsigned int)commId & 0x0000ffff), mpiCommunicator, &mpiRequest_Recv[0]);
reqOutstanding_Recv[0] = true;
}
if ((neighbor_isValid[0][1]&&neighbor_isRemote[0][1])) {
MPI_Irecv(&fieldData_Solution_GMRF[4][19], 1, mpiDatatype_19_1_20, neighbor_remoteRank[0][1], ((unsigned int)(neighbor_fragCommId[0][1]) << 16) + ((unsigned int)commId & 0x0000ffff), mpiCommunicator, &mpiRequest_Recv[1]);
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
MPI_Isend(&fieldData_Solution_GMRF[4][41], 1, mpiDatatype_1_19_20, neighbor_remoteRank[0][2], ((unsigned int)commId << 16) + ((unsigned int)(neighbor_fragCommId[0][2]) & 0x0000ffff), mpiCommunicator, &mpiRequest_Send[2]);
reqOutstanding_Send[2] = true;
}
if ((neighbor_isValid[0][3]&&neighbor_isRemote[0][3])) {
MPI_Isend(&fieldData_Solution_GMRF[4][321], 1, mpiDatatype_1_19_20, neighbor_remoteRank[0][3], ((unsigned int)commId << 16) + ((unsigned int)(neighbor_fragCommId[0][3]) & 0x0000ffff), mpiCommunicator, &mpiRequest_Send[3]);
reqOutstanding_Send[3] = true;
}
}
}
;
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[0]) {
if ((neighbor_isValid[0][2]&&neighbor_isRemote[0][2])) {
MPI_Irecv(&fieldData_Solution_GMRF[4][1], 1, mpiDatatype_1_19_20, neighbor_remoteRank[0][2], ((unsigned int)(neighbor_fragCommId[0][2]) << 16) + ((unsigned int)commId & 0x0000ffff), mpiCommunicator, &mpiRequest_Recv[2]);
reqOutstanding_Recv[2] = true;
}
if ((neighbor_isValid[0][3]&&neighbor_isRemote[0][3])) {
MPI_Irecv(&fieldData_Solution_GMRF[4][361], 1, mpiDatatype_1_19_20, neighbor_remoteRank[0][3], ((unsigned int)(neighbor_fragCommId[0][3]) << 16) + ((unsigned int)commId & 0x0000ffff), mpiCommunicator, &mpiRequest_Recv[3]);
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