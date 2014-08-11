#include "Primitives/CommunicationFunctions.h"
void exchlaplacecoeff_gmrfData_3(unsigned int slot) {
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[0]) {
if ((!neighbor_isValid[0][0])) {
{
double xPos;
double yPos;
/* Statements in this Scop: S1207, S1201, S1209, S1200, S1203, S1206, S1205, S1208, S1202, S1210, S1204 */
{
{
{
{
{
{
{
{
{
{
{
int i1 = 1;
for (; (i1<(2&(~1))); i1 += 1) {
yPos = ((((i1-1)/8.000000e+00)*(posEnd[1]-posBegin[1]))+posBegin[1]);
}
__m128d vec1 = _mm_set1_pd(1.000000e+00);
__m128d vec2 = _mm_set1_pd(8.000000e+00);
__m128d vec5 = _mm_set1_pd(yPos);
for (; (i1<7); i1 += 4) {
/* yPos = ((((i1-1)/8.000000e+00)*(posEnd[1]-posBegin[1]))+posBegin[1]); */
__m128d vec0 = _mm_set_pd(i1+1,i1);
__m128d vec0_2 = _mm_set_pd(i1+1,i1);
__m128d vec3 = _mm_load1_pd((&posEnd[1]));
__m128d vec3_2 = _mm_load1_pd((&posEnd[1]));
__m128d vec4 = _mm_load1_pd((&posBegin[1]));
__m128d vec4_2 = _mm_load1_pd((&posBegin[1]));
vec5 = _mm_add_pd(_mm_mul_pd(_mm_div_pd(_mm_sub_pd(vec0, vec1), vec2), _mm_sub_pd(vec3, vec4)), vec4);
vec5 = _mm_add_pd(_mm_mul_pd(_mm_div_pd(_mm_sub_pd(vec0_2, vec1), vec2), _mm_sub_pd(vec3_2, vec4_2)), vec4_2);
}
for (; (i1<10); i1 += 1) {
yPos = ((((i1-1)/8.000000e+00)*(posEnd[1]-posBegin[1]))+posBegin[1]);
}
}
{
double* fieldData_LaplaceCoeff_GMRF_3_p1 = (&fieldData_LaplaceCoeff_GMRF[3][0]);
int i1 = 1;
for (; (i1<=8); i1 += 2) {
fieldData_LaplaceCoeff_GMRF_3_p1[((i1*12)+926)] = 0.000000e+00;
fieldData_LaplaceCoeff_GMRF_3_p1[((i1*12)+938)] = 0.000000e+00;
}
for (; (i1<=9); i1 += 1) {
fieldData_LaplaceCoeff_GMRF_3_p1[((i1*12)+926)] = 0.000000e+00;
}
}
}
{
double* fieldData_LaplaceCoeff_GMRF_3_p1 = (&fieldData_LaplaceCoeff_GMRF[3][0]);
int i1 = 1;
for (; (i1<=8); i1 += 2) {
fieldData_LaplaceCoeff_GMRF_3_p1[((i1*12)+398)] = 0.000000e+00;
fieldData_LaplaceCoeff_GMRF_3_p1[((i1*12)+410)] = 0.000000e+00;
}
for (; (i1<=9); i1 += 1) {
fieldData_LaplaceCoeff_GMRF_3_p1[((i1*12)+398)] = 0.000000e+00;
}
}
}
{
double* fieldData_LaplaceCoeff_GMRF_3_p1 = (&fieldData_LaplaceCoeff_GMRF[3][0]);
int i1 = 1;
for (; (i1<=8); i1 += 2) {
fieldData_LaplaceCoeff_GMRF_3_p1[((i1*12)+530)] = 0.000000e+00;
fieldData_LaplaceCoeff_GMRF_3_p1[((i1*12)+542)] = 0.000000e+00;
}
for (; (i1<=9); i1 += 1) {
fieldData_LaplaceCoeff_GMRF_3_p1[((i1*12)+530)] = 0.000000e+00;
}
}
}
{
double* fieldData_LaplaceCoeff_GMRF_3_p1 = (&fieldData_LaplaceCoeff_GMRF[3][0]);
int i1 = 1;
for (; (i1<=8); i1 += 2) {
fieldData_LaplaceCoeff_GMRF_3_p1[((i1*12)+266)] = 0.000000e+00;
fieldData_LaplaceCoeff_GMRF_3_p1[((i1*12)+278)] = 0.000000e+00;
}
for (; (i1<=9); i1 += 1) {
fieldData_LaplaceCoeff_GMRF_3_p1[((i1*12)+266)] = 0.000000e+00;
}
}
}
{
double* fieldData_LaplaceCoeff_GMRF_3_p1 = (&fieldData_LaplaceCoeff_GMRF[3][0]);
int i1 = 1;
for (; (i1<=8); i1 += 2) {
fieldData_LaplaceCoeff_GMRF_3_p1[((i1*12)+2)] = 0.000000e+00;
fieldData_LaplaceCoeff_GMRF_3_p1[((i1*12)+14)] = 0.000000e+00;
}
for (; (i1<=9); i1 += 1) {
fieldData_LaplaceCoeff_GMRF_3_p1[((i1*12)+2)] = 0.000000e+00;
}
}
}
{
int i1 = 1;
for (; (i1<(2&(~1))); i1 += 1) {
xPos = posBegin[0];
}
__m128d vec1 = _mm_set1_pd(xPos);
for (; (i1<7); i1 += 4) {
/* xPos = posBegin[0]; */
__m128d vec0 = _mm_load1_pd((&posBegin[0]));
__m128d vec0_2 = _mm_load1_pd((&posBegin[0]));
vec1 = vec0;
vec1 = vec0_2;
}
for (; (i1<10); i1 += 1) {
xPos = posBegin[0];
}
}
}
{
double* fieldData_LaplaceCoeff_GMRF_3_p1 = (&fieldData_LaplaceCoeff_GMRF[3][0]);
int i1 = 1;
for (; (i1<=8); i1 += 2) {
fieldData_LaplaceCoeff_GMRF_3_p1[((i1*12)+134)] = 0.000000e+00;
fieldData_LaplaceCoeff_GMRF_3_p1[((i1*12)+146)] = 0.000000e+00;
}
for (; (i1<=9); i1 += 1) {
fieldData_LaplaceCoeff_GMRF_3_p1[((i1*12)+134)] = 0.000000e+00;
}
}
}
{
double* fieldData_LaplaceCoeff_GMRF_3_p1 = (&fieldData_LaplaceCoeff_GMRF[3][0]);
int i1 = 1;
for (; (i1<=8); i1 += 2) {
fieldData_LaplaceCoeff_GMRF_3_p1[((i1*12)+662)] = 0.000000e+00;
fieldData_LaplaceCoeff_GMRF_3_p1[((i1*12)+674)] = 0.000000e+00;
}
for (; (i1<=9); i1 += 1) {
fieldData_LaplaceCoeff_GMRF_3_p1[((i1*12)+662)] = 0.000000e+00;
}
}
}
{
double* fieldData_LaplaceCoeff_GMRF_3_p1 = (&fieldData_LaplaceCoeff_GMRF[3][0]);
int i1 = 1;
for (; (i1<=8); i1 += 2) {
fieldData_LaplaceCoeff_GMRF_3_p1[((i1*12)+794)] = 0.000000e+00;
fieldData_LaplaceCoeff_GMRF_3_p1[((i1*12)+806)] = 0.000000e+00;
}
for (; (i1<=9); i1 += 1) {
fieldData_LaplaceCoeff_GMRF_3_p1[((i1*12)+794)] = 0.000000e+00;
}
}
}
{
double* fieldData_LaplaceCoeff_GMRF_3_p1 = (&fieldData_LaplaceCoeff_GMRF[3][0]);
int i1 = 1;
for (; (i1<=8); i1 += 2) {
fieldData_LaplaceCoeff_GMRF_3_p1[((i1*12)+1058)] = 0.000000e+00;
fieldData_LaplaceCoeff_GMRF_3_p1[((i1*12)+1070)] = 0.000000e+00;
}
for (; (i1<=9); i1 += 1) {
fieldData_LaplaceCoeff_GMRF_3_p1[((i1*12)+1058)] = 0.000000e+00;
}
}
}
}
}
if ((!neighbor_isValid[0][1])) {
{
double xPos;
double yPos;
/* Statements in this Scop: S1213, S1221, S1215, S1218, S1212, S1211, S1220, S1214, S1217, S1216, S1219 */
{
{
{
{
{
{
{
{
{
{
{
int i1 = 1;
for (; (i1<(2&(~1))); i1 += 1) {
yPos = ((((i1-1)/8.000000e+00)*(posEnd[1]-posBegin[1]))+posBegin[1]);
}
__m128d vec1 = _mm_set1_pd(1.000000e+00);
__m128d vec2 = _mm_set1_pd(8.000000e+00);
__m128d vec5 = _mm_set1_pd(yPos);
for (; (i1<7); i1 += 4) {
/* yPos = ((((i1-1)/8.000000e+00)*(posEnd[1]-posBegin[1]))+posBegin[1]); */
__m128d vec0 = _mm_set_pd(i1+1,i1);
__m128d vec0_2 = _mm_set_pd(i1+1,i1);
__m128d vec3 = _mm_load1_pd((&posEnd[1]));
__m128d vec3_2 = _mm_load1_pd((&posEnd[1]));
__m128d vec4 = _mm_load1_pd((&posBegin[1]));
__m128d vec4_2 = _mm_load1_pd((&posBegin[1]));
vec5 = _mm_add_pd(_mm_mul_pd(_mm_div_pd(_mm_sub_pd(vec0, vec1), vec2), _mm_sub_pd(vec3, vec4)), vec4);
vec5 = _mm_add_pd(_mm_mul_pd(_mm_div_pd(_mm_sub_pd(vec0_2, vec1), vec2), _mm_sub_pd(vec3_2, vec4_2)), vec4_2);
}
for (; (i1<10); i1 += 1) {
yPos = ((((i1-1)/8.000000e+00)*(posEnd[1]-posBegin[1]))+posBegin[1]);
}
}
{
double* fieldData_LaplaceCoeff_GMRF_3_p1 = (&fieldData_LaplaceCoeff_GMRF[3][0]);
int i1 = 1;
for (; (i1<=8); i1 += 2) {
fieldData_LaplaceCoeff_GMRF_3_p1[((i1*12)+406)] = 0.000000e+00;
fieldData_LaplaceCoeff_GMRF_3_p1[((i1*12)+418)] = 0.000000e+00;
}
for (; (i1<=9); i1 += 1) {
fieldData_LaplaceCoeff_GMRF_3_p1[((i1*12)+406)] = 0.000000e+00;
}
}
}
{
double* fieldData_LaplaceCoeff_GMRF_3_p1 = (&fieldData_LaplaceCoeff_GMRF[3][0]);
int i1 = 1;
for (; (i1<=8); i1 += 2) {
fieldData_LaplaceCoeff_GMRF_3_p1[((i1*12)+10)] = 0.000000e+00;
fieldData_LaplaceCoeff_GMRF_3_p1[((i1*12)+22)] = 0.000000e+00;
}
for (; (i1<=9); i1 += 1) {
fieldData_LaplaceCoeff_GMRF_3_p1[((i1*12)+10)] = 0.000000e+00;
}
}
}
{
double* fieldData_LaplaceCoeff_GMRF_3_p1 = (&fieldData_LaplaceCoeff_GMRF[3][0]);
int i1 = 1;
for (; (i1<=8); i1 += 2) {
fieldData_LaplaceCoeff_GMRF_3_p1[((i1*12)+274)] = 0.000000e+00;
fieldData_LaplaceCoeff_GMRF_3_p1[((i1*12)+286)] = 0.000000e+00;
}
for (; (i1<=9); i1 += 1) {
fieldData_LaplaceCoeff_GMRF_3_p1[((i1*12)+274)] = 0.000000e+00;
}
}
}
{
double* fieldData_LaplaceCoeff_GMRF_3_p1 = (&fieldData_LaplaceCoeff_GMRF[3][0]);
int i1 = 1;
for (; (i1<=8); i1 += 2) {
fieldData_LaplaceCoeff_GMRF_3_p1[((i1*12)+670)] = 0.000000e+00;
fieldData_LaplaceCoeff_GMRF_3_p1[((i1*12)+682)] = 0.000000e+00;
}
for (; (i1<=9); i1 += 1) {
fieldData_LaplaceCoeff_GMRF_3_p1[((i1*12)+670)] = 0.000000e+00;
}
}
}
{
double* fieldData_LaplaceCoeff_GMRF_3_p1 = (&fieldData_LaplaceCoeff_GMRF[3][0]);
int i1 = 1;
for (; (i1<=8); i1 += 2) {
fieldData_LaplaceCoeff_GMRF_3_p1[((i1*12)+934)] = 0.000000e+00;
fieldData_LaplaceCoeff_GMRF_3_p1[((i1*12)+946)] = 0.000000e+00;
}
for (; (i1<=9); i1 += 1) {
fieldData_LaplaceCoeff_GMRF_3_p1[((i1*12)+934)] = 0.000000e+00;
}
}
}
{
double* fieldData_LaplaceCoeff_GMRF_3_p1 = (&fieldData_LaplaceCoeff_GMRF[3][0]);
int i1 = 1;
for (; (i1<=8); i1 += 2) {
fieldData_LaplaceCoeff_GMRF_3_p1[((i1*12)+538)] = 0.000000e+00;
fieldData_LaplaceCoeff_GMRF_3_p1[((i1*12)+550)] = 0.000000e+00;
}
for (; (i1<=9); i1 += 1) {
fieldData_LaplaceCoeff_GMRF_3_p1[((i1*12)+538)] = 0.000000e+00;
}
}
}
{
int i1 = 1;
for (; (i1<(2&(~1))); i1 += 1) {
xPos = posEnd[0];
}
__m128d vec1 = _mm_set1_pd(xPos);
for (; (i1<7); i1 += 4) {
/* xPos = posEnd[0]; */
__m128d vec0 = _mm_load1_pd((&posEnd[0]));
__m128d vec0_2 = _mm_load1_pd((&posEnd[0]));
vec1 = vec0;
vec1 = vec0_2;
}
for (; (i1<10); i1 += 1) {
xPos = posEnd[0];
}
}
}
{
double* fieldData_LaplaceCoeff_GMRF_3_p1 = (&fieldData_LaplaceCoeff_GMRF[3][0]);
int i1 = 1;
for (; (i1<=8); i1 += 2) {
fieldData_LaplaceCoeff_GMRF_3_p1[((i1*12)+142)] = 0.000000e+00;
fieldData_LaplaceCoeff_GMRF_3_p1[((i1*12)+154)] = 0.000000e+00;
}
for (; (i1<=9); i1 += 1) {
fieldData_LaplaceCoeff_GMRF_3_p1[((i1*12)+142)] = 0.000000e+00;
}
}
}
{
double* fieldData_LaplaceCoeff_GMRF_3_p1 = (&fieldData_LaplaceCoeff_GMRF[3][0]);
int i1 = 1;
for (; (i1<=8); i1 += 2) {
fieldData_LaplaceCoeff_GMRF_3_p1[((i1*12)+802)] = 0.000000e+00;
fieldData_LaplaceCoeff_GMRF_3_p1[((i1*12)+814)] = 0.000000e+00;
}
for (; (i1<=9); i1 += 1) {
fieldData_LaplaceCoeff_GMRF_3_p1[((i1*12)+802)] = 0.000000e+00;
}
}
}
{
double* fieldData_LaplaceCoeff_GMRF_3_p1 = (&fieldData_LaplaceCoeff_GMRF[3][0]);
int i1 = 1;
for (; (i1<=8); i1 += 2) {
fieldData_LaplaceCoeff_GMRF_3_p1[((i1*12)+1066)] = 0.000000e+00;
fieldData_LaplaceCoeff_GMRF_3_p1[((i1*12)+1078)] = 0.000000e+00;
}
for (; (i1<=9); i1 += 1) {
fieldData_LaplaceCoeff_GMRF_3_p1[((i1*12)+1066)] = 0.000000e+00;
}
}
}
}
}
if ((!neighbor_isValid[0][2])) {
{
double xPos;
double yPos;
/* Statements in this Scop: S1228, S1227, S1230, S1224, S1223, S1232, S1226, S1229, S1222, S1231, S1225 */
{
{
{
{
{
{
{
{
{
{
{
double* fieldData_LaplaceCoeff_GMRF_3_p1 = (&fieldData_LaplaceCoeff_GMRF[3][0]);
int i2 = 2;
for (; (i2<=9); i2 += 2) {
fieldData_LaplaceCoeff_GMRF_3_p1[(i2+1068)] = 0.000000e+00;
fieldData_LaplaceCoeff_GMRF_3_p1[(i2+1069)] = 0.000000e+00;
}
for (; (i2<=10); i2 += 1) {
fieldData_LaplaceCoeff_GMRF_3_p1[(i2+1068)] = 0.000000e+00;
}
}
{
double* fieldData_LaplaceCoeff_GMRF_3_p1 = (&fieldData_LaplaceCoeff_GMRF[3][0]);
int i2 = 2;
for (; (i2<=9); i2 += 2) {
fieldData_LaplaceCoeff_GMRF_3_p1[(i2+936)] = 0.000000e+00;
fieldData_LaplaceCoeff_GMRF_3_p1[(i2+937)] = 0.000000e+00;
}
for (; (i2<=10); i2 += 1) {
fieldData_LaplaceCoeff_GMRF_3_p1[(i2+936)] = 0.000000e+00;
}
}
}
{
double* fieldData_LaplaceCoeff_GMRF_3_p1 = (&fieldData_LaplaceCoeff_GMRF[3][0]);
int i2 = 2;
for (; (i2<=9); i2 += 2) {
fieldData_LaplaceCoeff_GMRF_3_p1[(i2+12)] = 0.000000e+00;
fieldData_LaplaceCoeff_GMRF_3_p1[(i2+13)] = 0.000000e+00;
}
for (; (i2<=10); i2 += 1) {
fieldData_LaplaceCoeff_GMRF_3_p1[(i2+12)] = 0.000000e+00;
}
}
}
{
double* fieldData_LaplaceCoeff_GMRF_3_p1 = (&fieldData_LaplaceCoeff_GMRF[3][0]);
int i2 = 2;
for (; (i2<=9); i2 += 2) {
fieldData_LaplaceCoeff_GMRF_3_p1[(i2+408)] = 0.000000e+00;
fieldData_LaplaceCoeff_GMRF_3_p1[(i2+409)] = 0.000000e+00;
}
for (; (i2<=10); i2 += 1) {
fieldData_LaplaceCoeff_GMRF_3_p1[(i2+408)] = 0.000000e+00;
}
}
}
{
int i2 = 2;
for (; (i2<=9); i2 += 2) {
xPos = ((((i2-2)/8.000000e+00)*(posEnd[0]-posBegin[0]))+posBegin[0]);
xPos = ((((i2-1)/8.000000e+00)*(posEnd[0]-posBegin[0]))+posBegin[0]);
}
for (; (i2<=10); i2 += 1) {
xPos = ((((i2-2)/8.000000e+00)*(posEnd[0]-posBegin[0]))+posBegin[0]);
}
}
}
{
double* fieldData_LaplaceCoeff_GMRF_3_p1 = (&fieldData_LaplaceCoeff_GMRF[3][0]);
int i2 = 2;
for (; (i2<=9); i2 += 2) {
fieldData_LaplaceCoeff_GMRF_3_p1[(i2+276)] = 0.000000e+00;
fieldData_LaplaceCoeff_GMRF_3_p1[(i2+277)] = 0.000000e+00;
}
for (; (i2<=10); i2 += 1) {
fieldData_LaplaceCoeff_GMRF_3_p1[(i2+276)] = 0.000000e+00;
}
}
}
{
double* fieldData_LaplaceCoeff_GMRF_3_p1 = (&fieldData_LaplaceCoeff_GMRF[3][0]);
int i2 = 2;
for (; (i2<=9); i2 += 2) {
fieldData_LaplaceCoeff_GMRF_3_p1[(i2+804)] = 0.000000e+00;
fieldData_LaplaceCoeff_GMRF_3_p1[(i2+805)] = 0.000000e+00;
}
for (; (i2<=10); i2 += 1) {
fieldData_LaplaceCoeff_GMRF_3_p1[(i2+804)] = 0.000000e+00;
}
}
}
{
double* fieldData_LaplaceCoeff_GMRF_3_p1 = (&fieldData_LaplaceCoeff_GMRF[3][0]);
int i2 = 2;
for (; (i2<=9); i2 += 2) {
fieldData_LaplaceCoeff_GMRF_3_p1[(i2+672)] = 0.000000e+00;
fieldData_LaplaceCoeff_GMRF_3_p1[(i2+673)] = 0.000000e+00;
}
for (; (i2<=10); i2 += 1) {
fieldData_LaplaceCoeff_GMRF_3_p1[(i2+672)] = 0.000000e+00;
}
}
}
{
int i2 = 2;
for (; (i2<=9); i2 += 2) {
yPos = posBegin[1];
yPos = posBegin[1];
}
for (; (i2<=10); i2 += 1) {
yPos = posBegin[1];
}
}
}
{
double* fieldData_LaplaceCoeff_GMRF_3_p1 = (&fieldData_LaplaceCoeff_GMRF[3][0]);
int i2 = 2;
for (; (i2<=9); i2 += 2) {
fieldData_LaplaceCoeff_GMRF_3_p1[(i2+144)] = 0.000000e+00;
fieldData_LaplaceCoeff_GMRF_3_p1[(i2+145)] = 0.000000e+00;
}
for (; (i2<=10); i2 += 1) {
fieldData_LaplaceCoeff_GMRF_3_p1[(i2+144)] = 0.000000e+00;
}
}
}
{
double* fieldData_LaplaceCoeff_GMRF_3_p1 = (&fieldData_LaplaceCoeff_GMRF[3][0]);
int i2 = 2;
for (; (i2<=9); i2 += 2) {
fieldData_LaplaceCoeff_GMRF_3_p1[(i2+540)] = 0.000000e+00;
fieldData_LaplaceCoeff_GMRF_3_p1[(i2+541)] = 0.000000e+00;
}
for (; (i2<=10); i2 += 1) {
fieldData_LaplaceCoeff_GMRF_3_p1[(i2+540)] = 0.000000e+00;
}
}
}
}
}
if ((!neighbor_isValid[0][3])) {
{
double xPos;
double yPos;
/* Statements in this Scop: S1233, S1242, S1236, S1239, S1241, S1238, S1235, S1240, S1234, S1243, S1237 */
{
{
{
{
{
{
{
{
{
{
{
double* fieldData_LaplaceCoeff_GMRF_3_p1 = (&fieldData_LaplaceCoeff_GMRF[3][0]);
int i2 = 2;
for (; (i2<=9); i2 += 2) {
fieldData_LaplaceCoeff_GMRF_3_p1[(i2+1032)] = 0.000000e+00;
fieldData_LaplaceCoeff_GMRF_3_p1[(i2+1033)] = 0.000000e+00;
}
for (; (i2<=10); i2 += 1) {
fieldData_LaplaceCoeff_GMRF_3_p1[(i2+1032)] = 0.000000e+00;
}
}
{
double* fieldData_LaplaceCoeff_GMRF_3_p1 = (&fieldData_LaplaceCoeff_GMRF[3][0]);
int i2 = 2;
for (; (i2<=9); i2 += 2) {
fieldData_LaplaceCoeff_GMRF_3_p1[(i2+504)] = 0.000000e+00;
fieldData_LaplaceCoeff_GMRF_3_p1[(i2+505)] = 0.000000e+00;
}
for (; (i2<=10); i2 += 1) {
fieldData_LaplaceCoeff_GMRF_3_p1[(i2+504)] = 0.000000e+00;
}
}
}
{
int i2 = 2;
for (; (i2<=9); i2 += 2) {
yPos = posEnd[1];
yPos = posEnd[1];
}
for (; (i2<=10); i2 += 1) {
yPos = posEnd[1];
}
}
}
{
double* fieldData_LaplaceCoeff_GMRF_3_p1 = (&fieldData_LaplaceCoeff_GMRF[3][0]);
int i2 = 2;
for (; (i2<=9); i2 += 2) {
fieldData_LaplaceCoeff_GMRF_3_p1[(i2+636)] = 0.000000e+00;
fieldData_LaplaceCoeff_GMRF_3_p1[(i2+637)] = 0.000000e+00;
}
for (; (i2<=10); i2 += 1) {
fieldData_LaplaceCoeff_GMRF_3_p1[(i2+636)] = 0.000000e+00;
}
}
}
{
double* fieldData_LaplaceCoeff_GMRF_3_p1 = (&fieldData_LaplaceCoeff_GMRF[3][0]);
int i2 = 2;
for (; (i2<=9); i2 += 2) {
fieldData_LaplaceCoeff_GMRF_3_p1[(i2+240)] = 0.000000e+00;
fieldData_LaplaceCoeff_GMRF_3_p1[(i2+241)] = 0.000000e+00;
}
for (; (i2<=10); i2 += 1) {
fieldData_LaplaceCoeff_GMRF_3_p1[(i2+240)] = 0.000000e+00;
}
}
}
{
double* fieldData_LaplaceCoeff_GMRF_3_p1 = (&fieldData_LaplaceCoeff_GMRF[3][0]);
int i2 = 2;
for (; (i2<=9); i2 += 2) {
fieldData_LaplaceCoeff_GMRF_3_p1[(i2+1164)] = 0.000000e+00;
fieldData_LaplaceCoeff_GMRF_3_p1[(i2+1165)] = 0.000000e+00;
}
for (; (i2<=10); i2 += 1) {
fieldData_LaplaceCoeff_GMRF_3_p1[(i2+1164)] = 0.000000e+00;
}
}
}
{
double* fieldData_LaplaceCoeff_GMRF_3_p1 = (&fieldData_LaplaceCoeff_GMRF[3][0]);
int i2 = 2;
for (; (i2<=9); i2 += 2) {
fieldData_LaplaceCoeff_GMRF_3_p1[(i2+108)] = 0.000000e+00;
fieldData_LaplaceCoeff_GMRF_3_p1[(i2+109)] = 0.000000e+00;
}
for (; (i2<=10); i2 += 1) {
fieldData_LaplaceCoeff_GMRF_3_p1[(i2+108)] = 0.000000e+00;
}
}
}
{
double* fieldData_LaplaceCoeff_GMRF_3_p1 = (&fieldData_LaplaceCoeff_GMRF[3][0]);
int i2 = 2;
for (; (i2<=9); i2 += 2) {
fieldData_LaplaceCoeff_GMRF_3_p1[(i2+900)] = 0.000000e+00;
fieldData_LaplaceCoeff_GMRF_3_p1[(i2+901)] = 0.000000e+00;
}
for (; (i2<=10); i2 += 1) {
fieldData_LaplaceCoeff_GMRF_3_p1[(i2+900)] = 0.000000e+00;
}
}
}
{
double* fieldData_LaplaceCoeff_GMRF_3_p1 = (&fieldData_LaplaceCoeff_GMRF[3][0]);
int i2 = 2;
for (; (i2<=9); i2 += 2) {
fieldData_LaplaceCoeff_GMRF_3_p1[(i2+768)] = 0.000000e+00;
fieldData_LaplaceCoeff_GMRF_3_p1[(i2+769)] = 0.000000e+00;
}
for (; (i2<=10); i2 += 1) {
fieldData_LaplaceCoeff_GMRF_3_p1[(i2+768)] = 0.000000e+00;
}
}
}
{
int i2 = 2;
for (; (i2<=9); i2 += 2) {
xPos = ((((i2-2)/8.000000e+00)*(posEnd[0]-posBegin[0]))+posBegin[0]);
xPos = ((((i2-1)/8.000000e+00)*(posEnd[0]-posBegin[0]))+posBegin[0]);
}
for (; (i2<=10); i2 += 1) {
xPos = ((((i2-2)/8.000000e+00)*(posEnd[0]-posBegin[0]))+posBegin[0]);
}
}
}
{
double* fieldData_LaplaceCoeff_GMRF_3_p1 = (&fieldData_LaplaceCoeff_GMRF[3][0]);
int i2 = 2;
for (; (i2<=9); i2 += 2) {
fieldData_LaplaceCoeff_GMRF_3_p1[(i2+372)] = 0.000000e+00;
fieldData_LaplaceCoeff_GMRF_3_p1[(i2+373)] = 0.000000e+00;
}
for (; (i2<=10); i2 += 1) {
fieldData_LaplaceCoeff_GMRF_3_p1[(i2+372)] = 0.000000e+00;
}
}
}
}
}
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[0]) {
if ((neighbor_isValid[0][1]&&neighbor_isRemote[0][1])) {
/* Statements in this Scop: S1244 */
for (int i0 = 0; (i0<=8); i0 += 1) {
double* fieldData_LaplaceCoeff_GMRF_3_p1 = (&fieldData_LaplaceCoeff_GMRF[3][(i0*132)]);
double* buffer_Send_1_p1 = (&buffer_Send[1][(i0*9)]);
int i1 = 1;
for (; (i1<=8); i1 += 2) {
buffer_Send_1_p1[(i1-1)] = fieldData_LaplaceCoeff_GMRF_3_p1[((i1*12)+10)];
buffer_Send_1_p1[i1] = fieldData_LaplaceCoeff_GMRF_3_p1[((i1*12)+22)];
}
for (; (i1<=9); i1 += 1) {
buffer_Send_1_p1[(i1-1)] = fieldData_LaplaceCoeff_GMRF_3_p1[((i1*12)+10)];
}
}
}
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[0]) {
if ((neighbor_isValid[0][1]&&neighbor_isRemote[0][1])) {
MPI_Isend(buffer_Send[1], 81, MPI_DOUBLE, neighbor_remoteRank[0][1], ((unsigned int)commId << 16) + ((unsigned int)(neighbor_fragCommId[0][1]) & 0x0000ffff), mpiCommunicator, &mpiRequest_Send[1]);
reqOutstanding_Send[1] = true;
}
}
}
;
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[0]) {
if ((neighbor_isValid[0][0]&&neighbor_isRemote[0][0])) {
MPI_Irecv(buffer_Recv[0], 81, MPI_DOUBLE, neighbor_remoteRank[0][0], ((unsigned int)(neighbor_fragCommId[0][0]) << 16) + ((unsigned int)commId & 0x0000ffff), mpiCommunicator, &mpiRequest_Recv[0]);
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
if ((neighbor_isValid[0][0]&&neighbor_isRemote[0][0])) {
/* Statements in this Scop: S1245 */
for (int i0 = 0; (i0<=8); i0 += 1) {
double* buffer_Recv_0_p1 = (&buffer_Recv[0][(i0*9)]);
double* fieldData_LaplaceCoeff_GMRF_3_p1 = (&fieldData_LaplaceCoeff_GMRF[3][(i0*132)]);
int i1 = 3;
for (; (i1<=10); i1 += 2) {
fieldData_LaplaceCoeff_GMRF_3_p1[((i1*12)-22)] = buffer_Recv_0_p1[(i1-3)];
fieldData_LaplaceCoeff_GMRF_3_p1[((i1*12)-10)] = buffer_Recv_0_p1[(i1-2)];
}
for (; (i1<=11); i1 += 1) {
fieldData_LaplaceCoeff_GMRF_3_p1[((i1*12)-22)] = buffer_Recv_0_p1[(i1-3)];
}
}
}
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
MPI_Isend(&fieldData_LaplaceCoeff_GMRF[3][110], 1, mpiDatatype_9_9_132, neighbor_remoteRank[0][3], ((unsigned int)commId << 16) + ((unsigned int)(neighbor_fragCommId[0][3]) & 0x0000ffff), mpiCommunicator, &mpiRequest_Send[3]);
reqOutstanding_Send[3] = true;
}
}
}
;
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[0]) {
if ((neighbor_isValid[0][2]&&neighbor_isRemote[0][2])) {
MPI_Irecv(&fieldData_LaplaceCoeff_GMRF[3][14], 1, mpiDatatype_9_9_132, neighbor_remoteRank[0][2], ((unsigned int)(neighbor_fragCommId[0][2]) << 16) + ((unsigned int)commId & 0x0000ffff), mpiCommunicator, &mpiRequest_Recv[2]);
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
if ((neighbor_isValid[0][0]&&neighbor_isRemote[0][0])) {
/* Statements in this Scop: S1246 */
for (int i0 = 0; (i0<=8); i0 += 1) {
double* fieldData_LaplaceCoeff_GMRF_3_p1 = (&fieldData_LaplaceCoeff_GMRF[3][(i0*132)]);
double* buffer_Send_0_p1 = (&buffer_Send[0][(i0*11)]);
int i1 = 0;
for (; (i1<=9); i1 += 2) {
buffer_Send_0_p1[i1] = fieldData_LaplaceCoeff_GMRF_3_p1[((i1*12)+3)];
buffer_Send_0_p1[(i1+1)] = fieldData_LaplaceCoeff_GMRF_3_p1[((i1*12)+15)];
}
for (; (i1<=10); i1 += 1) {
buffer_Send_0_p1[i1] = fieldData_LaplaceCoeff_GMRF_3_p1[((i1*12)+3)];
}
}
}
if ((neighbor_isValid[0][1]&&neighbor_isRemote[0][1])) {
/* Statements in this Scop: S1247 */
for (int i0 = 0; (i0<=8); i0 += 1) {
double* fieldData_LaplaceCoeff_GMRF_3_p1 = (&fieldData_LaplaceCoeff_GMRF[3][(i0*132)]);
double* buffer_Send_1_p1 = (&buffer_Send[1][(i0*11)]);
int i1 = 0;
for (; (i1<=9); i1 += 2) {
buffer_Send_1_p1[i1] = fieldData_LaplaceCoeff_GMRF_3_p1[((i1*12)+9)];
buffer_Send_1_p1[(i1+1)] = fieldData_LaplaceCoeff_GMRF_3_p1[((i1*12)+21)];
}
for (; (i1<=10); i1 += 1) {
buffer_Send_1_p1[i1] = fieldData_LaplaceCoeff_GMRF_3_p1[((i1*12)+9)];
}
}
}
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[0]) {
if ((neighbor_isValid[0][0]&&neighbor_isRemote[0][0])) {
MPI_Isend(buffer_Send[0], 99, MPI_DOUBLE, neighbor_remoteRank[0][0], ((unsigned int)commId << 16) + ((unsigned int)(neighbor_fragCommId[0][0]) & 0x0000ffff), mpiCommunicator, &mpiRequest_Send[0]);
reqOutstanding_Send[0] = true;
}
if ((neighbor_isValid[0][1]&&neighbor_isRemote[0][1])) {
MPI_Isend(buffer_Send[1], 99, MPI_DOUBLE, neighbor_remoteRank[0][1], ((unsigned int)commId << 16) + ((unsigned int)(neighbor_fragCommId[0][1]) & 0x0000ffff), mpiCommunicator, &mpiRequest_Send[1]);
reqOutstanding_Send[1] = true;
}
}
}
;
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[0]) {
if ((neighbor_isValid[0][0]&&neighbor_isRemote[0][0])) {
MPI_Irecv(buffer_Recv[0], 99, MPI_DOUBLE, neighbor_remoteRank[0][0], ((unsigned int)(neighbor_fragCommId[0][0]) << 16) + ((unsigned int)commId & 0x0000ffff), mpiCommunicator, &mpiRequest_Recv[0]);
reqOutstanding_Recv[0] = true;
}
if ((neighbor_isValid[0][1]&&neighbor_isRemote[0][1])) {
MPI_Irecv(buffer_Recv[1], 99, MPI_DOUBLE, neighbor_remoteRank[0][1], ((unsigned int)(neighbor_fragCommId[0][1]) << 16) + ((unsigned int)commId & 0x0000ffff), mpiCommunicator, &mpiRequest_Recv[1]);
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
if ((neighbor_isValid[0][0]&&neighbor_isRemote[0][0])) {
/* Statements in this Scop: S1248 */
for (int i0 = 0; (i0<=8); i0 += 1) {
double* buffer_Recv_0_p1 = (&buffer_Recv[0][(i0*11)]);
double* fieldData_LaplaceCoeff_GMRF_3_p1 = (&fieldData_LaplaceCoeff_GMRF[3][(i0*132)]);
int i1 = 1;
for (; (i1<=10); i1 += 2) {
fieldData_LaplaceCoeff_GMRF_3_p1[((i1*12)-11)] = buffer_Recv_0_p1[(i1-1)];
fieldData_LaplaceCoeff_GMRF_3_p1[((i1*12)+1)] = buffer_Recv_0_p1[i1];
}
for (; (i1<=11); i1 += 1) {
fieldData_LaplaceCoeff_GMRF_3_p1[((i1*12)-11)] = buffer_Recv_0_p1[(i1-1)];
}
}
}
if ((neighbor_isValid[0][1]&&neighbor_isRemote[0][1])) {
/* Statements in this Scop: S1249 */
for (int i0 = 0; (i0<=8); i0 += 1) {
double* buffer_Recv_1_p1 = (&buffer_Recv[1][(i0*11)]);
double* fieldData_LaplaceCoeff_GMRF_3_p1 = (&fieldData_LaplaceCoeff_GMRF[3][(i0*132)]);
int i1 = 11;
for (; (i1<=20); i1 += 2) {
fieldData_LaplaceCoeff_GMRF_3_p1[((i1*12)-121)] = buffer_Recv_1_p1[(i1-11)];
fieldData_LaplaceCoeff_GMRF_3_p1[((i1*12)-109)] = buffer_Recv_1_p1[(i1-10)];
}
for (; (i1<=21); i1 += 1) {
fieldData_LaplaceCoeff_GMRF_3_p1[((i1*12)-121)] = buffer_Recv_1_p1[(i1-11)];
}
}
}
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
MPI_Isend(&fieldData_LaplaceCoeff_GMRF[3][25], 1, mpiDatatype_9_11_132, neighbor_remoteRank[0][2], ((unsigned int)commId << 16) + ((unsigned int)(neighbor_fragCommId[0][2]) & 0x0000ffff), mpiCommunicator, &mpiRequest_Send[2]);
reqOutstanding_Send[2] = true;
}
if ((neighbor_isValid[0][3]&&neighbor_isRemote[0][3])) {
MPI_Isend(&fieldData_LaplaceCoeff_GMRF[3][97], 1, mpiDatatype_9_11_132, neighbor_remoteRank[0][3], ((unsigned int)commId << 16) + ((unsigned int)(neighbor_fragCommId[0][3]) & 0x0000ffff), mpiCommunicator, &mpiRequest_Send[3]);
reqOutstanding_Send[3] = true;
}
}
}
;
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[0]) {
if ((neighbor_isValid[0][2]&&neighbor_isRemote[0][2])) {
MPI_Irecv(&fieldData_LaplaceCoeff_GMRF[3][1], 1, mpiDatatype_9_11_132, neighbor_remoteRank[0][2], ((unsigned int)(neighbor_fragCommId[0][2]) << 16) + ((unsigned int)commId & 0x0000ffff), mpiCommunicator, &mpiRequest_Recv[2]);
reqOutstanding_Recv[2] = true;
}
if ((neighbor_isValid[0][3]&&neighbor_isRemote[0][3])) {
MPI_Irecv(&fieldData_LaplaceCoeff_GMRF[3][121], 1, mpiDatatype_9_11_132, neighbor_remoteRank[0][3], ((unsigned int)(neighbor_fragCommId[0][3]) << 16) + ((unsigned int)commId & 0x0000ffff), mpiCommunicator, &mpiRequest_Recv[3]);
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
