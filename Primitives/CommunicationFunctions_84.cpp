#include "Primitives/CommunicationFunctions.h"
void exchlaplacecoeff_gmrfData_6(unsigned int slot) {
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[0]) {
if ((!neighbor_isValid[0][0])) {
{
double xPos;
double yPos;
/* Statements in this Scop: S1356, S1359, S1350, S1353, S1355, S1358, S1352, S1351, S1360, S1354, S1357 */
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
yPos = ((((i1-1)/6.400000e+01)*(posEnd[1]-posBegin[1]))+posBegin[1]);
}
__m128d vec1 = _mm_set1_pd(1.000000e+00);
__m128d vec2 = _mm_set1_pd(6.400000e+01);
__m128d vec5 = _mm_set1_pd(yPos);
for (; (i1<63); i1 += 4) {
/* yPos = ((((i1-1)/6.400000e+01)*(posEnd[1]-posBegin[1]))+posBegin[1]); */
__m128d vec0 = _mm_set_pd(i1+1,i1);
__m128d vec0_2 = _mm_set_pd(i1+1,i1);
__m128d vec3 = _mm_load1_pd((&posEnd[1]));
__m128d vec3_2 = _mm_load1_pd((&posEnd[1]));
__m128d vec4 = _mm_load1_pd((&posBegin[1]));
__m128d vec4_2 = _mm_load1_pd((&posBegin[1]));
vec5 = _mm_add_pd(_mm_mul_pd(_mm_div_pd(_mm_sub_pd(vec0, vec1), vec2), _mm_sub_pd(vec3, vec4)), vec4);
vec5 = _mm_add_pd(_mm_mul_pd(_mm_div_pd(_mm_sub_pd(vec0_2, vec1), vec2), _mm_sub_pd(vec3_2, vec4_2)), vec4_2);
}
for (; (i1<66); i1 += 1) {
yPos = ((((i1-1)/6.400000e+01)*(posEnd[1]-posBegin[1]))+posBegin[1]);
}
}
{
double* fieldData_LaplaceCoeff_GMRF_6_p1 = (&fieldData_LaplaceCoeff_GMRF[6][0]);
int i1 = 1;
for (; (i1<=64); i1 += 2) {
fieldData_LaplaceCoeff_GMRF_6_p1[((i1*68)+13670)] = 0.000000e+00;
fieldData_LaplaceCoeff_GMRF_6_p1[((i1*68)+13738)] = 0.000000e+00;
}
for (; (i1<=65); i1 += 1) {
fieldData_LaplaceCoeff_GMRF_6_p1[((i1*68)+13670)] = 0.000000e+00;
}
}
}
{
double* fieldData_LaplaceCoeff_GMRF_6_p1 = (&fieldData_LaplaceCoeff_GMRF[6][0]);
int i1 = 1;
for (; (i1<=64); i1 += 2) {
fieldData_LaplaceCoeff_GMRF_6_p1[((i1*68)+36450)] = 0.000000e+00;
fieldData_LaplaceCoeff_GMRF_6_p1[((i1*68)+36518)] = 0.000000e+00;
}
for (; (i1<=65); i1 += 1) {
fieldData_LaplaceCoeff_GMRF_6_p1[((i1*68)+36450)] = 0.000000e+00;
}
}
}
{
double* fieldData_LaplaceCoeff_GMRF_6_p1 = (&fieldData_LaplaceCoeff_GMRF[6][0]);
int i1 = 1;
for (; (i1<=64); i1 += 2) {
fieldData_LaplaceCoeff_GMRF_6_p1[((i1*68)+31894)] = 0.000000e+00;
fieldData_LaplaceCoeff_GMRF_6_p1[((i1*68)+31962)] = 0.000000e+00;
}
for (; (i1<=65); i1 += 1) {
fieldData_LaplaceCoeff_GMRF_6_p1[((i1*68)+31894)] = 0.000000e+00;
}
}
}
{
double* fieldData_LaplaceCoeff_GMRF_6_p1 = (&fieldData_LaplaceCoeff_GMRF[6][0]);
int i1 = 1;
for (; (i1<=64); i1 += 2) {
fieldData_LaplaceCoeff_GMRF_6_p1[((i1*68)+27338)] = 0.000000e+00;
fieldData_LaplaceCoeff_GMRF_6_p1[((i1*68)+27406)] = 0.000000e+00;
}
for (; (i1<=65); i1 += 1) {
fieldData_LaplaceCoeff_GMRF_6_p1[((i1*68)+27338)] = 0.000000e+00;
}
}
}
{
double* fieldData_LaplaceCoeff_GMRF_6_p1 = (&fieldData_LaplaceCoeff_GMRF[6][0]);
int i1 = 1;
for (; (i1<=64); i1 += 2) {
fieldData_LaplaceCoeff_GMRF_6_p1[((i1*68)+18226)] = 0.000000e+00;
fieldData_LaplaceCoeff_GMRF_6_p1[((i1*68)+18294)] = 0.000000e+00;
}
for (; (i1<=65); i1 += 1) {
fieldData_LaplaceCoeff_GMRF_6_p1[((i1*68)+18226)] = 0.000000e+00;
}
}
}
{
double* fieldData_LaplaceCoeff_GMRF_6_p1 = (&fieldData_LaplaceCoeff_GMRF[6][0]);
int i1 = 1;
for (; (i1<=64); i1 += 2) {
fieldData_LaplaceCoeff_GMRF_6_p1[((i1*68)+22782)] = 0.000000e+00;
fieldData_LaplaceCoeff_GMRF_6_p1[((i1*68)+22850)] = 0.000000e+00;
}
for (; (i1<=65); i1 += 1) {
fieldData_LaplaceCoeff_GMRF_6_p1[((i1*68)+22782)] = 0.000000e+00;
}
}
}
{
double* fieldData_LaplaceCoeff_GMRF_6_p1 = (&fieldData_LaplaceCoeff_GMRF[6][0]);
int i1 = 1;
for (; (i1<=64); i1 += 2) {
fieldData_LaplaceCoeff_GMRF_6_p1[((i1*68)+4558)] = 0.000000e+00;
fieldData_LaplaceCoeff_GMRF_6_p1[((i1*68)+4626)] = 0.000000e+00;
}
for (; (i1<=65); i1 += 1) {
fieldData_LaplaceCoeff_GMRF_6_p1[((i1*68)+4558)] = 0.000000e+00;
}
}
}
{
double* fieldData_LaplaceCoeff_GMRF_6_p1 = (&fieldData_LaplaceCoeff_GMRF[6][0]);
int i1 = 1;
for (; (i1<=64); i1 += 2) {
fieldData_LaplaceCoeff_GMRF_6_p1[((i1*68)+2)] = 0.000000e+00;
fieldData_LaplaceCoeff_GMRF_6_p1[((i1*68)+70)] = 0.000000e+00;
}
for (; (i1<=65); i1 += 1) {
fieldData_LaplaceCoeff_GMRF_6_p1[((i1*68)+2)] = 0.000000e+00;
}
}
}
{
int i1 = 1;
for (; (i1<(2&(~1))); i1 += 1) {
xPos = posBegin[0];
}
__m128d vec1 = _mm_set1_pd(xPos);
for (; (i1<63); i1 += 4) {
/* xPos = posBegin[0]; */
__m128d vec0 = _mm_load1_pd((&posBegin[0]));
__m128d vec0_2 = _mm_load1_pd((&posBegin[0]));
vec1 = vec0;
vec1 = vec0_2;
}
for (; (i1<66); i1 += 1) {
xPos = posBegin[0];
}
}
}
{
double* fieldData_LaplaceCoeff_GMRF_6_p1 = (&fieldData_LaplaceCoeff_GMRF[6][0]);
int i1 = 1;
for (; (i1<=64); i1 += 2) {
fieldData_LaplaceCoeff_GMRF_6_p1[((i1*68)+9114)] = 0.000000e+00;
fieldData_LaplaceCoeff_GMRF_6_p1[((i1*68)+9182)] = 0.000000e+00;
}
for (; (i1<=65); i1 += 1) {
fieldData_LaplaceCoeff_GMRF_6_p1[((i1*68)+9114)] = 0.000000e+00;
}
}
}
}
}
if ((!neighbor_isValid[0][1])) {
{
double xPos;
double yPos;
/* Statements in this Scop: S1362, S1371, S1365, S1368, S1367, S1361, S1370, S1364, S1366, S1369, S1363 */
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
double* fieldData_LaplaceCoeff_GMRF_6_p1 = (&fieldData_LaplaceCoeff_GMRF[6][0]);
int i1 = 1;
for (; (i1<=64); i1 += 2) {
fieldData_LaplaceCoeff_GMRF_6_p1[((i1*68)+27402)] = 0.000000e+00;
fieldData_LaplaceCoeff_GMRF_6_p1[((i1*68)+27470)] = 0.000000e+00;
}
for (; (i1<=65); i1 += 1) {
fieldData_LaplaceCoeff_GMRF_6_p1[((i1*68)+27402)] = 0.000000e+00;
}
}
{
double* fieldData_LaplaceCoeff_GMRF_6_p1 = (&fieldData_LaplaceCoeff_GMRF[6][0]);
int i1 = 1;
for (; (i1<=64); i1 += 2) {
fieldData_LaplaceCoeff_GMRF_6_p1[((i1*68)+66)] = 0.000000e+00;
fieldData_LaplaceCoeff_GMRF_6_p1[((i1*68)+134)] = 0.000000e+00;
}
for (; (i1<=65); i1 += 1) {
fieldData_LaplaceCoeff_GMRF_6_p1[((i1*68)+66)] = 0.000000e+00;
}
}
}
{
double* fieldData_LaplaceCoeff_GMRF_6_p1 = (&fieldData_LaplaceCoeff_GMRF[6][0]);
int i1 = 1;
for (; (i1<=64); i1 += 2) {
fieldData_LaplaceCoeff_GMRF_6_p1[((i1*68)+31958)] = 0.000000e+00;
fieldData_LaplaceCoeff_GMRF_6_p1[((i1*68)+32026)] = 0.000000e+00;
}
for (; (i1<=65); i1 += 1) {
fieldData_LaplaceCoeff_GMRF_6_p1[((i1*68)+31958)] = 0.000000e+00;
}
}
}
{
double* fieldData_LaplaceCoeff_GMRF_6_p1 = (&fieldData_LaplaceCoeff_GMRF[6][0]);
int i1 = 1;
for (; (i1<=64); i1 += 2) {
fieldData_LaplaceCoeff_GMRF_6_p1[((i1*68)+22846)] = 0.000000e+00;
fieldData_LaplaceCoeff_GMRF_6_p1[((i1*68)+22914)] = 0.000000e+00;
}
for (; (i1<=65); i1 += 1) {
fieldData_LaplaceCoeff_GMRF_6_p1[((i1*68)+22846)] = 0.000000e+00;
}
}
}
{
double* fieldData_LaplaceCoeff_GMRF_6_p1 = (&fieldData_LaplaceCoeff_GMRF[6][0]);
int i1 = 1;
for (; (i1<=64); i1 += 2) {
fieldData_LaplaceCoeff_GMRF_6_p1[((i1*68)+9178)] = 0.000000e+00;
fieldData_LaplaceCoeff_GMRF_6_p1[((i1*68)+9246)] = 0.000000e+00;
}
for (; (i1<=65); i1 += 1) {
fieldData_LaplaceCoeff_GMRF_6_p1[((i1*68)+9178)] = 0.000000e+00;
}
}
}
{
double* fieldData_LaplaceCoeff_GMRF_6_p1 = (&fieldData_LaplaceCoeff_GMRF[6][0]);
int i1 = 1;
for (; (i1<=64); i1 += 2) {
fieldData_LaplaceCoeff_GMRF_6_p1[((i1*68)+36514)] = 0.000000e+00;
fieldData_LaplaceCoeff_GMRF_6_p1[((i1*68)+36582)] = 0.000000e+00;
}
for (; (i1<=65); i1 += 1) {
fieldData_LaplaceCoeff_GMRF_6_p1[((i1*68)+36514)] = 0.000000e+00;
}
}
}
{
int i1 = 1;
for (; (i1<(2&(~1))); i1 += 1) {
xPos = posEnd[0];
}
__m128d vec1 = _mm_set1_pd(xPos);
for (; (i1<63); i1 += 4) {
/* xPos = posEnd[0]; */
__m128d vec0 = _mm_load1_pd((&posEnd[0]));
__m128d vec0_2 = _mm_load1_pd((&posEnd[0]));
vec1 = vec0;
vec1 = vec0_2;
}
for (; (i1<66); i1 += 1) {
xPos = posEnd[0];
}
}
}
{
double* fieldData_LaplaceCoeff_GMRF_6_p1 = (&fieldData_LaplaceCoeff_GMRF[6][0]);
int i1 = 1;
for (; (i1<=64); i1 += 2) {
fieldData_LaplaceCoeff_GMRF_6_p1[((i1*68)+13734)] = 0.000000e+00;
fieldData_LaplaceCoeff_GMRF_6_p1[((i1*68)+13802)] = 0.000000e+00;
}
for (; (i1<=65); i1 += 1) {
fieldData_LaplaceCoeff_GMRF_6_p1[((i1*68)+13734)] = 0.000000e+00;
}
}
}
{
double* fieldData_LaplaceCoeff_GMRF_6_p1 = (&fieldData_LaplaceCoeff_GMRF[6][0]);
int i1 = 1;
for (; (i1<=64); i1 += 2) {
fieldData_LaplaceCoeff_GMRF_6_p1[((i1*68)+18290)] = 0.000000e+00;
fieldData_LaplaceCoeff_GMRF_6_p1[((i1*68)+18358)] = 0.000000e+00;
}
for (; (i1<=65); i1 += 1) {
fieldData_LaplaceCoeff_GMRF_6_p1[((i1*68)+18290)] = 0.000000e+00;
}
}
}
{
double* fieldData_LaplaceCoeff_GMRF_6_p1 = (&fieldData_LaplaceCoeff_GMRF[6][0]);
int i1 = 1;
for (; (i1<=64); i1 += 2) {
fieldData_LaplaceCoeff_GMRF_6_p1[((i1*68)+4622)] = 0.000000e+00;
fieldData_LaplaceCoeff_GMRF_6_p1[((i1*68)+4690)] = 0.000000e+00;
}
for (; (i1<=65); i1 += 1) {
fieldData_LaplaceCoeff_GMRF_6_p1[((i1*68)+4622)] = 0.000000e+00;
}
}
}
{
int i1 = 1;
for (; (i1<(2&(~1))); i1 += 1) {
yPos = ((((i1-1)/6.400000e+01)*(posEnd[1]-posBegin[1]))+posBegin[1]);
}
__m128d vec1 = _mm_set1_pd(1.000000e+00);
__m128d vec2 = _mm_set1_pd(6.400000e+01);
__m128d vec5 = _mm_set1_pd(yPos);
for (; (i1<63); i1 += 4) {
/* yPos = ((((i1-1)/6.400000e+01)*(posEnd[1]-posBegin[1]))+posBegin[1]); */
__m128d vec0 = _mm_set_pd(i1+1,i1);
__m128d vec0_2 = _mm_set_pd(i1+1,i1);
__m128d vec3 = _mm_load1_pd((&posEnd[1]));
__m128d vec3_2 = _mm_load1_pd((&posEnd[1]));
__m128d vec4 = _mm_load1_pd((&posBegin[1]));
__m128d vec4_2 = _mm_load1_pd((&posBegin[1]));
vec5 = _mm_add_pd(_mm_mul_pd(_mm_div_pd(_mm_sub_pd(vec0, vec1), vec2), _mm_sub_pd(vec3, vec4)), vec4);
vec5 = _mm_add_pd(_mm_mul_pd(_mm_div_pd(_mm_sub_pd(vec0_2, vec1), vec2), _mm_sub_pd(vec3_2, vec4_2)), vec4_2);
}
for (; (i1<66); i1 += 1) {
yPos = ((((i1-1)/6.400000e+01)*(posEnd[1]-posBegin[1]))+posBegin[1]);
}
}
}
}
}
if ((!neighbor_isValid[0][2])) {
{
double xPos;
double yPos;
/* Statements in this Scop: S1380, S1374, S1377, S1373, S1382, S1376, S1379, S1378, S1372, S1381, S1375 */
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
for (; (i2<=65); i2 += 2) {
xPos = ((((i2-2)/6.400000e+01)*(posEnd[0]-posBegin[0]))+posBegin[0]);
xPos = ((((i2-1)/6.400000e+01)*(posEnd[0]-posBegin[0]))+posBegin[0]);
}
for (; (i2<=66); i2 += 1) {
xPos = ((((i2-2)/6.400000e+01)*(posEnd[0]-posBegin[0]))+posBegin[0]);
}
}
{
double* fieldData_LaplaceCoeff_GMRF_6_p1 = (&fieldData_LaplaceCoeff_GMRF[6][0]);
int i2 = 2;
for (; (i2<=65); i2 += 2) {
fieldData_LaplaceCoeff_GMRF_6_p1[(i2+36516)] = 0.000000e+00;
fieldData_LaplaceCoeff_GMRF_6_p1[(i2+36517)] = 0.000000e+00;
}
for (; (i2<=66); i2 += 1) {
fieldData_LaplaceCoeff_GMRF_6_p1[(i2+36516)] = 0.000000e+00;
}
}
}
{
double* fieldData_LaplaceCoeff_GMRF_6_p1 = (&fieldData_LaplaceCoeff_GMRF[6][0]);
int i2 = 2;
for (; (i2<=65); i2 += 2) {
fieldData_LaplaceCoeff_GMRF_6_p1[(i2+13736)] = 0.000000e+00;
fieldData_LaplaceCoeff_GMRF_6_p1[(i2+13737)] = 0.000000e+00;
}
for (; (i2<=66); i2 += 1) {
fieldData_LaplaceCoeff_GMRF_6_p1[(i2+13736)] = 0.000000e+00;
}
}
}
{
double* fieldData_LaplaceCoeff_GMRF_6_p1 = (&fieldData_LaplaceCoeff_GMRF[6][0]);
int i2 = 2;
for (; (i2<=65); i2 += 2) {
fieldData_LaplaceCoeff_GMRF_6_p1[(i2+68)] = 0.000000e+00;
fieldData_LaplaceCoeff_GMRF_6_p1[(i2+69)] = 0.000000e+00;
}
for (; (i2<=66); i2 += 1) {
fieldData_LaplaceCoeff_GMRF_6_p1[(i2+68)] = 0.000000e+00;
}
}
}
{
double* fieldData_LaplaceCoeff_GMRF_6_p1 = (&fieldData_LaplaceCoeff_GMRF[6][0]);
int i2 = 2;
for (; (i2<=65); i2 += 2) {
fieldData_LaplaceCoeff_GMRF_6_p1[(i2+9180)] = 0.000000e+00;
fieldData_LaplaceCoeff_GMRF_6_p1[(i2+9181)] = 0.000000e+00;
}
for (; (i2<=66); i2 += 1) {
fieldData_LaplaceCoeff_GMRF_6_p1[(i2+9180)] = 0.000000e+00;
}
}
}
{
double* fieldData_LaplaceCoeff_GMRF_6_p1 = (&fieldData_LaplaceCoeff_GMRF[6][0]);
int i2 = 2;
for (; (i2<=65); i2 += 2) {
fieldData_LaplaceCoeff_GMRF_6_p1[(i2+27404)] = 0.000000e+00;
fieldData_LaplaceCoeff_GMRF_6_p1[(i2+27405)] = 0.000000e+00;
}
for (; (i2<=66); i2 += 1) {
fieldData_LaplaceCoeff_GMRF_6_p1[(i2+27404)] = 0.000000e+00;
}
}
}
{
double* fieldData_LaplaceCoeff_GMRF_6_p1 = (&fieldData_LaplaceCoeff_GMRF[6][0]);
int i2 = 2;
for (; (i2<=65); i2 += 2) {
fieldData_LaplaceCoeff_GMRF_6_p1[(i2+22848)] = 0.000000e+00;
fieldData_LaplaceCoeff_GMRF_6_p1[(i2+22849)] = 0.000000e+00;
}
for (; (i2<=66); i2 += 1) {
fieldData_LaplaceCoeff_GMRF_6_p1[(i2+22848)] = 0.000000e+00;
}
}
}
{
double* fieldData_LaplaceCoeff_GMRF_6_p1 = (&fieldData_LaplaceCoeff_GMRF[6][0]);
int i2 = 2;
for (; (i2<=65); i2 += 2) {
fieldData_LaplaceCoeff_GMRF_6_p1[(i2+18292)] = 0.000000e+00;
fieldData_LaplaceCoeff_GMRF_6_p1[(i2+18293)] = 0.000000e+00;
}
for (; (i2<=66); i2 += 1) {
fieldData_LaplaceCoeff_GMRF_6_p1[(i2+18292)] = 0.000000e+00;
}
}
}
{
double* fieldData_LaplaceCoeff_GMRF_6_p1 = (&fieldData_LaplaceCoeff_GMRF[6][0]);
int i2 = 2;
for (; (i2<=65); i2 += 2) {
fieldData_LaplaceCoeff_GMRF_6_p1[(i2+4624)] = 0.000000e+00;
fieldData_LaplaceCoeff_GMRF_6_p1[(i2+4625)] = 0.000000e+00;
}
for (; (i2<=66); i2 += 1) {
fieldData_LaplaceCoeff_GMRF_6_p1[(i2+4624)] = 0.000000e+00;
}
}
}
{
int i2 = 2;
for (; (i2<=65); i2 += 2) {
yPos = posBegin[1];
yPos = posBegin[1];
}
for (; (i2<=66); i2 += 1) {
yPos = posBegin[1];
}
}
}
{
double* fieldData_LaplaceCoeff_GMRF_6_p1 = (&fieldData_LaplaceCoeff_GMRF[6][0]);
int i2 = 2;
for (; (i2<=65); i2 += 2) {
fieldData_LaplaceCoeff_GMRF_6_p1[(i2+31960)] = 0.000000e+00;
fieldData_LaplaceCoeff_GMRF_6_p1[(i2+31961)] = 0.000000e+00;
}
for (; (i2<=66); i2 += 1) {
fieldData_LaplaceCoeff_GMRF_6_p1[(i2+31960)] = 0.000000e+00;
}
}
}
}
}
if ((!neighbor_isValid[0][3])) {
{
double xPos;
double yPos;
/* Statements in this Scop: S1389, S1383, S1386, S1391, S1385, S1388, S1390, S1384, S1393, S1387, S1392 */
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
double* fieldData_LaplaceCoeff_GMRF_6_p1 = (&fieldData_LaplaceCoeff_GMRF[6][0]);
int i2 = 2;
for (; (i2<=65); i2 += 2) {
fieldData_LaplaceCoeff_GMRF_6_p1[(i2+22644)] = 0.000000e+00;
fieldData_LaplaceCoeff_GMRF_6_p1[(i2+22645)] = 0.000000e+00;
}
for (; (i2<=66); i2 += 1) {
fieldData_LaplaceCoeff_GMRF_6_p1[(i2+22644)] = 0.000000e+00;
}
}
{
double* fieldData_LaplaceCoeff_GMRF_6_p1 = (&fieldData_LaplaceCoeff_GMRF[6][0]);
int i2 = 2;
for (; (i2<=65); i2 += 2) {
fieldData_LaplaceCoeff_GMRF_6_p1[(i2+27200)] = 0.000000e+00;
fieldData_LaplaceCoeff_GMRF_6_p1[(i2+27201)] = 0.000000e+00;
}
for (; (i2<=66); i2 += 1) {
fieldData_LaplaceCoeff_GMRF_6_p1[(i2+27200)] = 0.000000e+00;
}
}
}
{
int i2 = 2;
for (; (i2<=65); i2 += 2) {
xPos = ((((i2-2)/6.400000e+01)*(posEnd[0]-posBegin[0]))+posBegin[0]);
xPos = ((((i2-1)/6.400000e+01)*(posEnd[0]-posBegin[0]))+posBegin[0]);
}
for (; (i2<=66); i2 += 1) {
xPos = ((((i2-2)/6.400000e+01)*(posEnd[0]-posBegin[0]))+posBegin[0]);
}
}
}
{
double* fieldData_LaplaceCoeff_GMRF_6_p1 = (&fieldData_LaplaceCoeff_GMRF[6][0]);
int i2 = 2;
for (; (i2<=65); i2 += 2) {
fieldData_LaplaceCoeff_GMRF_6_p1[(i2+36312)] = 0.000000e+00;
fieldData_LaplaceCoeff_GMRF_6_p1[(i2+36313)] = 0.000000e+00;
}
for (; (i2<=66); i2 += 1) {
fieldData_LaplaceCoeff_GMRF_6_p1[(i2+36312)] = 0.000000e+00;
}
}
}
{
double* fieldData_LaplaceCoeff_GMRF_6_p1 = (&fieldData_LaplaceCoeff_GMRF[6][0]);
int i2 = 2;
for (; (i2<=65); i2 += 2) {
fieldData_LaplaceCoeff_GMRF_6_p1[(i2+31756)] = 0.000000e+00;
fieldData_LaplaceCoeff_GMRF_6_p1[(i2+31757)] = 0.000000e+00;
}
for (; (i2<=66); i2 += 1) {
fieldData_LaplaceCoeff_GMRF_6_p1[(i2+31756)] = 0.000000e+00;
}
}
}
{
double* fieldData_LaplaceCoeff_GMRF_6_p1 = (&fieldData_LaplaceCoeff_GMRF[6][0]);
int i2 = 2;
for (; (i2<=65); i2 += 2) {
fieldData_LaplaceCoeff_GMRF_6_p1[(i2+4420)] = 0.000000e+00;
fieldData_LaplaceCoeff_GMRF_6_p1[(i2+4421)] = 0.000000e+00;
}
for (; (i2<=66); i2 += 1) {
fieldData_LaplaceCoeff_GMRF_6_p1[(i2+4420)] = 0.000000e+00;
}
}
}
{
double* fieldData_LaplaceCoeff_GMRF_6_p1 = (&fieldData_LaplaceCoeff_GMRF[6][0]);
int i2 = 2;
for (; (i2<=65); i2 += 2) {
fieldData_LaplaceCoeff_GMRF_6_p1[(i2+18088)] = 0.000000e+00;
fieldData_LaplaceCoeff_GMRF_6_p1[(i2+18089)] = 0.000000e+00;
}
for (; (i2<=66); i2 += 1) {
fieldData_LaplaceCoeff_GMRF_6_p1[(i2+18088)] = 0.000000e+00;
}
}
}
{
double* fieldData_LaplaceCoeff_GMRF_6_p1 = (&fieldData_LaplaceCoeff_GMRF[6][0]);
int i2 = 2;
for (; (i2<=65); i2 += 2) {
fieldData_LaplaceCoeff_GMRF_6_p1[(i2+13532)] = 0.000000e+00;
fieldData_LaplaceCoeff_GMRF_6_p1[(i2+13533)] = 0.000000e+00;
}
for (; (i2<=66); i2 += 1) {
fieldData_LaplaceCoeff_GMRF_6_p1[(i2+13532)] = 0.000000e+00;
}
}
}
{
double* fieldData_LaplaceCoeff_GMRF_6_p1 = (&fieldData_LaplaceCoeff_GMRF[6][0]);
int i2 = 2;
for (; (i2<=65); i2 += 2) {
fieldData_LaplaceCoeff_GMRF_6_p1[(i2+40868)] = 0.000000e+00;
fieldData_LaplaceCoeff_GMRF_6_p1[(i2+40869)] = 0.000000e+00;
}
for (; (i2<=66); i2 += 1) {
fieldData_LaplaceCoeff_GMRF_6_p1[(i2+40868)] = 0.000000e+00;
}
}
}
{
double* fieldData_LaplaceCoeff_GMRF_6_p1 = (&fieldData_LaplaceCoeff_GMRF[6][0]);
int i2 = 2;
for (; (i2<=65); i2 += 2) {
fieldData_LaplaceCoeff_GMRF_6_p1[(i2+8976)] = 0.000000e+00;
fieldData_LaplaceCoeff_GMRF_6_p1[(i2+8977)] = 0.000000e+00;
}
for (; (i2<=66); i2 += 1) {
fieldData_LaplaceCoeff_GMRF_6_p1[(i2+8976)] = 0.000000e+00;
}
}
}
{
int i2 = 2;
for (; (i2<=65); i2 += 2) {
yPos = posEnd[1];
yPos = posEnd[1];
}
for (; (i2<=66); i2 += 1) {
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
if ((neighbor_isValid[0][1]&&neighbor_isRemote[0][1])) {
/* Statements in this Scop: S1394 */
for (int i3 = 0; (i3<=8); i3 += 1) {
double* fieldData_LaplaceCoeff_GMRF_6_p1 = (&fieldData_LaplaceCoeff_GMRF[6][(i3*4556)]);
double* buffer_Send_1_p1 = (&buffer_Send[1][(i3*65)]);
int i4 = 1;
for (; (i4<=64); i4 += 2) {
buffer_Send_1_p1[(i4-1)] = fieldData_LaplaceCoeff_GMRF_6_p1[((i4*68)+66)];
buffer_Send_1_p1[i4] = fieldData_LaplaceCoeff_GMRF_6_p1[((i4*68)+134)];
}
for (; (i4<=65); i4 += 1) {
buffer_Send_1_p1[(i4-1)] = fieldData_LaplaceCoeff_GMRF_6_p1[((i4*68)+66)];
}
}
}
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[0]) {
if ((neighbor_isValid[0][1]&&neighbor_isRemote[0][1])) {
MPI_Isend(buffer_Send[1], 585, MPI_DOUBLE, neighbor_remoteRank[0][1], ((unsigned int)commId << 16) + ((unsigned int)(neighbor_fragCommId[0][1]) & 0x0000ffff), mpiCommunicator, &mpiRequest_Send[1]);
reqOutstanding_Send[1] = true;
}
}
}
;
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[0]) {
if ((neighbor_isValid[0][0]&&neighbor_isRemote[0][0])) {
MPI_Irecv(buffer_Recv[0], 585, MPI_DOUBLE, neighbor_remoteRank[0][0], ((unsigned int)(neighbor_fragCommId[0][0]) << 16) + ((unsigned int)commId & 0x0000ffff), mpiCommunicator, &mpiRequest_Recv[0]);
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
/* Statements in this Scop: S1395 */
for (int i3 = 0; (i3<=8); i3 += 1) {
double* buffer_Recv_0_p1 = (&buffer_Recv[0][(i3*65)]);
double* fieldData_LaplaceCoeff_GMRF_6_p1 = (&fieldData_LaplaceCoeff_GMRF[6][(i3*4556)]);
int i4 = 3;
for (; (i4<=66); i4 += 2) {
fieldData_LaplaceCoeff_GMRF_6_p1[((i4*68)-134)] = buffer_Recv_0_p1[(i4-3)];
fieldData_LaplaceCoeff_GMRF_6_p1[((i4*68)-66)] = buffer_Recv_0_p1[(i4-2)];
}
for (; (i4<=67); i4 += 1) {
fieldData_LaplaceCoeff_GMRF_6_p1[((i4*68)-134)] = buffer_Recv_0_p1[(i4-3)];
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
MPI_Isend(&fieldData_LaplaceCoeff_GMRF[6][4422], 1, mpiDatatype_9_65_4556, neighbor_remoteRank[0][3], ((unsigned int)commId << 16) + ((unsigned int)(neighbor_fragCommId[0][3]) & 0x0000ffff), mpiCommunicator, &mpiRequest_Send[3]);
reqOutstanding_Send[3] = true;
}
}
}
;
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[0]) {
if ((neighbor_isValid[0][2]&&neighbor_isRemote[0][2])) {
MPI_Irecv(&fieldData_LaplaceCoeff_GMRF[6][70], 1, mpiDatatype_9_65_4556, neighbor_remoteRank[0][2], ((unsigned int)(neighbor_fragCommId[0][2]) << 16) + ((unsigned int)commId & 0x0000ffff), mpiCommunicator, &mpiRequest_Recv[2]);
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
/* Statements in this Scop: S1396 */
for (int i3 = 0; (i3<=8); i3 += 1) {
double* fieldData_LaplaceCoeff_GMRF_6_p1 = (&fieldData_LaplaceCoeff_GMRF[6][(i3*4556)]);
double* buffer_Send_0_p1 = (&buffer_Send[0][(i3*67)]);
int i4 = 0;
for (; (i4<=65); i4 += 2) {
buffer_Send_0_p1[i4] = fieldData_LaplaceCoeff_GMRF_6_p1[((i4*68)+3)];
buffer_Send_0_p1[(i4+1)] = fieldData_LaplaceCoeff_GMRF_6_p1[((i4*68)+71)];
}
for (; (i4<=66); i4 += 1) {
buffer_Send_0_p1[i4] = fieldData_LaplaceCoeff_GMRF_6_p1[((i4*68)+3)];
}
}
}
if ((neighbor_isValid[0][1]&&neighbor_isRemote[0][1])) {
/* Statements in this Scop: S1397 */
for (int i3 = 0; (i3<=8); i3 += 1) {
double* fieldData_LaplaceCoeff_GMRF_6_p1 = (&fieldData_LaplaceCoeff_GMRF[6][(i3*4556)]);
double* buffer_Send_1_p1 = (&buffer_Send[1][(i3*67)]);
int i4 = 0;
for (; (i4<=65); i4 += 2) {
buffer_Send_1_p1[i4] = fieldData_LaplaceCoeff_GMRF_6_p1[((i4*68)+65)];
buffer_Send_1_p1[(i4+1)] = fieldData_LaplaceCoeff_GMRF_6_p1[((i4*68)+133)];
}
for (; (i4<=66); i4 += 1) {
buffer_Send_1_p1[i4] = fieldData_LaplaceCoeff_GMRF_6_p1[((i4*68)+65)];
}
}
}
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[0]) {
if ((neighbor_isValid[0][0]&&neighbor_isRemote[0][0])) {
MPI_Isend(buffer_Send[0], 603, MPI_DOUBLE, neighbor_remoteRank[0][0], ((unsigned int)commId << 16) + ((unsigned int)(neighbor_fragCommId[0][0]) & 0x0000ffff), mpiCommunicator, &mpiRequest_Send[0]);
reqOutstanding_Send[0] = true;
}
if ((neighbor_isValid[0][1]&&neighbor_isRemote[0][1])) {
MPI_Isend(buffer_Send[1], 603, MPI_DOUBLE, neighbor_remoteRank[0][1], ((unsigned int)commId << 16) + ((unsigned int)(neighbor_fragCommId[0][1]) & 0x0000ffff), mpiCommunicator, &mpiRequest_Send[1]);
reqOutstanding_Send[1] = true;
}
}
}
;
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[0]) {
if ((neighbor_isValid[0][0]&&neighbor_isRemote[0][0])) {
MPI_Irecv(buffer_Recv[0], 603, MPI_DOUBLE, neighbor_remoteRank[0][0], ((unsigned int)(neighbor_fragCommId[0][0]) << 16) + ((unsigned int)commId & 0x0000ffff), mpiCommunicator, &mpiRequest_Recv[0]);
reqOutstanding_Recv[0] = true;
}
if ((neighbor_isValid[0][1]&&neighbor_isRemote[0][1])) {
MPI_Irecv(buffer_Recv[1], 603, MPI_DOUBLE, neighbor_remoteRank[0][1], ((unsigned int)(neighbor_fragCommId[0][1]) << 16) + ((unsigned int)commId & 0x0000ffff), mpiCommunicator, &mpiRequest_Recv[1]);
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
/* Statements in this Scop: S1398 */
for (int i3 = 0; (i3<=8); i3 += 1) {
double* buffer_Recv_0_p1 = (&buffer_Recv[0][(i3*67)]);
double* fieldData_LaplaceCoeff_GMRF_6_p1 = (&fieldData_LaplaceCoeff_GMRF[6][(i3*4556)]);
int i4 = 1;
for (; (i4<=66); i4 += 2) {
fieldData_LaplaceCoeff_GMRF_6_p1[((i4*68)-67)] = buffer_Recv_0_p1[(i4-1)];
fieldData_LaplaceCoeff_GMRF_6_p1[((i4*68)+1)] = buffer_Recv_0_p1[i4];
}
for (; (i4<=67); i4 += 1) {
fieldData_LaplaceCoeff_GMRF_6_p1[((i4*68)-67)] = buffer_Recv_0_p1[(i4-1)];
}
}
}
if ((neighbor_isValid[0][1]&&neighbor_isRemote[0][1])) {
/* Statements in this Scop: S1399 */
for (int i3 = 0; (i3<=8); i3 += 1) {
double* buffer_Recv_1_p1 = (&buffer_Recv[1][(i3*67)]);
double* fieldData_LaplaceCoeff_GMRF_6_p1 = (&fieldData_LaplaceCoeff_GMRF[6][(i3*4556)]);
int i4 = 67;
for (; (i4<=132); i4 += 2) {
fieldData_LaplaceCoeff_GMRF_6_p1[((i4*68)-4489)] = buffer_Recv_1_p1[(i4-67)];
fieldData_LaplaceCoeff_GMRF_6_p1[((i4*68)-4421)] = buffer_Recv_1_p1[(i4-66)];
}
for (; (i4<=133); i4 += 1) {
fieldData_LaplaceCoeff_GMRF_6_p1[((i4*68)-4489)] = buffer_Recv_1_p1[(i4-67)];
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
MPI_Isend(&fieldData_LaplaceCoeff_GMRF[6][137], 1, mpiDatatype_9_67_4556, neighbor_remoteRank[0][2], ((unsigned int)commId << 16) + ((unsigned int)(neighbor_fragCommId[0][2]) & 0x0000ffff), mpiCommunicator, &mpiRequest_Send[2]);
reqOutstanding_Send[2] = true;
}
if ((neighbor_isValid[0][3]&&neighbor_isRemote[0][3])) {
MPI_Isend(&fieldData_LaplaceCoeff_GMRF[6][4353], 1, mpiDatatype_9_67_4556, neighbor_remoteRank[0][3], ((unsigned int)commId << 16) + ((unsigned int)(neighbor_fragCommId[0][3]) & 0x0000ffff), mpiCommunicator, &mpiRequest_Send[3]);
reqOutstanding_Send[3] = true;
}
}
}
;
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[0]) {
if ((neighbor_isValid[0][2]&&neighbor_isRemote[0][2])) {
MPI_Irecv(&fieldData_LaplaceCoeff_GMRF[6][1], 1, mpiDatatype_9_67_4556, neighbor_remoteRank[0][2], ((unsigned int)(neighbor_fragCommId[0][2]) << 16) + ((unsigned int)commId & 0x0000ffff), mpiCommunicator, &mpiRequest_Recv[2]);
reqOutstanding_Recv[2] = true;
}
if ((neighbor_isValid[0][3]&&neighbor_isRemote[0][3])) {
MPI_Irecv(&fieldData_LaplaceCoeff_GMRF[6][4489], 1, mpiDatatype_9_67_4556, neighbor_remoteRank[0][3], ((unsigned int)(neighbor_fragCommId[0][3]) << 16) + ((unsigned int)commId & 0x0000ffff), mpiCommunicator, &mpiRequest_Recv[3]);
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
