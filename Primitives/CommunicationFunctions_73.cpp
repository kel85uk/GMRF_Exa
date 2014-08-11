#include "Primitives/CommunicationFunctions.h"
void exchlaplacecoeffData_4(unsigned int slot) {
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[1]) {
if ((!neighbor_isValid[1][0])) {
{
double xPos;
double yPos;
/* Statements in this Scop: S803, S806, S809, S800, S808, S802, S805, S810, S807, S801, S804 */
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
double* fieldData_LaplaceCoeff_4_p1 = (&fieldData_LaplaceCoeff[4][0]);
int i1 = 1;
for (; (i1<=16); i1 += 2) {
fieldData_LaplaceCoeff_4_p1[((i1*20)+2662)] = 0.000000e+00;
fieldData_LaplaceCoeff_4_p1[((i1*20)+2682)] = 0.000000e+00;
}
for (; (i1<=17); i1 += 1) {
fieldData_LaplaceCoeff_4_p1[((i1*20)+2662)] = 0.000000e+00;
}
}
{
double* fieldData_LaplaceCoeff_4_p1 = (&fieldData_LaplaceCoeff[4][0]);
int i1 = 1;
for (; (i1<=16); i1 += 2) {
fieldData_LaplaceCoeff_4_p1[((i1*20)+762)] = 0.000000e+00;
fieldData_LaplaceCoeff_4_p1[((i1*20)+782)] = 0.000000e+00;
}
for (; (i1<=17); i1 += 1) {
fieldData_LaplaceCoeff_4_p1[((i1*20)+762)] = 0.000000e+00;
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
{
double* fieldData_LaplaceCoeff_4_p1 = (&fieldData_LaplaceCoeff[4][0]);
int i1 = 1;
for (; (i1<=16); i1 += 2) {
fieldData_LaplaceCoeff_4_p1[((i1*20)+1522)] = 0.000000e+00;
fieldData_LaplaceCoeff_4_p1[((i1*20)+1542)] = 0.000000e+00;
}
for (; (i1<=17); i1 += 1) {
fieldData_LaplaceCoeff_4_p1[((i1*20)+1522)] = 0.000000e+00;
}
}
}
{
double* fieldData_LaplaceCoeff_4_p1 = (&fieldData_LaplaceCoeff[4][0]);
int i1 = 1;
for (; (i1<=16); i1 += 2) {
fieldData_LaplaceCoeff_4_p1[((i1*20)+382)] = 0.000000e+00;
fieldData_LaplaceCoeff_4_p1[((i1*20)+402)] = 0.000000e+00;
}
for (; (i1<=17); i1 += 1) {
fieldData_LaplaceCoeff_4_p1[((i1*20)+382)] = 0.000000e+00;
}
}
}
{
double* fieldData_LaplaceCoeff_4_p1 = (&fieldData_LaplaceCoeff[4][0]);
int i1 = 1;
for (; (i1<=16); i1 += 2) {
fieldData_LaplaceCoeff_4_p1[((i1*20)+3042)] = 0.000000e+00;
fieldData_LaplaceCoeff_4_p1[((i1*20)+3062)] = 0.000000e+00;
}
for (; (i1<=17); i1 += 1) {
fieldData_LaplaceCoeff_4_p1[((i1*20)+3042)] = 0.000000e+00;
}
}
}
{
double* fieldData_LaplaceCoeff_4_p1 = (&fieldData_LaplaceCoeff[4][0]);
int i1 = 1;
for (; (i1<=16); i1 += 2) {
fieldData_LaplaceCoeff_4_p1[((i1*20)+1142)] = 0.000000e+00;
fieldData_LaplaceCoeff_4_p1[((i1*20)+1162)] = 0.000000e+00;
}
for (; (i1<=17); i1 += 1) {
fieldData_LaplaceCoeff_4_p1[((i1*20)+1142)] = 0.000000e+00;
}
}
}
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
}
{
double* fieldData_LaplaceCoeff_4_p1 = (&fieldData_LaplaceCoeff[4][0]);
int i1 = 1;
for (; (i1<=16); i1 += 2) {
fieldData_LaplaceCoeff_4_p1[((i1*20)+2282)] = 0.000000e+00;
fieldData_LaplaceCoeff_4_p1[((i1*20)+2302)] = 0.000000e+00;
}
for (; (i1<=17); i1 += 1) {
fieldData_LaplaceCoeff_4_p1[((i1*20)+2282)] = 0.000000e+00;
}
}
}
{
double* fieldData_LaplaceCoeff_4_p1 = (&fieldData_LaplaceCoeff[4][0]);
int i1 = 1;
for (; (i1<=16); i1 += 2) {
fieldData_LaplaceCoeff_4_p1[((i1*20)+1902)] = 0.000000e+00;
fieldData_LaplaceCoeff_4_p1[((i1*20)+1922)] = 0.000000e+00;
}
for (; (i1<=17); i1 += 1) {
fieldData_LaplaceCoeff_4_p1[((i1*20)+1902)] = 0.000000e+00;
}
}
}
{
double* fieldData_LaplaceCoeff_4_p1 = (&fieldData_LaplaceCoeff[4][0]);
int i1 = 1;
for (; (i1<=16); i1 += 2) {
fieldData_LaplaceCoeff_4_p1[((i1*20)+2)] = 0.000000e+00;
fieldData_LaplaceCoeff_4_p1[((i1*20)+22)] = 0.000000e+00;
}
for (; (i1<=17); i1 += 1) {
fieldData_LaplaceCoeff_4_p1[((i1*20)+2)] = 0.000000e+00;
}
}
}
}
}
if ((!neighbor_isValid[1][1])) {
{
double xPos;
double yPos;
/* Statements in this Scop: S821, S815, S818, S812, S820, S814, S817, S811, S819, S813, S816 */
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
double* fieldData_LaplaceCoeff_4_p1 = (&fieldData_LaplaceCoeff[4][0]);
int i1 = 1;
for (; (i1<=16); i1 += 2) {
fieldData_LaplaceCoeff_4_p1[((i1*20)+778)] = 0.000000e+00;
fieldData_LaplaceCoeff_4_p1[((i1*20)+798)] = 0.000000e+00;
}
for (; (i1<=17); i1 += 1) {
fieldData_LaplaceCoeff_4_p1[((i1*20)+778)] = 0.000000e+00;
}
}
{
double* fieldData_LaplaceCoeff_4_p1 = (&fieldData_LaplaceCoeff[4][0]);
int i1 = 1;
for (; (i1<=16); i1 += 2) {
fieldData_LaplaceCoeff_4_p1[((i1*20)+2678)] = 0.000000e+00;
fieldData_LaplaceCoeff_4_p1[((i1*20)+2698)] = 0.000000e+00;
}
for (; (i1<=17); i1 += 1) {
fieldData_LaplaceCoeff_4_p1[((i1*20)+2678)] = 0.000000e+00;
}
}
}
{
double* fieldData_LaplaceCoeff_4_p1 = (&fieldData_LaplaceCoeff[4][0]);
int i1 = 1;
for (; (i1<=16); i1 += 2) {
fieldData_LaplaceCoeff_4_p1[((i1*20)+1158)] = 0.000000e+00;
fieldData_LaplaceCoeff_4_p1[((i1*20)+1178)] = 0.000000e+00;
}
for (; (i1<=17); i1 += 1) {
fieldData_LaplaceCoeff_4_p1[((i1*20)+1158)] = 0.000000e+00;
}
}
}
{
double* fieldData_LaplaceCoeff_4_p1 = (&fieldData_LaplaceCoeff[4][0]);
int i1 = 1;
for (; (i1<=16); i1 += 2) {
fieldData_LaplaceCoeff_4_p1[((i1*20)+398)] = 0.000000e+00;
fieldData_LaplaceCoeff_4_p1[((i1*20)+418)] = 0.000000e+00;
}
for (; (i1<=17); i1 += 1) {
fieldData_LaplaceCoeff_4_p1[((i1*20)+398)] = 0.000000e+00;
}
}
}
{
double* fieldData_LaplaceCoeff_4_p1 = (&fieldData_LaplaceCoeff[4][0]);
int i1 = 1;
for (; (i1<=16); i1 += 2) {
fieldData_LaplaceCoeff_4_p1[((i1*20)+18)] = 0.000000e+00;
fieldData_LaplaceCoeff_4_p1[((i1*20)+38)] = 0.000000e+00;
}
for (; (i1<=17); i1 += 1) {
fieldData_LaplaceCoeff_4_p1[((i1*20)+18)] = 0.000000e+00;
}
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
double* fieldData_LaplaceCoeff_4_p1 = (&fieldData_LaplaceCoeff[4][0]);
int i1 = 1;
for (; (i1<=16); i1 += 2) {
fieldData_LaplaceCoeff_4_p1[((i1*20)+2298)] = 0.000000e+00;
fieldData_LaplaceCoeff_4_p1[((i1*20)+2318)] = 0.000000e+00;
}
for (; (i1<=17); i1 += 1) {
fieldData_LaplaceCoeff_4_p1[((i1*20)+2298)] = 0.000000e+00;
}
}
}
{
double* fieldData_LaplaceCoeff_4_p1 = (&fieldData_LaplaceCoeff[4][0]);
int i1 = 1;
for (; (i1<=16); i1 += 2) {
fieldData_LaplaceCoeff_4_p1[((i1*20)+1918)] = 0.000000e+00;
fieldData_LaplaceCoeff_4_p1[((i1*20)+1938)] = 0.000000e+00;
}
for (; (i1<=17); i1 += 1) {
fieldData_LaplaceCoeff_4_p1[((i1*20)+1918)] = 0.000000e+00;
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
{
double* fieldData_LaplaceCoeff_4_p1 = (&fieldData_LaplaceCoeff[4][0]);
int i1 = 1;
for (; (i1<=16); i1 += 2) {
fieldData_LaplaceCoeff_4_p1[((i1*20)+1538)] = 0.000000e+00;
fieldData_LaplaceCoeff_4_p1[((i1*20)+1558)] = 0.000000e+00;
}
for (; (i1<=17); i1 += 1) {
fieldData_LaplaceCoeff_4_p1[((i1*20)+1538)] = 0.000000e+00;
}
}
}
{
double* fieldData_LaplaceCoeff_4_p1 = (&fieldData_LaplaceCoeff[4][0]);
int i1 = 1;
for (; (i1<=16); i1 += 2) {
fieldData_LaplaceCoeff_4_p1[((i1*20)+3058)] = 0.000000e+00;
fieldData_LaplaceCoeff_4_p1[((i1*20)+3078)] = 0.000000e+00;
}
for (; (i1<=17); i1 += 1) {
fieldData_LaplaceCoeff_4_p1[((i1*20)+3058)] = 0.000000e+00;
}
}
}
}
}
if ((!neighbor_isValid[1][2])) {
{
double xPos;
double yPos;
/* Statements in this Scop: S830, S824, S827, S832, S826, S829, S823, S831, S825, S828, S822 */
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
double* fieldData_LaplaceCoeff_4_p1 = (&fieldData_LaplaceCoeff[4][0]);
int i2 = 2;
for (; (i2<=17); i2 += 2) {
fieldData_LaplaceCoeff_4_p1[(i2+1540)] = 0.000000e+00;
fieldData_LaplaceCoeff_4_p1[(i2+1541)] = 0.000000e+00;
}
for (; (i2<=18); i2 += 1) {
fieldData_LaplaceCoeff_4_p1[(i2+1540)] = 0.000000e+00;
}
}
{
double* fieldData_LaplaceCoeff_4_p1 = (&fieldData_LaplaceCoeff[4][0]);
int i2 = 2;
for (; (i2<=17); i2 += 2) {
fieldData_LaplaceCoeff_4_p1[(i2+1160)] = 0.000000e+00;
fieldData_LaplaceCoeff_4_p1[(i2+1161)] = 0.000000e+00;
}
for (; (i2<=18); i2 += 1) {
fieldData_LaplaceCoeff_4_p1[(i2+1160)] = 0.000000e+00;
}
}
}
{
double* fieldData_LaplaceCoeff_4_p1 = (&fieldData_LaplaceCoeff[4][0]);
int i2 = 2;
for (; (i2<=17); i2 += 2) {
fieldData_LaplaceCoeff_4_p1[(i2+20)] = 0.000000e+00;
fieldData_LaplaceCoeff_4_p1[(i2+21)] = 0.000000e+00;
}
for (; (i2<=18); i2 += 1) {
fieldData_LaplaceCoeff_4_p1[(i2+20)] = 0.000000e+00;
}
}
}
{
double* fieldData_LaplaceCoeff_4_p1 = (&fieldData_LaplaceCoeff[4][0]);
int i2 = 2;
for (; (i2<=17); i2 += 2) {
fieldData_LaplaceCoeff_4_p1[(i2+780)] = 0.000000e+00;
fieldData_LaplaceCoeff_4_p1[(i2+781)] = 0.000000e+00;
}
for (; (i2<=18); i2 += 1) {
fieldData_LaplaceCoeff_4_p1[(i2+780)] = 0.000000e+00;
}
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
double* fieldData_LaplaceCoeff_4_p1 = (&fieldData_LaplaceCoeff[4][0]);
int i2 = 2;
for (; (i2<=17); i2 += 2) {
fieldData_LaplaceCoeff_4_p1[(i2+400)] = 0.000000e+00;
fieldData_LaplaceCoeff_4_p1[(i2+401)] = 0.000000e+00;
}
for (; (i2<=18); i2 += 1) {
fieldData_LaplaceCoeff_4_p1[(i2+400)] = 0.000000e+00;
}
}
}
{
double* fieldData_LaplaceCoeff_4_p1 = (&fieldData_LaplaceCoeff[4][0]);
int i2 = 2;
for (; (i2<=17); i2 += 2) {
fieldData_LaplaceCoeff_4_p1[(i2+1920)] = 0.000000e+00;
fieldData_LaplaceCoeff_4_p1[(i2+1921)] = 0.000000e+00;
}
for (; (i2<=18); i2 += 1) {
fieldData_LaplaceCoeff_4_p1[(i2+1920)] = 0.000000e+00;
}
}
}
{
double* fieldData_LaplaceCoeff_4_p1 = (&fieldData_LaplaceCoeff[4][0]);
int i2 = 2;
for (; (i2<=17); i2 += 2) {
fieldData_LaplaceCoeff_4_p1[(i2+2680)] = 0.000000e+00;
fieldData_LaplaceCoeff_4_p1[(i2+2681)] = 0.000000e+00;
}
for (; (i2<=18); i2 += 1) {
fieldData_LaplaceCoeff_4_p1[(i2+2680)] = 0.000000e+00;
}
}
}
{
double* fieldData_LaplaceCoeff_4_p1 = (&fieldData_LaplaceCoeff[4][0]);
int i2 = 2;
for (; (i2<=17); i2 += 2) {
fieldData_LaplaceCoeff_4_p1[(i2+2300)] = 0.000000e+00;
fieldData_LaplaceCoeff_4_p1[(i2+2301)] = 0.000000e+00;
}
for (; (i2<=18); i2 += 1) {
fieldData_LaplaceCoeff_4_p1[(i2+2300)] = 0.000000e+00;
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
{
double* fieldData_LaplaceCoeff_4_p1 = (&fieldData_LaplaceCoeff[4][0]);
int i2 = 2;
for (; (i2<=17); i2 += 2) {
fieldData_LaplaceCoeff_4_p1[(i2+3060)] = 0.000000e+00;
fieldData_LaplaceCoeff_4_p1[(i2+3061)] = 0.000000e+00;
}
for (; (i2<=18); i2 += 1) {
fieldData_LaplaceCoeff_4_p1[(i2+3060)] = 0.000000e+00;
}
}
}
}
}
if ((!neighbor_isValid[1][3])) {
{
double xPos;
double yPos;
/* Statements in this Scop: S842, S836, S839, S841, S835, S838, S843, S837, S840, S834, S833 */
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
double* fieldData_LaplaceCoeff_4_p1 = (&fieldData_LaplaceCoeff[4][0]);
int i2 = 2;
for (; (i2<=17); i2 += 2) {
fieldData_LaplaceCoeff_4_p1[(i2+1480)] = 0.000000e+00;
fieldData_LaplaceCoeff_4_p1[(i2+1481)] = 0.000000e+00;
}
for (; (i2<=18); i2 += 1) {
fieldData_LaplaceCoeff_4_p1[(i2+1480)] = 0.000000e+00;
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
{
double* fieldData_LaplaceCoeff_4_p1 = (&fieldData_LaplaceCoeff[4][0]);
int i2 = 2;
for (; (i2<=17); i2 += 2) {
fieldData_LaplaceCoeff_4_p1[(i2+2240)] = 0.000000e+00;
fieldData_LaplaceCoeff_4_p1[(i2+2241)] = 0.000000e+00;
}
for (; (i2<=18); i2 += 1) {
fieldData_LaplaceCoeff_4_p1[(i2+2240)] = 0.000000e+00;
}
}
}
{
double* fieldData_LaplaceCoeff_4_p1 = (&fieldData_LaplaceCoeff[4][0]);
int i2 = 2;
for (; (i2<=17); i2 += 2) {
fieldData_LaplaceCoeff_4_p1[(i2+2620)] = 0.000000e+00;
fieldData_LaplaceCoeff_4_p1[(i2+2621)] = 0.000000e+00;
}
for (; (i2<=18); i2 += 1) {
fieldData_LaplaceCoeff_4_p1[(i2+2620)] = 0.000000e+00;
}
}
}
{
double* fieldData_LaplaceCoeff_4_p1 = (&fieldData_LaplaceCoeff[4][0]);
int i2 = 2;
for (; (i2<=17); i2 += 2) {
fieldData_LaplaceCoeff_4_p1[(i2+3380)] = 0.000000e+00;
fieldData_LaplaceCoeff_4_p1[(i2+3381)] = 0.000000e+00;
}
for (; (i2<=18); i2 += 1) {
fieldData_LaplaceCoeff_4_p1[(i2+3380)] = 0.000000e+00;
}
}
}
{
double* fieldData_LaplaceCoeff_4_p1 = (&fieldData_LaplaceCoeff[4][0]);
int i2 = 2;
for (; (i2<=17); i2 += 2) {
fieldData_LaplaceCoeff_4_p1[(i2+340)] = 0.000000e+00;
fieldData_LaplaceCoeff_4_p1[(i2+341)] = 0.000000e+00;
}
for (; (i2<=18); i2 += 1) {
fieldData_LaplaceCoeff_4_p1[(i2+340)] = 0.000000e+00;
}
}
}
{
double* fieldData_LaplaceCoeff_4_p1 = (&fieldData_LaplaceCoeff[4][0]);
int i2 = 2;
for (; (i2<=17); i2 += 2) {
fieldData_LaplaceCoeff_4_p1[(i2+720)] = 0.000000e+00;
fieldData_LaplaceCoeff_4_p1[(i2+721)] = 0.000000e+00;
}
for (; (i2<=18); i2 += 1) {
fieldData_LaplaceCoeff_4_p1[(i2+720)] = 0.000000e+00;
}
}
}
{
double* fieldData_LaplaceCoeff_4_p1 = (&fieldData_LaplaceCoeff[4][0]);
int i2 = 2;
for (; (i2<=17); i2 += 2) {
fieldData_LaplaceCoeff_4_p1[(i2+1860)] = 0.000000e+00;
fieldData_LaplaceCoeff_4_p1[(i2+1861)] = 0.000000e+00;
}
for (; (i2<=18); i2 += 1) {
fieldData_LaplaceCoeff_4_p1[(i2+1860)] = 0.000000e+00;
}
}
}
{
double* fieldData_LaplaceCoeff_4_p1 = (&fieldData_LaplaceCoeff[4][0]);
int i2 = 2;
for (; (i2<=17); i2 += 2) {
fieldData_LaplaceCoeff_4_p1[(i2+3000)] = 0.000000e+00;
fieldData_LaplaceCoeff_4_p1[(i2+3001)] = 0.000000e+00;
}
for (; (i2<=18); i2 += 1) {
fieldData_LaplaceCoeff_4_p1[(i2+3000)] = 0.000000e+00;
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
{
double* fieldData_LaplaceCoeff_4_p1 = (&fieldData_LaplaceCoeff[4][0]);
int i2 = 2;
for (; (i2<=17); i2 += 2) {
fieldData_LaplaceCoeff_4_p1[(i2+1100)] = 0.000000e+00;
fieldData_LaplaceCoeff_4_p1[(i2+1101)] = 0.000000e+00;
}
for (; (i2<=18); i2 += 1) {
fieldData_LaplaceCoeff_4_p1[(i2+1100)] = 0.000000e+00;
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
/* Statements in this Scop: S844 */
for (int i0 = 0; (i0<=8); i0 += 1) {
double* buffer_Send_1_p1 = (&buffer_Send[1][(i0*17)]);
double* fieldData_LaplaceCoeff_4_p1 = (&fieldData_LaplaceCoeff[4][(i0*380)]);
int i1 = 1;
for (; (i1<=16); i1 += 2) {
buffer_Send_1_p1[(i1-1)] = fieldData_LaplaceCoeff_4_p1[((i1*20)+18)];
buffer_Send_1_p1[i1] = fieldData_LaplaceCoeff_4_p1[((i1*20)+38)];
}
for (; (i1<=17); i1 += 1) {
buffer_Send_1_p1[(i1-1)] = fieldData_LaplaceCoeff_4_p1[((i1*20)+18)];
}
}
}
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[1]) {
if ((neighbor_isValid[1][1]&&neighbor_isRemote[1][1])) {
MPI_Isend(buffer_Send[1], 153, MPI_DOUBLE, neighbor_remoteRank[1][1], ((unsigned int)commId << 16) + ((unsigned int)(neighbor_fragCommId[1][1]) & 0x0000ffff), mpiCommunicator, &mpiRequest_Send[1]);
reqOutstanding_Send[1] = true;
}
}
}
;
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[1]) {
if ((neighbor_isValid[1][0]&&neighbor_isRemote[1][0])) {
MPI_Irecv(buffer_Recv[0], 153, MPI_DOUBLE, neighbor_remoteRank[1][0], ((unsigned int)(neighbor_fragCommId[1][0]) << 16) + ((unsigned int)commId & 0x0000ffff), mpiCommunicator, &mpiRequest_Recv[0]);
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
/* Statements in this Scop: S845 */
for (int i0 = 0; (i0<=8); i0 += 1) {
double* buffer_Recv_0_p1 = (&buffer_Recv[0][(i0*17)]);
double* fieldData_LaplaceCoeff_4_p1 = (&fieldData_LaplaceCoeff[4][(i0*380)]);
int i1 = 3;
for (; (i1<=18); i1 += 2) {
fieldData_LaplaceCoeff_4_p1[((i1*20)-38)] = buffer_Recv_0_p1[(i1-3)];
fieldData_LaplaceCoeff_4_p1[((i1*20)-18)] = buffer_Recv_0_p1[(i1-2)];
}
for (; (i1<=19); i1 += 1) {
fieldData_LaplaceCoeff_4_p1[((i1*20)-38)] = buffer_Recv_0_p1[(i1-3)];
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
MPI_Isend(&fieldData_LaplaceCoeff[4][342], 1, mpiDatatype_9_17_380, neighbor_remoteRank[1][3], ((unsigned int)commId << 16) + ((unsigned int)(neighbor_fragCommId[1][3]) & 0x0000ffff), mpiCommunicator, &mpiRequest_Send[3]);
reqOutstanding_Send[3] = true;
}
}
}
;
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[1]) {
if ((neighbor_isValid[1][2]&&neighbor_isRemote[1][2])) {
MPI_Irecv(&fieldData_LaplaceCoeff[4][22], 1, mpiDatatype_9_17_380, neighbor_remoteRank[1][2], ((unsigned int)(neighbor_fragCommId[1][2]) << 16) + ((unsigned int)commId & 0x0000ffff), mpiCommunicator, &mpiRequest_Recv[2]);
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
/* Statements in this Scop: S846 */
for (int i0 = 0; (i0<=8); i0 += 1) {
double* fieldData_LaplaceCoeff_4_p1 = (&fieldData_LaplaceCoeff[4][(i0*380)]);
double* buffer_Send_0_p1 = (&buffer_Send[0][(i0*19)]);
int i1 = 0;
for (; (i1<=17); i1 += 2) {
buffer_Send_0_p1[i1] = fieldData_LaplaceCoeff_4_p1[((i1*20)+3)];
buffer_Send_0_p1[(i1+1)] = fieldData_LaplaceCoeff_4_p1[((i1*20)+23)];
}
for (; (i1<=18); i1 += 1) {
buffer_Send_0_p1[i1] = fieldData_LaplaceCoeff_4_p1[((i1*20)+3)];
}
}
}
if ((neighbor_isValid[1][1]&&neighbor_isRemote[1][1])) {
/* Statements in this Scop: S847 */
for (int i0 = 0; (i0<=8); i0 += 1) {
double* buffer_Send_1_p1 = (&buffer_Send[1][(i0*19)]);
double* fieldData_LaplaceCoeff_4_p1 = (&fieldData_LaplaceCoeff[4][(i0*380)]);
int i1 = 0;
for (; (i1<=17); i1 += 2) {
buffer_Send_1_p1[i1] = fieldData_LaplaceCoeff_4_p1[((i1*20)+17)];
buffer_Send_1_p1[(i1+1)] = fieldData_LaplaceCoeff_4_p1[((i1*20)+37)];
}
for (; (i1<=18); i1 += 1) {
buffer_Send_1_p1[i1] = fieldData_LaplaceCoeff_4_p1[((i1*20)+17)];
}
}
}
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[1]) {
if ((neighbor_isValid[1][0]&&neighbor_isRemote[1][0])) {
MPI_Isend(buffer_Send[0], 171, MPI_DOUBLE, neighbor_remoteRank[1][0], ((unsigned int)commId << 16) + ((unsigned int)(neighbor_fragCommId[1][0]) & 0x0000ffff), mpiCommunicator, &mpiRequest_Send[0]);
reqOutstanding_Send[0] = true;
}
if ((neighbor_isValid[1][1]&&neighbor_isRemote[1][1])) {
MPI_Isend(buffer_Send[1], 171, MPI_DOUBLE, neighbor_remoteRank[1][1], ((unsigned int)commId << 16) + ((unsigned int)(neighbor_fragCommId[1][1]) & 0x0000ffff), mpiCommunicator, &mpiRequest_Send[1]);
reqOutstanding_Send[1] = true;
}
}
}
;
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[1]) {
if ((neighbor_isValid[1][0]&&neighbor_isRemote[1][0])) {
MPI_Irecv(buffer_Recv[0], 171, MPI_DOUBLE, neighbor_remoteRank[1][0], ((unsigned int)(neighbor_fragCommId[1][0]) << 16) + ((unsigned int)commId & 0x0000ffff), mpiCommunicator, &mpiRequest_Recv[0]);
reqOutstanding_Recv[0] = true;
}
if ((neighbor_isValid[1][1]&&neighbor_isRemote[1][1])) {
MPI_Irecv(buffer_Recv[1], 171, MPI_DOUBLE, neighbor_remoteRank[1][1], ((unsigned int)(neighbor_fragCommId[1][1]) << 16) + ((unsigned int)commId & 0x0000ffff), mpiCommunicator, &mpiRequest_Recv[1]);
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
/* Statements in this Scop: S848 */
for (int i0 = 0; (i0<=8); i0 += 1) {
double* buffer_Recv_0_p1 = (&buffer_Recv[0][(i0*19)]);
double* fieldData_LaplaceCoeff_4_p1 = (&fieldData_LaplaceCoeff[4][(i0*380)]);
int i1 = 1;
for (; (i1<=18); i1 += 2) {
fieldData_LaplaceCoeff_4_p1[((i1*20)-19)] = buffer_Recv_0_p1[(i1-1)];
fieldData_LaplaceCoeff_4_p1[((i1*20)+1)] = buffer_Recv_0_p1[i1];
}
for (; (i1<=19); i1 += 1) {
fieldData_LaplaceCoeff_4_p1[((i1*20)-19)] = buffer_Recv_0_p1[(i1-1)];
}
}
}
if ((neighbor_isValid[1][1]&&neighbor_isRemote[1][1])) {
/* Statements in this Scop: S849 */
for (int i0 = 0; (i0<=8); i0 += 1) {
double* buffer_Recv_1_p1 = (&buffer_Recv[1][(i0*19)]);
double* fieldData_LaplaceCoeff_4_p1 = (&fieldData_LaplaceCoeff[4][(i0*380)]);
int i1 = 19;
for (; (i1<=36); i1 += 2) {
fieldData_LaplaceCoeff_4_p1[((i1*20)-361)] = buffer_Recv_1_p1[(i1-19)];
fieldData_LaplaceCoeff_4_p1[((i1*20)-341)] = buffer_Recv_1_p1[(i1-18)];
}
for (; (i1<=37); i1 += 1) {
fieldData_LaplaceCoeff_4_p1[((i1*20)-361)] = buffer_Recv_1_p1[(i1-19)];
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
MPI_Isend(&fieldData_LaplaceCoeff[4][41], 1, mpiDatatype_9_19_380, neighbor_remoteRank[1][2], ((unsigned int)commId << 16) + ((unsigned int)(neighbor_fragCommId[1][2]) & 0x0000ffff), mpiCommunicator, &mpiRequest_Send[2]);
reqOutstanding_Send[2] = true;
}
if ((neighbor_isValid[1][3]&&neighbor_isRemote[1][3])) {
MPI_Isend(&fieldData_LaplaceCoeff[4][321], 1, mpiDatatype_9_19_380, neighbor_remoteRank[1][3], ((unsigned int)commId << 16) + ((unsigned int)(neighbor_fragCommId[1][3]) & 0x0000ffff), mpiCommunicator, &mpiRequest_Send[3]);
reqOutstanding_Send[3] = true;
}
}
}
;
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[1]) {
if ((neighbor_isValid[1][2]&&neighbor_isRemote[1][2])) {
MPI_Irecv(&fieldData_LaplaceCoeff[4][1], 1, mpiDatatype_9_19_380, neighbor_remoteRank[1][2], ((unsigned int)(neighbor_fragCommId[1][2]) << 16) + ((unsigned int)commId & 0x0000ffff), mpiCommunicator, &mpiRequest_Recv[2]);
reqOutstanding_Recv[2] = true;
}
if ((neighbor_isValid[1][3]&&neighbor_isRemote[1][3])) {
MPI_Irecv(&fieldData_LaplaceCoeff[4][361], 1, mpiDatatype_9_19_380, neighbor_remoteRank[1][3], ((unsigned int)(neighbor_fragCommId[1][3]) << 16) + ((unsigned int)commId & 0x0000ffff), mpiCommunicator, &mpiRequest_Recv[3]);
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
