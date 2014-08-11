#include "Primitives/CommunicationFunctions.h"
void exchlaplacecoeffData_8(unsigned int slot) {
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[1]) {
if ((!neighbor_isValid[1][0])) {
{
double xPos;
double yPos;
/* Statements in this Scop: S1009, S1000, S1003, S1002, S1005, S1008, S1001, S1010, S1004, S1007, S1006 */
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
double* fieldData_LaplaceCoeff_8_p1 = (&fieldData_LaplaceCoeff[8][0]);
int i1 = 1;
for (; (i1<=256); i1 += 2) {
fieldData_LaplaceCoeff_8_p1[((i1*260)+134682)] = 0.000000e+00;
fieldData_LaplaceCoeff_8_p1[((i1*260)+134942)] = 0.000000e+00;
}
for (; (i1<=257); i1 += 1) {
fieldData_LaplaceCoeff_8_p1[((i1*260)+134682)] = 0.000000e+00;
}
}
{
int i1 = 1;
for (; (i1<(2&(~1))); i1 += 1) {
yPos = ((((i1-1)/2.560000e+02)*(posEnd[1]-posBegin[1]))+posBegin[1]);
}
__m128d vec1 = _mm_set1_pd(1.000000e+00);
__m128d vec2 = _mm_set1_pd(2.560000e+02);
__m128d vec5 = _mm_set1_pd(yPos);
for (; (i1<255); i1 += 4) {
/* yPos = ((((i1-1)/2.560000e+02)*(posEnd[1]-posBegin[1]))+posBegin[1]); */
__m128d vec0 = _mm_set_pd(i1+1,i1);
__m128d vec0_2 = _mm_set_pd(i1+1,i1);
__m128d vec3 = _mm_load1_pd((&posEnd[1]));
__m128d vec3_2 = _mm_load1_pd((&posEnd[1]));
__m128d vec4 = _mm_load1_pd((&posBegin[1]));
__m128d vec4_2 = _mm_load1_pd((&posBegin[1]));
vec5 = _mm_add_pd(_mm_mul_pd(_mm_div_pd(_mm_sub_pd(vec0, vec1), vec2), _mm_sub_pd(vec3, vec4)), vec4);
vec5 = _mm_add_pd(_mm_mul_pd(_mm_div_pd(_mm_sub_pd(vec0_2, vec1), vec2), _mm_sub_pd(vec3_2, vec4_2)), vec4_2);
}
for (; (i1<258); i1 += 1) {
yPos = ((((i1-1)/2.560000e+02)*(posEnd[1]-posBegin[1]))+posBegin[1]);
}
}
}
{
double* fieldData_LaplaceCoeff_8_p1 = (&fieldData_LaplaceCoeff[8][0]);
int i1 = 1;
for (; (i1<=256); i1 += 2) {
fieldData_LaplaceCoeff_8_p1[((i1*260)+336702)] = 0.000000e+00;
fieldData_LaplaceCoeff_8_p1[((i1*260)+336962)] = 0.000000e+00;
}
for (; (i1<=257); i1 += 1) {
fieldData_LaplaceCoeff_8_p1[((i1*260)+336702)] = 0.000000e+00;
}
}
}
{
double* fieldData_LaplaceCoeff_8_p1 = (&fieldData_LaplaceCoeff[8][0]);
int i1 = 1;
for (; (i1<=256); i1 += 2) {
fieldData_LaplaceCoeff_8_p1[((i1*260)+2)] = 0.000000e+00;
fieldData_LaplaceCoeff_8_p1[((i1*260)+262)] = 0.000000e+00;
}
for (; (i1<=257); i1 += 1) {
fieldData_LaplaceCoeff_8_p1[((i1*260)+2)] = 0.000000e+00;
}
}
}
{
int i1 = 1;
for (; (i1<(2&(~1))); i1 += 1) {
xPos = posBegin[0];
}
__m128d vec1 = _mm_set1_pd(xPos);
for (; (i1<255); i1 += 4) {
/* xPos = posBegin[0]; */
__m128d vec0 = _mm_load1_pd((&posBegin[0]));
__m128d vec0_2 = _mm_load1_pd((&posBegin[0]));
vec1 = vec0;
vec1 = vec0_2;
}
for (; (i1<258); i1 += 1) {
xPos = posBegin[0];
}
}
}
{
double* fieldData_LaplaceCoeff_8_p1 = (&fieldData_LaplaceCoeff[8][0]);
int i1 = 1;
for (; (i1<=256); i1 += 2) {
fieldData_LaplaceCoeff_8_p1[((i1*260)+67342)] = 0.000000e+00;
fieldData_LaplaceCoeff_8_p1[((i1*260)+67602)] = 0.000000e+00;
}
for (; (i1<=257); i1 += 1) {
fieldData_LaplaceCoeff_8_p1[((i1*260)+67342)] = 0.000000e+00;
}
}
}
{
double* fieldData_LaplaceCoeff_8_p1 = (&fieldData_LaplaceCoeff[8][0]);
int i1 = 1;
for (; (i1<=256); i1 += 2) {
fieldData_LaplaceCoeff_8_p1[((i1*260)+202022)] = 0.000000e+00;
fieldData_LaplaceCoeff_8_p1[((i1*260)+202282)] = 0.000000e+00;
}
for (; (i1<=257); i1 += 1) {
fieldData_LaplaceCoeff_8_p1[((i1*260)+202022)] = 0.000000e+00;
}
}
}
{
double* fieldData_LaplaceCoeff_8_p1 = (&fieldData_LaplaceCoeff[8][0]);
int i1 = 1;
for (; (i1<=256); i1 += 2) {
fieldData_LaplaceCoeff_8_p1[((i1*260)+404042)] = 0.000000e+00;
fieldData_LaplaceCoeff_8_p1[((i1*260)+404302)] = 0.000000e+00;
}
for (; (i1<=257); i1 += 1) {
fieldData_LaplaceCoeff_8_p1[((i1*260)+404042)] = 0.000000e+00;
}
}
}
{
double* fieldData_LaplaceCoeff_8_p1 = (&fieldData_LaplaceCoeff[8][0]);
int i1 = 1;
for (; (i1<=256); i1 += 2) {
fieldData_LaplaceCoeff_8_p1[((i1*260)+471382)] = 0.000000e+00;
fieldData_LaplaceCoeff_8_p1[((i1*260)+471642)] = 0.000000e+00;
}
for (; (i1<=257); i1 += 1) {
fieldData_LaplaceCoeff_8_p1[((i1*260)+471382)] = 0.000000e+00;
}
}
}
{
double* fieldData_LaplaceCoeff_8_p1 = (&fieldData_LaplaceCoeff[8][0]);
int i1 = 1;
for (; (i1<=256); i1 += 2) {
fieldData_LaplaceCoeff_8_p1[((i1*260)+269362)] = 0.000000e+00;
fieldData_LaplaceCoeff_8_p1[((i1*260)+269622)] = 0.000000e+00;
}
for (; (i1<=257); i1 += 1) {
fieldData_LaplaceCoeff_8_p1[((i1*260)+269362)] = 0.000000e+00;
}
}
}
{
double* fieldData_LaplaceCoeff_8_p1 = (&fieldData_LaplaceCoeff[8][0]);
int i1 = 1;
for (; (i1<=256); i1 += 2) {
fieldData_LaplaceCoeff_8_p1[((i1*260)+538722)] = 0.000000e+00;
fieldData_LaplaceCoeff_8_p1[((i1*260)+538982)] = 0.000000e+00;
}
for (; (i1<=257); i1 += 1) {
fieldData_LaplaceCoeff_8_p1[((i1*260)+538722)] = 0.000000e+00;
}
}
}
}
}
if ((!neighbor_isValid[1][1])) {
{
double xPos;
double yPos;
/* Statements in this Scop: S1021, S1015, S1020, S1017, S1011, S1014, S1013, S1016, S1019, S1018, S1012 */
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
double* fieldData_LaplaceCoeff_8_p1 = (&fieldData_LaplaceCoeff[8][0]);
int i1 = 1;
for (; (i1<=256); i1 += 2) {
fieldData_LaplaceCoeff_8_p1[((i1*260)+67598)] = 0.000000e+00;
fieldData_LaplaceCoeff_8_p1[((i1*260)+67858)] = 0.000000e+00;
}
for (; (i1<=257); i1 += 1) {
fieldData_LaplaceCoeff_8_p1[((i1*260)+67598)] = 0.000000e+00;
}
}
{
int i1 = 1;
for (; (i1<(2&(~1))); i1 += 1) {
xPos = posEnd[0];
}
__m128d vec1 = _mm_set1_pd(xPos);
for (; (i1<255); i1 += 4) {
/* xPos = posEnd[0]; */
__m128d vec0 = _mm_load1_pd((&posEnd[0]));
__m128d vec0_2 = _mm_load1_pd((&posEnd[0]));
vec1 = vec0;
vec1 = vec0_2;
}
for (; (i1<258); i1 += 1) {
xPos = posEnd[0];
}
}
}
{
double* fieldData_LaplaceCoeff_8_p1 = (&fieldData_LaplaceCoeff[8][0]);
int i1 = 1;
for (; (i1<=256); i1 += 2) {
fieldData_LaplaceCoeff_8_p1[((i1*260)+538978)] = 0.000000e+00;
fieldData_LaplaceCoeff_8_p1[((i1*260)+539238)] = 0.000000e+00;
}
for (; (i1<=257); i1 += 1) {
fieldData_LaplaceCoeff_8_p1[((i1*260)+538978)] = 0.000000e+00;
}
}
}
{
double* fieldData_LaplaceCoeff_8_p1 = (&fieldData_LaplaceCoeff[8][0]);
int i1 = 1;
for (; (i1<=256); i1 += 2) {
fieldData_LaplaceCoeff_8_p1[((i1*260)+258)] = 0.000000e+00;
fieldData_LaplaceCoeff_8_p1[((i1*260)+518)] = 0.000000e+00;
}
for (; (i1<=257); i1 += 1) {
fieldData_LaplaceCoeff_8_p1[((i1*260)+258)] = 0.000000e+00;
}
}
}
{
double* fieldData_LaplaceCoeff_8_p1 = (&fieldData_LaplaceCoeff[8][0]);
int i1 = 1;
for (; (i1<=256); i1 += 2) {
fieldData_LaplaceCoeff_8_p1[((i1*260)+471638)] = 0.000000e+00;
fieldData_LaplaceCoeff_8_p1[((i1*260)+471898)] = 0.000000e+00;
}
for (; (i1<=257); i1 += 1) {
fieldData_LaplaceCoeff_8_p1[((i1*260)+471638)] = 0.000000e+00;
}
}
}
{
double* fieldData_LaplaceCoeff_8_p1 = (&fieldData_LaplaceCoeff[8][0]);
int i1 = 1;
for (; (i1<=256); i1 += 2) {
fieldData_LaplaceCoeff_8_p1[((i1*260)+269618)] = 0.000000e+00;
fieldData_LaplaceCoeff_8_p1[((i1*260)+269878)] = 0.000000e+00;
}
for (; (i1<=257); i1 += 1) {
fieldData_LaplaceCoeff_8_p1[((i1*260)+269618)] = 0.000000e+00;
}
}
}
{
int i1 = 1;
for (; (i1<(2&(~1))); i1 += 1) {
yPos = ((((i1-1)/2.560000e+02)*(posEnd[1]-posBegin[1]))+posBegin[1]);
}
__m128d vec1 = _mm_set1_pd(1.000000e+00);
__m128d vec2 = _mm_set1_pd(2.560000e+02);
__m128d vec5 = _mm_set1_pd(yPos);
for (; (i1<255); i1 += 4) {
/* yPos = ((((i1-1)/2.560000e+02)*(posEnd[1]-posBegin[1]))+posBegin[1]); */
__m128d vec0 = _mm_set_pd(i1+1,i1);
__m128d vec0_2 = _mm_set_pd(i1+1,i1);
__m128d vec3 = _mm_load1_pd((&posEnd[1]));
__m128d vec3_2 = _mm_load1_pd((&posEnd[1]));
__m128d vec4 = _mm_load1_pd((&posBegin[1]));
__m128d vec4_2 = _mm_load1_pd((&posBegin[1]));
vec5 = _mm_add_pd(_mm_mul_pd(_mm_div_pd(_mm_sub_pd(vec0, vec1), vec2), _mm_sub_pd(vec3, vec4)), vec4);
vec5 = _mm_add_pd(_mm_mul_pd(_mm_div_pd(_mm_sub_pd(vec0_2, vec1), vec2), _mm_sub_pd(vec3_2, vec4_2)), vec4_2);
}
for (; (i1<258); i1 += 1) {
yPos = ((((i1-1)/2.560000e+02)*(posEnd[1]-posBegin[1]))+posBegin[1]);
}
}
}
{
double* fieldData_LaplaceCoeff_8_p1 = (&fieldData_LaplaceCoeff[8][0]);
int i1 = 1;
for (; (i1<=256); i1 += 2) {
fieldData_LaplaceCoeff_8_p1[((i1*260)+404298)] = 0.000000e+00;
fieldData_LaplaceCoeff_8_p1[((i1*260)+404558)] = 0.000000e+00;
}
for (; (i1<=257); i1 += 1) {
fieldData_LaplaceCoeff_8_p1[((i1*260)+404298)] = 0.000000e+00;
}
}
}
{
double* fieldData_LaplaceCoeff_8_p1 = (&fieldData_LaplaceCoeff[8][0]);
int i1 = 1;
for (; (i1<=256); i1 += 2) {
fieldData_LaplaceCoeff_8_p1[((i1*260)+202278)] = 0.000000e+00;
fieldData_LaplaceCoeff_8_p1[((i1*260)+202538)] = 0.000000e+00;
}
for (; (i1<=257); i1 += 1) {
fieldData_LaplaceCoeff_8_p1[((i1*260)+202278)] = 0.000000e+00;
}
}
}
{
double* fieldData_LaplaceCoeff_8_p1 = (&fieldData_LaplaceCoeff[8][0]);
int i1 = 1;
for (; (i1<=256); i1 += 2) {
fieldData_LaplaceCoeff_8_p1[((i1*260)+134938)] = 0.000000e+00;
fieldData_LaplaceCoeff_8_p1[((i1*260)+135198)] = 0.000000e+00;
}
for (; (i1<=257); i1 += 1) {
fieldData_LaplaceCoeff_8_p1[((i1*260)+134938)] = 0.000000e+00;
}
}
}
{
double* fieldData_LaplaceCoeff_8_p1 = (&fieldData_LaplaceCoeff[8][0]);
int i1 = 1;
for (; (i1<=256); i1 += 2) {
fieldData_LaplaceCoeff_8_p1[((i1*260)+336958)] = 0.000000e+00;
fieldData_LaplaceCoeff_8_p1[((i1*260)+337218)] = 0.000000e+00;
}
for (; (i1<=257); i1 += 1) {
fieldData_LaplaceCoeff_8_p1[((i1*260)+336958)] = 0.000000e+00;
}
}
}
}
}
if ((!neighbor_isValid[1][2])) {
{
double xPos;
double yPos;
/* Statements in this Scop: S1029, S1023, S1032, S1026, S1031, S1028, S1022, S1025, S1030, S1024, S1027 */
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
double* fieldData_LaplaceCoeff_8_p1 = (&fieldData_LaplaceCoeff[8][0]);
int i2 = 2;
for (; (i2<=257); i2 += 2) {
fieldData_LaplaceCoeff_8_p1[(i2+336960)] = 0.000000e+00;
fieldData_LaplaceCoeff_8_p1[(i2+336961)] = 0.000000e+00;
}
for (; (i2<=258); i2 += 1) {
fieldData_LaplaceCoeff_8_p1[(i2+336960)] = 0.000000e+00;
}
}
{
double* fieldData_LaplaceCoeff_8_p1 = (&fieldData_LaplaceCoeff[8][0]);
int i2 = 2;
for (; (i2<=257); i2 += 2) {
fieldData_LaplaceCoeff_8_p1[(i2+538980)] = 0.000000e+00;
fieldData_LaplaceCoeff_8_p1[(i2+538981)] = 0.000000e+00;
}
for (; (i2<=258); i2 += 1) {
fieldData_LaplaceCoeff_8_p1[(i2+538980)] = 0.000000e+00;
}
}
}
{
double* fieldData_LaplaceCoeff_8_p1 = (&fieldData_LaplaceCoeff[8][0]);
int i2 = 2;
for (; (i2<=257); i2 += 2) {
fieldData_LaplaceCoeff_8_p1[(i2+269620)] = 0.000000e+00;
fieldData_LaplaceCoeff_8_p1[(i2+269621)] = 0.000000e+00;
}
for (; (i2<=258); i2 += 1) {
fieldData_LaplaceCoeff_8_p1[(i2+269620)] = 0.000000e+00;
}
}
}
{
double* fieldData_LaplaceCoeff_8_p1 = (&fieldData_LaplaceCoeff[8][0]);
int i2 = 2;
for (; (i2<=257); i2 += 2) {
fieldData_LaplaceCoeff_8_p1[(i2+67600)] = 0.000000e+00;
fieldData_LaplaceCoeff_8_p1[(i2+67601)] = 0.000000e+00;
}
for (; (i2<=258); i2 += 1) {
fieldData_LaplaceCoeff_8_p1[(i2+67600)] = 0.000000e+00;
}
}
}
{
double* fieldData_LaplaceCoeff_8_p1 = (&fieldData_LaplaceCoeff[8][0]);
int i2 = 2;
for (; (i2<=257); i2 += 2) {
fieldData_LaplaceCoeff_8_p1[(i2+404300)] = 0.000000e+00;
fieldData_LaplaceCoeff_8_p1[(i2+404301)] = 0.000000e+00;
}
for (; (i2<=258); i2 += 1) {
fieldData_LaplaceCoeff_8_p1[(i2+404300)] = 0.000000e+00;
}
}
}
{
double* fieldData_LaplaceCoeff_8_p1 = (&fieldData_LaplaceCoeff[8][0]);
int i2 = 2;
for (; (i2<=257); i2 += 2) {
fieldData_LaplaceCoeff_8_p1[(i2+202280)] = 0.000000e+00;
fieldData_LaplaceCoeff_8_p1[(i2+202281)] = 0.000000e+00;
}
for (; (i2<=258); i2 += 1) {
fieldData_LaplaceCoeff_8_p1[(i2+202280)] = 0.000000e+00;
}
}
}
{
double* fieldData_LaplaceCoeff_8_p1 = (&fieldData_LaplaceCoeff[8][0]);
int i2 = 2;
for (; (i2<=257); i2 += 2) {
fieldData_LaplaceCoeff_8_p1[(i2+134940)] = 0.000000e+00;
fieldData_LaplaceCoeff_8_p1[(i2+134941)] = 0.000000e+00;
}
for (; (i2<=258); i2 += 1) {
fieldData_LaplaceCoeff_8_p1[(i2+134940)] = 0.000000e+00;
}
}
}
{
int i2 = 2;
for (; (i2<=257); i2 += 2) {
yPos = posBegin[1];
yPos = posBegin[1];
}
for (; (i2<=258); i2 += 1) {
yPos = posBegin[1];
}
}
}
{
int i2 = 2;
for (; (i2<=257); i2 += 2) {
xPos = ((((i2-2)/2.560000e+02)*(posEnd[0]-posBegin[0]))+posBegin[0]);
xPos = ((((i2-1)/2.560000e+02)*(posEnd[0]-posBegin[0]))+posBegin[0]);
}
for (; (i2<=258); i2 += 1) {
xPos = ((((i2-2)/2.560000e+02)*(posEnd[0]-posBegin[0]))+posBegin[0]);
}
}
}
{
double* fieldData_LaplaceCoeff_8_p1 = (&fieldData_LaplaceCoeff[8][0]);
int i2 = 2;
for (; (i2<=257); i2 += 2) {
fieldData_LaplaceCoeff_8_p1[(i2+471640)] = 0.000000e+00;
fieldData_LaplaceCoeff_8_p1[(i2+471641)] = 0.000000e+00;
}
for (; (i2<=258); i2 += 1) {
fieldData_LaplaceCoeff_8_p1[(i2+471640)] = 0.000000e+00;
}
}
}
{
double* fieldData_LaplaceCoeff_8_p1 = (&fieldData_LaplaceCoeff[8][0]);
int i2 = 2;
for (; (i2<=257); i2 += 2) {
fieldData_LaplaceCoeff_8_p1[(i2+260)] = 0.000000e+00;
fieldData_LaplaceCoeff_8_p1[(i2+261)] = 0.000000e+00;
}
for (; (i2<=258); i2 += 1) {
fieldData_LaplaceCoeff_8_p1[(i2+260)] = 0.000000e+00;
}
}
}
}
}
if ((!neighbor_isValid[1][3])) {
{
double xPos;
double yPos;
/* Statements in this Scop: S1041, S1035, S1038, S1040, S1034, S1043, S1037, S1042, S1036, S1039, S1033 */
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
double* fieldData_LaplaceCoeff_8_p1 = (&fieldData_LaplaceCoeff[8][0]);
int i2 = 2;
for (; (i2<=257); i2 += 2) {
fieldData_LaplaceCoeff_8_p1[(i2+403520)] = 0.000000e+00;
fieldData_LaplaceCoeff_8_p1[(i2+403521)] = 0.000000e+00;
}
for (; (i2<=258); i2 += 1) {
fieldData_LaplaceCoeff_8_p1[(i2+403520)] = 0.000000e+00;
}
}
{
double* fieldData_LaplaceCoeff_8_p1 = (&fieldData_LaplaceCoeff[8][0]);
int i2 = 2;
for (; (i2<=257); i2 += 2) {
fieldData_LaplaceCoeff_8_p1[(i2+201500)] = 0.000000e+00;
fieldData_LaplaceCoeff_8_p1[(i2+201501)] = 0.000000e+00;
}
for (; (i2<=258); i2 += 1) {
fieldData_LaplaceCoeff_8_p1[(i2+201500)] = 0.000000e+00;
}
}
}
{
double* fieldData_LaplaceCoeff_8_p1 = (&fieldData_LaplaceCoeff[8][0]);
int i2 = 2;
for (; (i2<=257); i2 += 2) {
fieldData_LaplaceCoeff_8_p1[(i2+134160)] = 0.000000e+00;
fieldData_LaplaceCoeff_8_p1[(i2+134161)] = 0.000000e+00;
}
for (; (i2<=258); i2 += 1) {
fieldData_LaplaceCoeff_8_p1[(i2+134160)] = 0.000000e+00;
}
}
}
{
double* fieldData_LaplaceCoeff_8_p1 = (&fieldData_LaplaceCoeff[8][0]);
int i2 = 2;
for (; (i2<=257); i2 += 2) {
fieldData_LaplaceCoeff_8_p1[(i2+66820)] = 0.000000e+00;
fieldData_LaplaceCoeff_8_p1[(i2+66821)] = 0.000000e+00;
}
for (; (i2<=258); i2 += 1) {
fieldData_LaplaceCoeff_8_p1[(i2+66820)] = 0.000000e+00;
}
}
}
{
int i2 = 2;
for (; (i2<=257); i2 += 2) {
xPos = ((((i2-2)/2.560000e+02)*(posEnd[0]-posBegin[0]))+posBegin[0]);
xPos = ((((i2-1)/2.560000e+02)*(posEnd[0]-posBegin[0]))+posBegin[0]);
}
for (; (i2<=258); i2 += 1) {
xPos = ((((i2-2)/2.560000e+02)*(posEnd[0]-posBegin[0]))+posBegin[0]);
}
}
}
{
double* fieldData_LaplaceCoeff_8_p1 = (&fieldData_LaplaceCoeff[8][0]);
int i2 = 2;
for (; (i2<=257); i2 += 2) {
fieldData_LaplaceCoeff_8_p1[(i2+336180)] = 0.000000e+00;
fieldData_LaplaceCoeff_8_p1[(i2+336181)] = 0.000000e+00;
}
for (; (i2<=258); i2 += 1) {
fieldData_LaplaceCoeff_8_p1[(i2+336180)] = 0.000000e+00;
}
}
}
{
double* fieldData_LaplaceCoeff_8_p1 = (&fieldData_LaplaceCoeff[8][0]);
int i2 = 2;
for (; (i2<=257); i2 += 2) {
fieldData_LaplaceCoeff_8_p1[(i2+268840)] = 0.000000e+00;
fieldData_LaplaceCoeff_8_p1[(i2+268841)] = 0.000000e+00;
}
for (; (i2<=258); i2 += 1) {
fieldData_LaplaceCoeff_8_p1[(i2+268840)] = 0.000000e+00;
}
}
}
{
double* fieldData_LaplaceCoeff_8_p1 = (&fieldData_LaplaceCoeff[8][0]);
int i2 = 2;
for (; (i2<=257); i2 += 2) {
fieldData_LaplaceCoeff_8_p1[(i2+538200)] = 0.000000e+00;
fieldData_LaplaceCoeff_8_p1[(i2+538201)] = 0.000000e+00;
}
for (; (i2<=258); i2 += 1) {
fieldData_LaplaceCoeff_8_p1[(i2+538200)] = 0.000000e+00;
}
}
}
{
double* fieldData_LaplaceCoeff_8_p1 = (&fieldData_LaplaceCoeff[8][0]);
int i2 = 2;
for (; (i2<=257); i2 += 2) {
fieldData_LaplaceCoeff_8_p1[(i2+470860)] = 0.000000e+00;
fieldData_LaplaceCoeff_8_p1[(i2+470861)] = 0.000000e+00;
}
for (; (i2<=258); i2 += 1) {
fieldData_LaplaceCoeff_8_p1[(i2+470860)] = 0.000000e+00;
}
}
}
{
double* fieldData_LaplaceCoeff_8_p1 = (&fieldData_LaplaceCoeff[8][0]);
int i2 = 2;
for (; (i2<=257); i2 += 2) {
fieldData_LaplaceCoeff_8_p1[(i2+605540)] = 0.000000e+00;
fieldData_LaplaceCoeff_8_p1[(i2+605541)] = 0.000000e+00;
}
for (; (i2<=258); i2 += 1) {
fieldData_LaplaceCoeff_8_p1[(i2+605540)] = 0.000000e+00;
}
}
}
{
int i2 = 2;
for (; (i2<=257); i2 += 2) {
yPos = posEnd[1];
yPos = posEnd[1];
}
for (; (i2<=258); i2 += 1) {
yPos = posEnd[1];
}
}
}
}
}
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[1]) {
if ((neighbor_isValid[1][1]&&neighbor_isRemote[1][1])) {
/* Statements in this Scop: S1044 */
for (int i3 = 0; (i3<=8); i3 += 1) {
double* fieldData_LaplaceCoeff_8_p1 = (&fieldData_LaplaceCoeff[8][(i3*67340)]);
double* buffer_Send_1_p1 = (&buffer_Send[1][(i3*257)]);
int i4 = 1;
for (; (i4<=256); i4 += 2) {
buffer_Send_1_p1[(i4-1)] = fieldData_LaplaceCoeff_8_p1[((i4*260)+258)];
buffer_Send_1_p1[i4] = fieldData_LaplaceCoeff_8_p1[((i4*260)+518)];
}
for (; (i4<=257); i4 += 1) {
buffer_Send_1_p1[(i4-1)] = fieldData_LaplaceCoeff_8_p1[((i4*260)+258)];
}
}
}
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[1]) {
if ((neighbor_isValid[1][1]&&neighbor_isRemote[1][1])) {
MPI_Isend(buffer_Send[1], 2313, MPI_DOUBLE, neighbor_remoteRank[1][1], ((unsigned int)commId << 16) + ((unsigned int)(neighbor_fragCommId[1][1]) & 0x0000ffff), mpiCommunicator, &mpiRequest_Send[1]);
reqOutstanding_Send[1] = true;
}
}
}
;
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[1]) {
if ((neighbor_isValid[1][0]&&neighbor_isRemote[1][0])) {
MPI_Irecv(buffer_Recv[0], 2313, MPI_DOUBLE, neighbor_remoteRank[1][0], ((unsigned int)(neighbor_fragCommId[1][0]) << 16) + ((unsigned int)commId & 0x0000ffff), mpiCommunicator, &mpiRequest_Recv[0]);
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
if ((neighbor_isValid[1][0]&&neighbor_isRemote[1][0])) {
/* Statements in this Scop: S1045 */
for (int i3 = 0; (i3<=8); i3 += 1) {
double* buffer_Recv_0_p1 = (&buffer_Recv[0][(i3*257)]);
double* fieldData_LaplaceCoeff_8_p1 = (&fieldData_LaplaceCoeff[8][(i3*67340)]);
int i4 = 3;
for (; (i4<=258); i4 += 2) {
fieldData_LaplaceCoeff_8_p1[((i4*260)-518)] = buffer_Recv_0_p1[(i4-3)];
fieldData_LaplaceCoeff_8_p1[((i4*260)-258)] = buffer_Recv_0_p1[(i4-2)];
}
for (; (i4<=259); i4 += 1) {
fieldData_LaplaceCoeff_8_p1[((i4*260)-518)] = buffer_Recv_0_p1[(i4-3)];
}
}
}
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
MPI_Isend(&fieldData_LaplaceCoeff[8][66822], 1, mpiDatatype_9_257_67340, neighbor_remoteRank[1][3], ((unsigned int)commId << 16) + ((unsigned int)(neighbor_fragCommId[1][3]) & 0x0000ffff), mpiCommunicator, &mpiRequest_Send[3]);
reqOutstanding_Send[3] = true;
}
}
}
;
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[1]) {
if ((neighbor_isValid[1][2]&&neighbor_isRemote[1][2])) {
MPI_Irecv(&fieldData_LaplaceCoeff[8][262], 1, mpiDatatype_9_257_67340, neighbor_remoteRank[1][2], ((unsigned int)(neighbor_fragCommId[1][2]) << 16) + ((unsigned int)commId & 0x0000ffff), mpiCommunicator, &mpiRequest_Recv[2]);
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
if ((neighbor_isValid[1][0]&&neighbor_isRemote[1][0])) {
/* Statements in this Scop: S1046 */
for (int i3 = 0; (i3<=8); i3 += 1) {
double* fieldData_LaplaceCoeff_8_p1 = (&fieldData_LaplaceCoeff[8][(i3*67340)]);
double* buffer_Send_0_p1 = (&buffer_Send[0][(i3*259)]);
int i4 = 0;
for (; (i4<=257); i4 += 2) {
buffer_Send_0_p1[i4] = fieldData_LaplaceCoeff_8_p1[((i4*260)+3)];
buffer_Send_0_p1[(i4+1)] = fieldData_LaplaceCoeff_8_p1[((i4*260)+263)];
}
for (; (i4<=258); i4 += 1) {
buffer_Send_0_p1[i4] = fieldData_LaplaceCoeff_8_p1[((i4*260)+3)];
}
}
}
if ((neighbor_isValid[1][1]&&neighbor_isRemote[1][1])) {
/* Statements in this Scop: S1047 */
for (int i3 = 0; (i3<=8); i3 += 1) {
double* fieldData_LaplaceCoeff_8_p1 = (&fieldData_LaplaceCoeff[8][(i3*67340)]);
double* buffer_Send_1_p1 = (&buffer_Send[1][(i3*259)]);
int i4 = 0;
for (; (i4<=257); i4 += 2) {
buffer_Send_1_p1[i4] = fieldData_LaplaceCoeff_8_p1[((i4*260)+257)];
buffer_Send_1_p1[(i4+1)] = fieldData_LaplaceCoeff_8_p1[((i4*260)+517)];
}
for (; (i4<=258); i4 += 1) {
buffer_Send_1_p1[i4] = fieldData_LaplaceCoeff_8_p1[((i4*260)+257)];
}
}
}
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[1]) {
if ((neighbor_isValid[1][0]&&neighbor_isRemote[1][0])) {
MPI_Isend(buffer_Send[0], 2331, MPI_DOUBLE, neighbor_remoteRank[1][0], ((unsigned int)commId << 16) + ((unsigned int)(neighbor_fragCommId[1][0]) & 0x0000ffff), mpiCommunicator, &mpiRequest_Send[0]);
reqOutstanding_Send[0] = true;
}
if ((neighbor_isValid[1][1]&&neighbor_isRemote[1][1])) {
MPI_Isend(buffer_Send[1], 2331, MPI_DOUBLE, neighbor_remoteRank[1][1], ((unsigned int)commId << 16) + ((unsigned int)(neighbor_fragCommId[1][1]) & 0x0000ffff), mpiCommunicator, &mpiRequest_Send[1]);
reqOutstanding_Send[1] = true;
}
}
}
;
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[1]) {
if ((neighbor_isValid[1][0]&&neighbor_isRemote[1][0])) {
MPI_Irecv(buffer_Recv[0], 2331, MPI_DOUBLE, neighbor_remoteRank[1][0], ((unsigned int)(neighbor_fragCommId[1][0]) << 16) + ((unsigned int)commId & 0x0000ffff), mpiCommunicator, &mpiRequest_Recv[0]);
reqOutstanding_Recv[0] = true;
}
if ((neighbor_isValid[1][1]&&neighbor_isRemote[1][1])) {
MPI_Irecv(buffer_Recv[1], 2331, MPI_DOUBLE, neighbor_remoteRank[1][1], ((unsigned int)(neighbor_fragCommId[1][1]) << 16) + ((unsigned int)commId & 0x0000ffff), mpiCommunicator, &mpiRequest_Recv[1]);
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
if ((neighbor_isValid[1][0]&&neighbor_isRemote[1][0])) {
/* Statements in this Scop: S1048 */
for (int i3 = 0; (i3<=8); i3 += 1) {
double* buffer_Recv_0_p1 = (&buffer_Recv[0][(i3*259)]);
double* fieldData_LaplaceCoeff_8_p1 = (&fieldData_LaplaceCoeff[8][(i3*67340)]);
int i4 = 1;
for (; (i4<=258); i4 += 2) {
fieldData_LaplaceCoeff_8_p1[((i4*260)-259)] = buffer_Recv_0_p1[(i4-1)];
fieldData_LaplaceCoeff_8_p1[((i4*260)+1)] = buffer_Recv_0_p1[i4];
}
for (; (i4<=259); i4 += 1) {
fieldData_LaplaceCoeff_8_p1[((i4*260)-259)] = buffer_Recv_0_p1[(i4-1)];
}
}
}
if ((neighbor_isValid[1][1]&&neighbor_isRemote[1][1])) {
/* Statements in this Scop: S1049 */
for (int i3 = 0; (i3<=8); i3 += 1) {
double* buffer_Recv_1_p1 = (&buffer_Recv[1][(i3*259)]);
double* fieldData_LaplaceCoeff_8_p1 = (&fieldData_LaplaceCoeff[8][(i3*67340)]);
int i4 = 259;
for (; (i4<=516); i4 += 2) {
fieldData_LaplaceCoeff_8_p1[((i4*260)-67081)] = buffer_Recv_1_p1[(i4-259)];
fieldData_LaplaceCoeff_8_p1[((i4*260)-66821)] = buffer_Recv_1_p1[(i4-258)];
}
for (; (i4<=517); i4 += 1) {
fieldData_LaplaceCoeff_8_p1[((i4*260)-67081)] = buffer_Recv_1_p1[(i4-259)];
}
}
}
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
MPI_Isend(&fieldData_LaplaceCoeff[8][521], 1, mpiDatatype_9_259_67340, neighbor_remoteRank[1][2], ((unsigned int)commId << 16) + ((unsigned int)(neighbor_fragCommId[1][2]) & 0x0000ffff), mpiCommunicator, &mpiRequest_Send[2]);
reqOutstanding_Send[2] = true;
}
if ((neighbor_isValid[1][3]&&neighbor_isRemote[1][3])) {
MPI_Isend(&fieldData_LaplaceCoeff[8][66561], 1, mpiDatatype_9_259_67340, neighbor_remoteRank[1][3], ((unsigned int)commId << 16) + ((unsigned int)(neighbor_fragCommId[1][3]) & 0x0000ffff), mpiCommunicator, &mpiRequest_Send[3]);
reqOutstanding_Send[3] = true;
}
}
}
;
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[1]) {
if ((neighbor_isValid[1][2]&&neighbor_isRemote[1][2])) {
MPI_Irecv(&fieldData_LaplaceCoeff[8][1], 1, mpiDatatype_9_259_67340, neighbor_remoteRank[1][2], ((unsigned int)(neighbor_fragCommId[1][2]) << 16) + ((unsigned int)commId & 0x0000ffff), mpiCommunicator, &mpiRequest_Recv[2]);
reqOutstanding_Recv[2] = true;
}
if ((neighbor_isValid[1][3]&&neighbor_isRemote[1][3])) {
MPI_Irecv(&fieldData_LaplaceCoeff[8][67081], 1, mpiDatatype_9_259_67340, neighbor_remoteRank[1][3], ((unsigned int)(neighbor_fragCommId[1][3]) << 16) + ((unsigned int)commId & 0x0000ffff), mpiCommunicator, &mpiRequest_Recv[3]);
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
