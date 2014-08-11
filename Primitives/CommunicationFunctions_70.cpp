#include "Primitives/CommunicationFunctions.h"
void exchlaplacecoeffData_1(unsigned int slot) {
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[1]) {
if ((!neighbor_isValid[1][0])) {
{
double xPos;
double yPos;
/* Statements in this Scop: S659, S650, S653, S652, S655, S658, S657, S651, S660, S654, S656 */
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
double* fieldData_LaplaceCoeff_1_p1 = (&fieldData_LaplaceCoeff[1][0]);
int i1 = 1;
for (; (i1<=2); i1 += 2) {
fieldData_LaplaceCoeff_1_p1[((i1*6)+182)] = 0.000000e+00;
fieldData_LaplaceCoeff_1_p1[((i1*6)+188)] = 0.000000e+00;
}
for (; (i1<=3); i1 += 1) {
fieldData_LaplaceCoeff_1_p1[((i1*6)+182)] = 0.000000e+00;
}
}
{
double* fieldData_LaplaceCoeff_1_p1 = (&fieldData_LaplaceCoeff[1][0]);
int i1 = 1;
for (; (i1<=2); i1 += 2) {
fieldData_LaplaceCoeff_1_p1[((i1*6)+32)] = 0.000000e+00;
fieldData_LaplaceCoeff_1_p1[((i1*6)+38)] = 0.000000e+00;
}
for (; (i1<=3); i1 += 1) {
fieldData_LaplaceCoeff_1_p1[((i1*6)+32)] = 0.000000e+00;
}
}
}
{
double* fieldData_LaplaceCoeff_1_p1 = (&fieldData_LaplaceCoeff[1][0]);
int i1 = 1;
for (; (i1<=2); i1 += 2) {
fieldData_LaplaceCoeff_1_p1[((i1*6)+122)] = 0.000000e+00;
fieldData_LaplaceCoeff_1_p1[((i1*6)+128)] = 0.000000e+00;
}
for (; (i1<=3); i1 += 1) {
fieldData_LaplaceCoeff_1_p1[((i1*6)+122)] = 0.000000e+00;
}
}
}
{
double* fieldData_LaplaceCoeff_1_p1 = (&fieldData_LaplaceCoeff[1][0]);
int i1 = 1;
for (; (i1<=2); i1 += 2) {
fieldData_LaplaceCoeff_1_p1[((i1*6)+92)] = 0.000000e+00;
fieldData_LaplaceCoeff_1_p1[((i1*6)+98)] = 0.000000e+00;
}
for (; (i1<=3); i1 += 1) {
fieldData_LaplaceCoeff_1_p1[((i1*6)+92)] = 0.000000e+00;
}
}
}
{
double* fieldData_LaplaceCoeff_1_p1 = (&fieldData_LaplaceCoeff[1][0]);
int i1 = 1;
for (; (i1<=2); i1 += 2) {
fieldData_LaplaceCoeff_1_p1[((i1*6)+62)] = 0.000000e+00;
fieldData_LaplaceCoeff_1_p1[((i1*6)+68)] = 0.000000e+00;
}
for (; (i1<=3); i1 += 1) {
fieldData_LaplaceCoeff_1_p1[((i1*6)+62)] = 0.000000e+00;
}
}
}
{
double* fieldData_LaplaceCoeff_1_p1 = (&fieldData_LaplaceCoeff[1][0]);
int i1 = 1;
for (; (i1<=2); i1 += 2) {
fieldData_LaplaceCoeff_1_p1[((i1*6)+212)] = 0.000000e+00;
fieldData_LaplaceCoeff_1_p1[((i1*6)+218)] = 0.000000e+00;
}
for (; (i1<=3); i1 += 1) {
fieldData_LaplaceCoeff_1_p1[((i1*6)+212)] = 0.000000e+00;
}
}
}
{
double* fieldData_LaplaceCoeff_1_p1 = (&fieldData_LaplaceCoeff[1][0]);
int i1 = 1;
for (; (i1<=2); i1 += 2) {
fieldData_LaplaceCoeff_1_p1[((i1*6)+2)] = 0.000000e+00;
fieldData_LaplaceCoeff_1_p1[((i1*6)+8)] = 0.000000e+00;
}
for (; (i1<=3); i1 += 1) {
fieldData_LaplaceCoeff_1_p1[((i1*6)+2)] = 0.000000e+00;
}
}
}
{
int i1 = 1;
for (; (i1<(2&(~1))); i1 += 1) {
yPos = ((((i1-1)/2.000000e+00)*(posEnd[1]-posBegin[1]))+posBegin[1]);
}
__m128d vec1 = _mm_set1_pd(1.000000e+00);
__m128d vec2 = _mm_set1_pd(2.000000e+00);
__m128d vec5 = _mm_set1_pd(yPos);
for (; (i1<1); i1 += 4) {
/* yPos = ((((i1-1)/2.000000e+00)*(posEnd[1]-posBegin[1]))+posBegin[1]); */
__m128d vec0 = _mm_set_pd(i1+1,i1);
__m128d vec0_2 = _mm_set_pd(i1+1,i1);
__m128d vec3 = _mm_load1_pd((&posEnd[1]));
__m128d vec3_2 = _mm_load1_pd((&posEnd[1]));
__m128d vec4 = _mm_load1_pd((&posBegin[1]));
__m128d vec4_2 = _mm_load1_pd((&posBegin[1]));
vec5 = _mm_add_pd(_mm_mul_pd(_mm_div_pd(_mm_sub_pd(vec0, vec1), vec2), _mm_sub_pd(vec3, vec4)), vec4);
vec5 = _mm_add_pd(_mm_mul_pd(_mm_div_pd(_mm_sub_pd(vec0_2, vec1), vec2), _mm_sub_pd(vec3_2, vec4_2)), vec4_2);
}
for (; (i1<4); i1 += 1) {
yPos = ((((i1-1)/2.000000e+00)*(posEnd[1]-posBegin[1]))+posBegin[1]);
}
}
}
{
int i1 = 1;
for (; (i1<(2&(~1))); i1 += 1) {
xPos = posBegin[0];
}
__m128d vec1 = _mm_set1_pd(xPos);
for (; (i1<1); i1 += 4) {
/* xPos = posBegin[0]; */
__m128d vec0 = _mm_load1_pd((&posBegin[0]));
__m128d vec0_2 = _mm_load1_pd((&posBegin[0]));
vec1 = vec0;
vec1 = vec0_2;
}
for (; (i1<4); i1 += 1) {
xPos = posBegin[0];
}
}
}
{
double* fieldData_LaplaceCoeff_1_p1 = (&fieldData_LaplaceCoeff[1][0]);
int i1 = 1;
for (; (i1<=2); i1 += 2) {
fieldData_LaplaceCoeff_1_p1[((i1*6)+152)] = 0.000000e+00;
fieldData_LaplaceCoeff_1_p1[((i1*6)+158)] = 0.000000e+00;
}
for (; (i1<=3); i1 += 1) {
fieldData_LaplaceCoeff_1_p1[((i1*6)+152)] = 0.000000e+00;
}
}
}
{
double* fieldData_LaplaceCoeff_1_p1 = (&fieldData_LaplaceCoeff[1][0]);
int i1 = 1;
for (; (i1<=2); i1 += 2) {
fieldData_LaplaceCoeff_1_p1[((i1*6)+242)] = 0.000000e+00;
fieldData_LaplaceCoeff_1_p1[((i1*6)+248)] = 0.000000e+00;
}
for (; (i1<=3); i1 += 1) {
fieldData_LaplaceCoeff_1_p1[((i1*6)+242)] = 0.000000e+00;
}
}
}
}
}
if ((!neighbor_isValid[1][1])) {
{
double xPos;
double yPos;
/* Statements in this Scop: S665, S670, S664, S667, S661, S663, S666, S669, S671, S668, S662 */
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
double* fieldData_LaplaceCoeff_1_p1 = (&fieldData_LaplaceCoeff[1][0]);
int i1 = 1;
for (; (i1<=2); i1 += 2) {
fieldData_LaplaceCoeff_1_p1[((i1*6)+184)] = 0.000000e+00;
fieldData_LaplaceCoeff_1_p1[((i1*6)+190)] = 0.000000e+00;
}
for (; (i1<=3); i1 += 1) {
fieldData_LaplaceCoeff_1_p1[((i1*6)+184)] = 0.000000e+00;
}
}
{
double* fieldData_LaplaceCoeff_1_p1 = (&fieldData_LaplaceCoeff[1][0]);
int i1 = 1;
for (; (i1<=2); i1 += 2) {
fieldData_LaplaceCoeff_1_p1[((i1*6)+4)] = 0.000000e+00;
fieldData_LaplaceCoeff_1_p1[((i1*6)+10)] = 0.000000e+00;
}
for (; (i1<=3); i1 += 1) {
fieldData_LaplaceCoeff_1_p1[((i1*6)+4)] = 0.000000e+00;
}
}
}
{
double* fieldData_LaplaceCoeff_1_p1 = (&fieldData_LaplaceCoeff[1][0]);
int i1 = 1;
for (; (i1<=2); i1 += 2) {
fieldData_LaplaceCoeff_1_p1[((i1*6)+124)] = 0.000000e+00;
fieldData_LaplaceCoeff_1_p1[((i1*6)+130)] = 0.000000e+00;
}
for (; (i1<=3); i1 += 1) {
fieldData_LaplaceCoeff_1_p1[((i1*6)+124)] = 0.000000e+00;
}
}
}
{
double* fieldData_LaplaceCoeff_1_p1 = (&fieldData_LaplaceCoeff[1][0]);
int i1 = 1;
for (; (i1<=2); i1 += 2) {
fieldData_LaplaceCoeff_1_p1[((i1*6)+34)] = 0.000000e+00;
fieldData_LaplaceCoeff_1_p1[((i1*6)+40)] = 0.000000e+00;
}
for (; (i1<=3); i1 += 1) {
fieldData_LaplaceCoeff_1_p1[((i1*6)+34)] = 0.000000e+00;
}
}
}
{
int i1 = 1;
for (; (i1<(2&(~1))); i1 += 1) {
yPos = ((((i1-1)/2.000000e+00)*(posEnd[1]-posBegin[1]))+posBegin[1]);
}
__m128d vec1 = _mm_set1_pd(1.000000e+00);
__m128d vec2 = _mm_set1_pd(2.000000e+00);
__m128d vec5 = _mm_set1_pd(yPos);
for (; (i1<1); i1 += 4) {
/* yPos = ((((i1-1)/2.000000e+00)*(posEnd[1]-posBegin[1]))+posBegin[1]); */
__m128d vec0 = _mm_set_pd(i1+1,i1);
__m128d vec0_2 = _mm_set_pd(i1+1,i1);
__m128d vec3 = _mm_load1_pd((&posEnd[1]));
__m128d vec3_2 = _mm_load1_pd((&posEnd[1]));
__m128d vec4 = _mm_load1_pd((&posBegin[1]));
__m128d vec4_2 = _mm_load1_pd((&posBegin[1]));
vec5 = _mm_add_pd(_mm_mul_pd(_mm_div_pd(_mm_sub_pd(vec0, vec1), vec2), _mm_sub_pd(vec3, vec4)), vec4);
vec5 = _mm_add_pd(_mm_mul_pd(_mm_div_pd(_mm_sub_pd(vec0_2, vec1), vec2), _mm_sub_pd(vec3_2, vec4_2)), vec4_2);
}
for (; (i1<4); i1 += 1) {
yPos = ((((i1-1)/2.000000e+00)*(posEnd[1]-posBegin[1]))+posBegin[1]);
}
}
}
{
double* fieldData_LaplaceCoeff_1_p1 = (&fieldData_LaplaceCoeff[1][0]);
int i1 = 1;
for (; (i1<=2); i1 += 2) {
fieldData_LaplaceCoeff_1_p1[((i1*6)+244)] = 0.000000e+00;
fieldData_LaplaceCoeff_1_p1[((i1*6)+250)] = 0.000000e+00;
}
for (; (i1<=3); i1 += 1) {
fieldData_LaplaceCoeff_1_p1[((i1*6)+244)] = 0.000000e+00;
}
}
}
{
double* fieldData_LaplaceCoeff_1_p1 = (&fieldData_LaplaceCoeff[1][0]);
int i1 = 1;
for (; (i1<=2); i1 += 2) {
fieldData_LaplaceCoeff_1_p1[((i1*6)+214)] = 0.000000e+00;
fieldData_LaplaceCoeff_1_p1[((i1*6)+220)] = 0.000000e+00;
}
for (; (i1<=3); i1 += 1) {
fieldData_LaplaceCoeff_1_p1[((i1*6)+214)] = 0.000000e+00;
}
}
}
{
double* fieldData_LaplaceCoeff_1_p1 = (&fieldData_LaplaceCoeff[1][0]);
int i1 = 1;
for (; (i1<=2); i1 += 2) {
fieldData_LaplaceCoeff_1_p1[((i1*6)+64)] = 0.000000e+00;
fieldData_LaplaceCoeff_1_p1[((i1*6)+70)] = 0.000000e+00;
}
for (; (i1<=3); i1 += 1) {
fieldData_LaplaceCoeff_1_p1[((i1*6)+64)] = 0.000000e+00;
}
}
}
{
double* fieldData_LaplaceCoeff_1_p1 = (&fieldData_LaplaceCoeff[1][0]);
int i1 = 1;
for (; (i1<=2); i1 += 2) {
fieldData_LaplaceCoeff_1_p1[((i1*6)+154)] = 0.000000e+00;
fieldData_LaplaceCoeff_1_p1[((i1*6)+160)] = 0.000000e+00;
}
for (; (i1<=3); i1 += 1) {
fieldData_LaplaceCoeff_1_p1[((i1*6)+154)] = 0.000000e+00;
}
}
}
{
double* fieldData_LaplaceCoeff_1_p1 = (&fieldData_LaplaceCoeff[1][0]);
int i1 = 1;
for (; (i1<=2); i1 += 2) {
fieldData_LaplaceCoeff_1_p1[((i1*6)+94)] = 0.000000e+00;
fieldData_LaplaceCoeff_1_p1[((i1*6)+100)] = 0.000000e+00;
}
for (; (i1<=3); i1 += 1) {
fieldData_LaplaceCoeff_1_p1[((i1*6)+94)] = 0.000000e+00;
}
}
}
{
int i1 = 1;
for (; (i1<(2&(~1))); i1 += 1) {
xPos = posEnd[0];
}
__m128d vec1 = _mm_set1_pd(xPos);
for (; (i1<1); i1 += 4) {
/* xPos = posEnd[0]; */
__m128d vec0 = _mm_load1_pd((&posEnd[0]));
__m128d vec0_2 = _mm_load1_pd((&posEnd[0]));
vec1 = vec0;
vec1 = vec0_2;
}
for (; (i1<4); i1 += 1) {
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
/* Statements in this Scop: S682, S679, S673, S676, S681, S675, S678, S672, S680, S674, S677 */
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
int i2 = 2;
for (; (i2<=3); i2 += 2) {
yPos = posBegin[1];
yPos = posBegin[1];
}
for (; (i2<=4); i2 += 1) {
yPos = posBegin[1];
}
}
{
double* fieldData_LaplaceCoeff_1_p1 = (&fieldData_LaplaceCoeff[1][0]);
int i2 = 2;
for (; (i2<=3); i2 += 2) {
fieldData_LaplaceCoeff_1_p1[(i2+186)] = 0.000000e+00;
fieldData_LaplaceCoeff_1_p1[(i2+187)] = 0.000000e+00;
}
for (; (i2<=4); i2 += 1) {
fieldData_LaplaceCoeff_1_p1[(i2+186)] = 0.000000e+00;
}
}
}
{
double* fieldData_LaplaceCoeff_1_p1 = (&fieldData_LaplaceCoeff[1][0]);
int i2 = 2;
for (; (i2<=3); i2 += 2) {
fieldData_LaplaceCoeff_1_p1[(i2+216)] = 0.000000e+00;
fieldData_LaplaceCoeff_1_p1[(i2+217)] = 0.000000e+00;
}
for (; (i2<=4); i2 += 1) {
fieldData_LaplaceCoeff_1_p1[(i2+216)] = 0.000000e+00;
}
}
}
{
double* fieldData_LaplaceCoeff_1_p1 = (&fieldData_LaplaceCoeff[1][0]);
int i2 = 2;
for (; (i2<=3); i2 += 2) {
fieldData_LaplaceCoeff_1_p1[(i2+156)] = 0.000000e+00;
fieldData_LaplaceCoeff_1_p1[(i2+157)] = 0.000000e+00;
}
for (; (i2<=4); i2 += 1) {
fieldData_LaplaceCoeff_1_p1[(i2+156)] = 0.000000e+00;
}
}
}
{
double* fieldData_LaplaceCoeff_1_p1 = (&fieldData_LaplaceCoeff[1][0]);
int i2 = 2;
for (; (i2<=3); i2 += 2) {
fieldData_LaplaceCoeff_1_p1[(i2+96)] = 0.000000e+00;
fieldData_LaplaceCoeff_1_p1[(i2+97)] = 0.000000e+00;
}
for (; (i2<=4); i2 += 1) {
fieldData_LaplaceCoeff_1_p1[(i2+96)] = 0.000000e+00;
}
}
}
{
double* fieldData_LaplaceCoeff_1_p1 = (&fieldData_LaplaceCoeff[1][0]);
int i2 = 2;
for (; (i2<=3); i2 += 2) {
fieldData_LaplaceCoeff_1_p1[(i2+126)] = 0.000000e+00;
fieldData_LaplaceCoeff_1_p1[(i2+127)] = 0.000000e+00;
}
for (; (i2<=4); i2 += 1) {
fieldData_LaplaceCoeff_1_p1[(i2+126)] = 0.000000e+00;
}
}
}
{
double* fieldData_LaplaceCoeff_1_p1 = (&fieldData_LaplaceCoeff[1][0]);
int i2 = 2;
for (; (i2<=3); i2 += 2) {
fieldData_LaplaceCoeff_1_p1[(i2+66)] = 0.000000e+00;
fieldData_LaplaceCoeff_1_p1[(i2+67)] = 0.000000e+00;
}
for (; (i2<=4); i2 += 1) {
fieldData_LaplaceCoeff_1_p1[(i2+66)] = 0.000000e+00;
}
}
}
{
double* fieldData_LaplaceCoeff_1_p1 = (&fieldData_LaplaceCoeff[1][0]);
int i2 = 2;
for (; (i2<=3); i2 += 2) {
fieldData_LaplaceCoeff_1_p1[(i2+36)] = 0.000000e+00;
fieldData_LaplaceCoeff_1_p1[(i2+37)] = 0.000000e+00;
}
for (; (i2<=4); i2 += 1) {
fieldData_LaplaceCoeff_1_p1[(i2+36)] = 0.000000e+00;
}
}
}
{
int i2 = 2;
for (; (i2<=3); i2 += 2) {
xPos = ((((i2-2)/2.000000e+00)*(posEnd[0]-posBegin[0]))+posBegin[0]);
xPos = ((((i2-1)/2.000000e+00)*(posEnd[0]-posBegin[0]))+posBegin[0]);
}
for (; (i2<=4); i2 += 1) {
xPos = ((((i2-2)/2.000000e+00)*(posEnd[0]-posBegin[0]))+posBegin[0]);
}
}
}
{
double* fieldData_LaplaceCoeff_1_p1 = (&fieldData_LaplaceCoeff[1][0]);
int i2 = 2;
for (; (i2<=3); i2 += 2) {
fieldData_LaplaceCoeff_1_p1[(i2+6)] = 0.000000e+00;
fieldData_LaplaceCoeff_1_p1[(i2+7)] = 0.000000e+00;
}
for (; (i2<=4); i2 += 1) {
fieldData_LaplaceCoeff_1_p1[(i2+6)] = 0.000000e+00;
}
}
}
{
double* fieldData_LaplaceCoeff_1_p1 = (&fieldData_LaplaceCoeff[1][0]);
int i2 = 2;
for (; (i2<=3); i2 += 2) {
fieldData_LaplaceCoeff_1_p1[(i2+246)] = 0.000000e+00;
fieldData_LaplaceCoeff_1_p1[(i2+247)] = 0.000000e+00;
}
for (; (i2<=4); i2 += 1) {
fieldData_LaplaceCoeff_1_p1[(i2+246)] = 0.000000e+00;
}
}
}
}
}
if ((!neighbor_isValid[1][3])) {
{
double xPos;
double yPos;
/* Statements in this Scop: S691, S685, S688, S693, S690, S684, S687, S692, S686, S689, S683 */
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
int i2 = 2;
for (; (i2<=3); i2 += 2) {
yPos = posEnd[1];
yPos = posEnd[1];
}
for (; (i2<=4); i2 += 1) {
yPos = posEnd[1];
}
}
{
double* fieldData_LaplaceCoeff_1_p1 = (&fieldData_LaplaceCoeff[1][0]);
int i2 = 2;
for (; (i2<=3); i2 += 2) {
fieldData_LaplaceCoeff_1_p1[(i2+258)] = 0.000000e+00;
fieldData_LaplaceCoeff_1_p1[(i2+259)] = 0.000000e+00;
}
for (; (i2<=4); i2 += 1) {
fieldData_LaplaceCoeff_1_p1[(i2+258)] = 0.000000e+00;
}
}
}
{
double* fieldData_LaplaceCoeff_1_p1 = (&fieldData_LaplaceCoeff[1][0]);
int i2 = 2;
for (; (i2<=3); i2 += 2) {
fieldData_LaplaceCoeff_1_p1[(i2+78)] = 0.000000e+00;
fieldData_LaplaceCoeff_1_p1[(i2+79)] = 0.000000e+00;
}
for (; (i2<=4); i2 += 1) {
fieldData_LaplaceCoeff_1_p1[(i2+78)] = 0.000000e+00;
}
}
}
{
double* fieldData_LaplaceCoeff_1_p1 = (&fieldData_LaplaceCoeff[1][0]);
int i2 = 2;
for (; (i2<=3); i2 += 2) {
fieldData_LaplaceCoeff_1_p1[(i2+228)] = 0.000000e+00;
fieldData_LaplaceCoeff_1_p1[(i2+229)] = 0.000000e+00;
}
for (; (i2<=4); i2 += 1) {
fieldData_LaplaceCoeff_1_p1[(i2+228)] = 0.000000e+00;
}
}
}
{
double* fieldData_LaplaceCoeff_1_p1 = (&fieldData_LaplaceCoeff[1][0]);
int i2 = 2;
for (; (i2<=3); i2 += 2) {
fieldData_LaplaceCoeff_1_p1[(i2+198)] = 0.000000e+00;
fieldData_LaplaceCoeff_1_p1[(i2+199)] = 0.000000e+00;
}
for (; (i2<=4); i2 += 1) {
fieldData_LaplaceCoeff_1_p1[(i2+198)] = 0.000000e+00;
}
}
}
{
double* fieldData_LaplaceCoeff_1_p1 = (&fieldData_LaplaceCoeff[1][0]);
int i2 = 2;
for (; (i2<=3); i2 += 2) {
fieldData_LaplaceCoeff_1_p1[(i2+138)] = 0.000000e+00;
fieldData_LaplaceCoeff_1_p1[(i2+139)] = 0.000000e+00;
}
for (; (i2<=4); i2 += 1) {
fieldData_LaplaceCoeff_1_p1[(i2+138)] = 0.000000e+00;
}
}
}
{
int i2 = 2;
for (; (i2<=3); i2 += 2) {
xPos = ((((i2-2)/2.000000e+00)*(posEnd[0]-posBegin[0]))+posBegin[0]);
xPos = ((((i2-1)/2.000000e+00)*(posEnd[0]-posBegin[0]))+posBegin[0]);
}
for (; (i2<=4); i2 += 1) {
xPos = ((((i2-2)/2.000000e+00)*(posEnd[0]-posBegin[0]))+posBegin[0]);
}
}
}
{
double* fieldData_LaplaceCoeff_1_p1 = (&fieldData_LaplaceCoeff[1][0]);
int i2 = 2;
for (; (i2<=3); i2 += 2) {
fieldData_LaplaceCoeff_1_p1[(i2+18)] = 0.000000e+00;
fieldData_LaplaceCoeff_1_p1[(i2+19)] = 0.000000e+00;
}
for (; (i2<=4); i2 += 1) {
fieldData_LaplaceCoeff_1_p1[(i2+18)] = 0.000000e+00;
}
}
}
{
double* fieldData_LaplaceCoeff_1_p1 = (&fieldData_LaplaceCoeff[1][0]);
int i2 = 2;
for (; (i2<=3); i2 += 2) {
fieldData_LaplaceCoeff_1_p1[(i2+168)] = 0.000000e+00;
fieldData_LaplaceCoeff_1_p1[(i2+169)] = 0.000000e+00;
}
for (; (i2<=4); i2 += 1) {
fieldData_LaplaceCoeff_1_p1[(i2+168)] = 0.000000e+00;
}
}
}
{
double* fieldData_LaplaceCoeff_1_p1 = (&fieldData_LaplaceCoeff[1][0]);
int i2 = 2;
for (; (i2<=3); i2 += 2) {
fieldData_LaplaceCoeff_1_p1[(i2+108)] = 0.000000e+00;
fieldData_LaplaceCoeff_1_p1[(i2+109)] = 0.000000e+00;
}
for (; (i2<=4); i2 += 1) {
fieldData_LaplaceCoeff_1_p1[(i2+108)] = 0.000000e+00;
}
}
}
{
double* fieldData_LaplaceCoeff_1_p1 = (&fieldData_LaplaceCoeff[1][0]);
int i2 = 2;
for (; (i2<=3); i2 += 2) {
fieldData_LaplaceCoeff_1_p1[(i2+48)] = 0.000000e+00;
fieldData_LaplaceCoeff_1_p1[(i2+49)] = 0.000000e+00;
}
for (; (i2<=4); i2 += 1) {
fieldData_LaplaceCoeff_1_p1[(i2+48)] = 0.000000e+00;
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
/* Statements in this Scop: S694 */
for (int i0 = 0; (i0<=8); i0 += 1) {
double* buffer_Send_1_p1 = (&buffer_Send[1][(i0*3)]);
double* fieldData_LaplaceCoeff_1_p1 = (&fieldData_LaplaceCoeff[1][(i0*30)]);
int i1 = 1;
for (; (i1<=2); i1 += 2) {
buffer_Send_1_p1[(i1-1)] = fieldData_LaplaceCoeff_1_p1[((i1*6)+4)];
buffer_Send_1_p1[i1] = fieldData_LaplaceCoeff_1_p1[((i1*6)+10)];
}
for (; (i1<=3); i1 += 1) {
buffer_Send_1_p1[(i1-1)] = fieldData_LaplaceCoeff_1_p1[((i1*6)+4)];
}
}
}
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[1]) {
if ((neighbor_isValid[1][1]&&neighbor_isRemote[1][1])) {
MPI_Isend(buffer_Send[1], 27, MPI_DOUBLE, neighbor_remoteRank[1][1], ((unsigned int)commId << 16) + ((unsigned int)(neighbor_fragCommId[1][1]) & 0x0000ffff), mpiCommunicator, &mpiRequest_Send[1]);
reqOutstanding_Send[1] = true;
}
}
}
;
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[1]) {
if ((neighbor_isValid[1][0]&&neighbor_isRemote[1][0])) {
MPI_Irecv(buffer_Recv[0], 27, MPI_DOUBLE, neighbor_remoteRank[1][0], ((unsigned int)(neighbor_fragCommId[1][0]) << 16) + ((unsigned int)commId & 0x0000ffff), mpiCommunicator, &mpiRequest_Recv[0]);
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
/* Statements in this Scop: S695 */
for (int i0 = 0; (i0<=8); i0 += 1) {
double* buffer_Recv_0_p1 = (&buffer_Recv[0][(i0*3)]);
double* fieldData_LaplaceCoeff_1_p1 = (&fieldData_LaplaceCoeff[1][(i0*30)]);
int i1 = 3;
for (; (i1<=4); i1 += 2) {
fieldData_LaplaceCoeff_1_p1[((i1*6)-10)] = buffer_Recv_0_p1[(i1-3)];
fieldData_LaplaceCoeff_1_p1[((i1*6)-4)] = buffer_Recv_0_p1[(i1-2)];
}
for (; (i1<=5); i1 += 1) {
fieldData_LaplaceCoeff_1_p1[((i1*6)-10)] = buffer_Recv_0_p1[(i1-3)];
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
MPI_Isend(&fieldData_LaplaceCoeff[1][20], 1, mpiDatatype_9_3_30, neighbor_remoteRank[1][3], ((unsigned int)commId << 16) + ((unsigned int)(neighbor_fragCommId[1][3]) & 0x0000ffff), mpiCommunicator, &mpiRequest_Send[3]);
reqOutstanding_Send[3] = true;
}
}
}
;
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[1]) {
if ((neighbor_isValid[1][2]&&neighbor_isRemote[1][2])) {
MPI_Irecv(&fieldData_LaplaceCoeff[1][8], 1, mpiDatatype_9_3_30, neighbor_remoteRank[1][2], ((unsigned int)(neighbor_fragCommId[1][2]) << 16) + ((unsigned int)commId & 0x0000ffff), mpiCommunicator, &mpiRequest_Recv[2]);
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
/* Statements in this Scop: S696 */
for (int i0 = 0; (i0<=8); i0 += 1) {
double* fieldData_LaplaceCoeff_1_p1 = (&fieldData_LaplaceCoeff[1][(i0*30)]);
double* buffer_Send_0_p1 = (&buffer_Send[0][(i0*5)]);
int i1 = 0;
for (; (i1<=3); i1 += 2) {
buffer_Send_0_p1[i1] = fieldData_LaplaceCoeff_1_p1[((i1*6)+3)];
buffer_Send_0_p1[(i1+1)] = fieldData_LaplaceCoeff_1_p1[((i1*6)+9)];
}
for (; (i1<=4); i1 += 1) {
buffer_Send_0_p1[i1] = fieldData_LaplaceCoeff_1_p1[((i1*6)+3)];
}
}
}
if ((neighbor_isValid[1][1]&&neighbor_isRemote[1][1])) {
/* Statements in this Scop: S697 */
for (int i0 = 0; (i0<=8); i0 += 1) {
double* buffer_Send_1_p1 = (&buffer_Send[1][(i0*5)]);
double* fieldData_LaplaceCoeff_1_p1 = (&fieldData_LaplaceCoeff[1][(i0*30)]);
int i1 = 0;
for (; (i1<=3); i1 += 2) {
buffer_Send_1_p1[i1] = fieldData_LaplaceCoeff_1_p1[((i1*6)+3)];
buffer_Send_1_p1[(i1+1)] = fieldData_LaplaceCoeff_1_p1[((i1*6)+9)];
}
for (; (i1<=4); i1 += 1) {
buffer_Send_1_p1[i1] = fieldData_LaplaceCoeff_1_p1[((i1*6)+3)];
}
}
}
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[1]) {
if ((neighbor_isValid[1][0]&&neighbor_isRemote[1][0])) {
MPI_Isend(buffer_Send[0], 45, MPI_DOUBLE, neighbor_remoteRank[1][0], ((unsigned int)commId << 16) + ((unsigned int)(neighbor_fragCommId[1][0]) & 0x0000ffff), mpiCommunicator, &mpiRequest_Send[0]);
reqOutstanding_Send[0] = true;
}
if ((neighbor_isValid[1][1]&&neighbor_isRemote[1][1])) {
MPI_Isend(buffer_Send[1], 45, MPI_DOUBLE, neighbor_remoteRank[1][1], ((unsigned int)commId << 16) + ((unsigned int)(neighbor_fragCommId[1][1]) & 0x0000ffff), mpiCommunicator, &mpiRequest_Send[1]);
reqOutstanding_Send[1] = true;
}
}
}
;
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[1]) {
if ((neighbor_isValid[1][0]&&neighbor_isRemote[1][0])) {
MPI_Irecv(buffer_Recv[0], 45, MPI_DOUBLE, neighbor_remoteRank[1][0], ((unsigned int)(neighbor_fragCommId[1][0]) << 16) + ((unsigned int)commId & 0x0000ffff), mpiCommunicator, &mpiRequest_Recv[0]);
reqOutstanding_Recv[0] = true;
}
if ((neighbor_isValid[1][1]&&neighbor_isRemote[1][1])) {
MPI_Irecv(buffer_Recv[1], 45, MPI_DOUBLE, neighbor_remoteRank[1][1], ((unsigned int)(neighbor_fragCommId[1][1]) << 16) + ((unsigned int)commId & 0x0000ffff), mpiCommunicator, &mpiRequest_Recv[1]);
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
/* Statements in this Scop: S698 */
for (int i0 = 0; (i0<=8); i0 += 1) {
double* buffer_Recv_0_p1 = (&buffer_Recv[0][(i0*5)]);
double* fieldData_LaplaceCoeff_1_p1 = (&fieldData_LaplaceCoeff[1][(i0*30)]);
int i1 = 1;
for (; (i1<=4); i1 += 2) {
fieldData_LaplaceCoeff_1_p1[((i1*6)-5)] = buffer_Recv_0_p1[(i1-1)];
fieldData_LaplaceCoeff_1_p1[((i1*6)+1)] = buffer_Recv_0_p1[i1];
}
for (; (i1<=5); i1 += 1) {
fieldData_LaplaceCoeff_1_p1[((i1*6)-5)] = buffer_Recv_0_p1[(i1-1)];
}
}
}
if ((neighbor_isValid[1][1]&&neighbor_isRemote[1][1])) {
/* Statements in this Scop: S699 */
for (int i0 = 0; (i0<=8); i0 += 1) {
double* buffer_Recv_1_p1 = (&buffer_Recv[1][(i0*5)]);
double* fieldData_LaplaceCoeff_1_p1 = (&fieldData_LaplaceCoeff[1][(i0*30)]);
int i1 = 5;
for (; (i1<=8); i1 += 2) {
fieldData_LaplaceCoeff_1_p1[((i1*6)-25)] = buffer_Recv_1_p1[(i1-5)];
fieldData_LaplaceCoeff_1_p1[((i1*6)-19)] = buffer_Recv_1_p1[(i1-4)];
}
for (; (i1<=9); i1 += 1) {
fieldData_LaplaceCoeff_1_p1[((i1*6)-25)] = buffer_Recv_1_p1[(i1-5)];
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
MPI_Isend(&fieldData_LaplaceCoeff[1][13], 1, mpiDatatype_9_5_30, neighbor_remoteRank[1][2], ((unsigned int)commId << 16) + ((unsigned int)(neighbor_fragCommId[1][2]) & 0x0000ffff), mpiCommunicator, &mpiRequest_Send[2]);
reqOutstanding_Send[2] = true;
}
if ((neighbor_isValid[1][3]&&neighbor_isRemote[1][3])) {
MPI_Isend(&fieldData_LaplaceCoeff[1][13], 1, mpiDatatype_9_5_30, neighbor_remoteRank[1][3], ((unsigned int)commId << 16) + ((unsigned int)(neighbor_fragCommId[1][3]) & 0x0000ffff), mpiCommunicator, &mpiRequest_Send[3]);
reqOutstanding_Send[3] = true;
}
}
}
;
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[1]) {
if ((neighbor_isValid[1][2]&&neighbor_isRemote[1][2])) {
MPI_Irecv(&fieldData_LaplaceCoeff[1][1], 1, mpiDatatype_9_5_30, neighbor_remoteRank[1][2], ((unsigned int)(neighbor_fragCommId[1][2]) << 16) + ((unsigned int)commId & 0x0000ffff), mpiCommunicator, &mpiRequest_Recv[2]);
reqOutstanding_Recv[2] = true;
}
if ((neighbor_isValid[1][3]&&neighbor_isRemote[1][3])) {
MPI_Irecv(&fieldData_LaplaceCoeff[1][25], 1, mpiDatatype_9_5_30, neighbor_remoteRank[1][3], ((unsigned int)(neighbor_fragCommId[1][3]) << 16) + ((unsigned int)commId & 0x0000ffff), mpiCommunicator, &mpiRequest_Recv[3]);
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
