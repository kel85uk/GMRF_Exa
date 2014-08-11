#include "Primitives/CommunicationFunctions.h"
void exchsolutionData_7(unsigned int slot) {
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[1]) {
if ((!neighbor_isValid[1][0])) {
{
double xPos;
double yPos;
/* Statements in this Scop: S457, S456, S458 */
{
{
{
double* fieldData_Solution_7_p1 = (&fieldData_Solution[7][0]);
int i1 = 1;
for (; (i1<=128); i1 += 2) {
fieldData_Solution_7_p1[((i1*132)+2)] = 0.000000e+00;
fieldData_Solution_7_p1[((i1*132)+134)] = 0.000000e+00;
}
for (; (i1<=129); i1 += 1) {
fieldData_Solution_7_p1[((i1*132)+2)] = 0.000000e+00;
}
}
{
int i1 = 1;
for (; (i1<(2&(~1))); i1 += 1) {
xPos = posBegin[0];
}
__m128d vec1 = _mm_set1_pd(xPos);
for (; (i1<127); i1 += 4) {
/* xPos = posBegin[0]; */
__m128d vec0 = _mm_load1_pd((&posBegin[0]));
__m128d vec0_2 = _mm_load1_pd((&posBegin[0]));
vec1 = vec0;
vec1 = vec0_2;
}
for (; (i1<130); i1 += 1) {
xPos = posBegin[0];
}
}
}
{
int i1 = 1;
for (; (i1<(2&(~1))); i1 += 1) {
yPos = ((((i1-1)/1.280000e+02)*(posEnd[1]-posBegin[1]))+posBegin[1]);
}
__m128d vec1 = _mm_set1_pd(1.000000e+00);
__m128d vec2 = _mm_set1_pd(1.280000e+02);
__m128d vec5 = _mm_set1_pd(yPos);
for (; (i1<127); i1 += 4) {
/* yPos = ((((i1-1)/1.280000e+02)*(posEnd[1]-posBegin[1]))+posBegin[1]); */
__m128d vec0 = _mm_set_pd(i1+1,i1);
__m128d vec0_2 = _mm_set_pd(i1+1,i1);
__m128d vec3 = _mm_load1_pd((&posEnd[1]));
__m128d vec3_2 = _mm_load1_pd((&posEnd[1]));
__m128d vec4 = _mm_load1_pd((&posBegin[1]));
__m128d vec4_2 = _mm_load1_pd((&posBegin[1]));
vec5 = _mm_add_pd(_mm_mul_pd(_mm_div_pd(_mm_sub_pd(vec0, vec1), vec2), _mm_sub_pd(vec3, vec4)), vec4);
vec5 = _mm_add_pd(_mm_mul_pd(_mm_div_pd(_mm_sub_pd(vec0_2, vec1), vec2), _mm_sub_pd(vec3_2, vec4_2)), vec4_2);
}
for (; (i1<130); i1 += 1) {
yPos = ((((i1-1)/1.280000e+02)*(posEnd[1]-posBegin[1]))+posBegin[1]);
}
}
}
}
}
if ((!neighbor_isValid[1][1])) {
{
double xPos;
double yPos;
/* Statements in this Scop: S460, S459, S461 */
{
{
{
int i1 = 1;
for (; (i1<(2&(~1))); i1 += 1) {
yPos = ((((i1-1)/1.280000e+02)*(posEnd[1]-posBegin[1]))+posBegin[1]);
}
__m128d vec1 = _mm_set1_pd(1.000000e+00);
__m128d vec2 = _mm_set1_pd(1.280000e+02);
__m128d vec5 = _mm_set1_pd(yPos);
for (; (i1<127); i1 += 4) {
/* yPos = ((((i1-1)/1.280000e+02)*(posEnd[1]-posBegin[1]))+posBegin[1]); */
__m128d vec0 = _mm_set_pd(i1+1,i1);
__m128d vec0_2 = _mm_set_pd(i1+1,i1);
__m128d vec3 = _mm_load1_pd((&posEnd[1]));
__m128d vec3_2 = _mm_load1_pd((&posEnd[1]));
__m128d vec4 = _mm_load1_pd((&posBegin[1]));
__m128d vec4_2 = _mm_load1_pd((&posBegin[1]));
vec5 = _mm_add_pd(_mm_mul_pd(_mm_div_pd(_mm_sub_pd(vec0, vec1), vec2), _mm_sub_pd(vec3, vec4)), vec4);
vec5 = _mm_add_pd(_mm_mul_pd(_mm_div_pd(_mm_sub_pd(vec0_2, vec1), vec2), _mm_sub_pd(vec3_2, vec4_2)), vec4_2);
}
for (; (i1<130); i1 += 1) {
yPos = ((((i1-1)/1.280000e+02)*(posEnd[1]-posBegin[1]))+posBegin[1]);
}
}
{
double* fieldData_Solution_7_p1 = (&fieldData_Solution[7][0]);
int i1 = 1;
for (; (i1<=128); i1 += 2) {
fieldData_Solution_7_p1[((i1*132)+130)] = 0.000000e+00;
fieldData_Solution_7_p1[((i1*132)+262)] = 0.000000e+00;
}
for (; (i1<=129); i1 += 1) {
fieldData_Solution_7_p1[((i1*132)+130)] = 0.000000e+00;
}
}
}
{
int i1 = 1;
for (; (i1<(2&(~1))); i1 += 1) {
xPos = posEnd[0];
}
__m128d vec1 = _mm_set1_pd(xPos);
for (; (i1<127); i1 += 4) {
/* xPos = posEnd[0]; */
__m128d vec0 = _mm_load1_pd((&posEnd[0]));
__m128d vec0_2 = _mm_load1_pd((&posEnd[0]));
vec1 = vec0;
vec1 = vec0_2;
}
for (; (i1<130); i1 += 1) {
xPos = posEnd[0];
}
}
}
}
}
if ((!neighbor_isValid[1][2])) {
{
double xPos;
double yPos;
/* Statements in this Scop: S463, S462, S464 */
{
{
{
int i2 = 2;
for (; (i2<=129); i2 += 2) {
yPos = posBegin[1];
yPos = posBegin[1];
}
for (; (i2<=130); i2 += 1) {
yPos = posBegin[1];
}
}
{
int i2 = 2;
for (; (i2<=129); i2 += 2) {
xPos = ((((i2-2)/1.280000e+02)*(posEnd[0]-posBegin[0]))+posBegin[0]);
xPos = ((((i2-1)/1.280000e+02)*(posEnd[0]-posBegin[0]))+posBegin[0]);
}
for (; (i2<=130); i2 += 1) {
xPos = ((((i2-2)/1.280000e+02)*(posEnd[0]-posBegin[0]))+posBegin[0]);
}
}
}
{
double* fieldData_Solution_7_p1 = (&fieldData_Solution[7][0]);
int i2 = 2;
for (; (i2<=129); i2 += 2) {
fieldData_Solution_7_p1[(i2+132)] = 0.000000e+00;
fieldData_Solution_7_p1[(i2+133)] = 0.000000e+00;
}
for (; (i2<=130); i2 += 1) {
fieldData_Solution_7_p1[(i2+132)] = 0.000000e+00;
}
}
}
}
}
if ((!neighbor_isValid[1][3])) {
{
double xPos;
double yPos;
/* Statements in this Scop: S467, S466, S465 */
{
{
{
double* fieldData_Solution_7_p1 = (&fieldData_Solution[7][0]);
int i2 = 2;
for (; (i2<=129); i2 += 2) {
fieldData_Solution_7_p1[(i2+17028)] = 0.000000e+00;
fieldData_Solution_7_p1[(i2+17029)] = 0.000000e+00;
}
for (; (i2<=130); i2 += 1) {
fieldData_Solution_7_p1[(i2+17028)] = 0.000000e+00;
}
}
{
int i2 = 2;
for (; (i2<=129); i2 += 2) {
yPos = posEnd[1];
yPos = posEnd[1];
}
for (; (i2<=130); i2 += 1) {
yPos = posEnd[1];
}
}
}
{
int i2 = 2;
for (; (i2<=129); i2 += 2) {
xPos = ((((i2-2)/1.280000e+02)*(posEnd[0]-posBegin[0]))+posBegin[0]);
xPos = ((((i2-1)/1.280000e+02)*(posEnd[0]-posBegin[0]))+posBegin[0]);
}
for (; (i2<=130); i2 += 1) {
xPos = ((((i2-2)/1.280000e+02)*(posEnd[0]-posBegin[0]))+posBegin[0]);
}
}
}
}
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
if ((neighbor_isValid[1][1]&&neighbor_isRemote[1][1])) {
MPI_Isend(&fieldData_Solution[7][262], 1, mpiDatatype_129_1_132, neighbor_remoteRank[1][1], ((unsigned int)commId << 16) + ((unsigned int)(neighbor_fragCommId[1][1]) & 0x0000ffff), mpiCommunicator, &mpiRequest_Send[1]);
reqOutstanding_Send[1] = true;
}
}
}
;
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[1]) {
if ((neighbor_isValid[1][0]&&neighbor_isRemote[1][0])) {
MPI_Irecv(&fieldData_Solution[7][134], 1, mpiDatatype_129_1_132, neighbor_remoteRank[1][0], ((unsigned int)(neighbor_fragCommId[1][0]) << 16) + ((unsigned int)commId & 0x0000ffff), mpiCommunicator, &mpiRequest_Recv[0]);
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
MPI_Isend(&fieldData_Solution[7][17030], 1, mpiDatatype_1_129_132, neighbor_remoteRank[1][3], ((unsigned int)commId << 16) + ((unsigned int)(neighbor_fragCommId[1][3]) & 0x0000ffff), mpiCommunicator, &mpiRequest_Send[3]);
reqOutstanding_Send[3] = true;
}
}
}
;
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[1]) {
if ((neighbor_isValid[1][2]&&neighbor_isRemote[1][2])) {
MPI_Irecv(&fieldData_Solution[7][134], 1, mpiDatatype_1_129_132, neighbor_remoteRank[1][2], ((unsigned int)(neighbor_fragCommId[1][2]) << 16) + ((unsigned int)commId & 0x0000ffff), mpiCommunicator, &mpiRequest_Recv[2]);
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
MPI_Isend(&fieldData_Solution[7][3], 1, mpiDatatype_131_1_132, neighbor_remoteRank[1][0], ((unsigned int)commId << 16) + ((unsigned int)(neighbor_fragCommId[1][0]) & 0x0000ffff), mpiCommunicator, &mpiRequest_Send[0]);
reqOutstanding_Send[0] = true;
}
if ((neighbor_isValid[1][1]&&neighbor_isRemote[1][1])) {
MPI_Isend(&fieldData_Solution[7][129], 1, mpiDatatype_131_1_132, neighbor_remoteRank[1][1], ((unsigned int)commId << 16) + ((unsigned int)(neighbor_fragCommId[1][1]) & 0x0000ffff), mpiCommunicator, &mpiRequest_Send[1]);
reqOutstanding_Send[1] = true;
}
}
}
;
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[1]) {
if ((neighbor_isValid[1][0]&&neighbor_isRemote[1][0])) {
MPI_Irecv(&fieldData_Solution[7][1], 1, mpiDatatype_131_1_132, neighbor_remoteRank[1][0], ((unsigned int)(neighbor_fragCommId[1][0]) << 16) + ((unsigned int)commId & 0x0000ffff), mpiCommunicator, &mpiRequest_Recv[0]);
reqOutstanding_Recv[0] = true;
}
if ((neighbor_isValid[1][1]&&neighbor_isRemote[1][1])) {
MPI_Irecv(&fieldData_Solution[7][131], 1, mpiDatatype_131_1_132, neighbor_remoteRank[1][1], ((unsigned int)(neighbor_fragCommId[1][1]) << 16) + ((unsigned int)commId & 0x0000ffff), mpiCommunicator, &mpiRequest_Recv[1]);
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
MPI_Isend(&fieldData_Solution[7][265], 1, mpiDatatype_1_131_132, neighbor_remoteRank[1][2], ((unsigned int)commId << 16) + ((unsigned int)(neighbor_fragCommId[1][2]) & 0x0000ffff), mpiCommunicator, &mpiRequest_Send[2]);
reqOutstanding_Send[2] = true;
}
if ((neighbor_isValid[1][3]&&neighbor_isRemote[1][3])) {
MPI_Isend(&fieldData_Solution[7][16897], 1, mpiDatatype_1_131_132, neighbor_remoteRank[1][3], ((unsigned int)commId << 16) + ((unsigned int)(neighbor_fragCommId[1][3]) & 0x0000ffff), mpiCommunicator, &mpiRequest_Send[3]);
reqOutstanding_Send[3] = true;
}
}
}
;
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[1]) {
if ((neighbor_isValid[1][2]&&neighbor_isRemote[1][2])) {
MPI_Irecv(&fieldData_Solution[7][1], 1, mpiDatatype_1_131_132, neighbor_remoteRank[1][2], ((unsigned int)(neighbor_fragCommId[1][2]) << 16) + ((unsigned int)commId & 0x0000ffff), mpiCommunicator, &mpiRequest_Recv[2]);
reqOutstanding_Recv[2] = true;
}
if ((neighbor_isValid[1][3]&&neighbor_isRemote[1][3])) {
MPI_Irecv(&fieldData_Solution[7][17161], 1, mpiDatatype_1_131_132, neighbor_remoteRank[1][3], ((unsigned int)(neighbor_fragCommId[1][3]) << 16) + ((unsigned int)commId & 0x0000ffff), mpiCommunicator, &mpiRequest_Recv[3]);
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
