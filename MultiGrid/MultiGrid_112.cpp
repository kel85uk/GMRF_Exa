#include "MultiGrid/MultiGrid.h"
void InitLaplace_8() {
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[1]) {
/* Statements in this Scop: S203, S200, S199, S198, S202, S205, S204, S197, S201 */
{
{
{
{
{
{
{
{
for (int i1 = iterationOffsetBegin[1][1]; (i1<=(iterationOffsetEnd[1][1]+256)); i1 += 1) {
double* fieldData_LaplaceCoeff_8_p1 = (&fieldData_LaplaceCoeff[8][(i1*260)]);
int i2 = iterationOffsetBegin[1][0];
for (; (i2<((iterationOffsetBegin[1][0]+1)&(~1))); i2 += 1) {
fieldData_LaplaceCoeff_8_p1[(i2+67602)] = -1.000000e+00;
}
__m128d vec0 = _mm_set1_pd(-1.000000e+00);
for (; (i2<(iterationOffsetEnd[1][0]+254)); i2 += 4) {
/* fieldData_LaplaceCoeff_8_p1[(i2+67602)] = -1.000000e+00; */
__m128d vec1;
__m128d vec1_2;
vec1 = vec0;
vec1_2 = vec0;
_mm_storeu_pd((&fieldData_LaplaceCoeff_8_p1[(i2+67602)]), vec1);
_mm_storeu_pd((&fieldData_LaplaceCoeff_8_p1[(i2+67604)]), vec1_2);
}
for (; (i2<(iterationOffsetEnd[1][0]+257)); i2 += 1) {
fieldData_LaplaceCoeff_8_p1[(i2+67602)] = -1.000000e+00;
}
}
for (int i1 = iterationOffsetBegin[1][1]; (i1<=(iterationOffsetEnd[1][1]+256)); i1 += 1) {
double* fieldData_LaplaceCoeff_8_p1 = (&fieldData_LaplaceCoeff[8][(i1*260)]);
int i2 = iterationOffsetBegin[1][0];
for (; (i2<((iterationOffsetBegin[1][0]+1)&(~1))); i2 += 1) {
fieldData_LaplaceCoeff_8_p1[(i2+134942)] = -1.000000e+00;
}
__m128d vec0 = _mm_set1_pd(-1.000000e+00);
for (; (i2<(iterationOffsetEnd[1][0]+254)); i2 += 4) {
/* fieldData_LaplaceCoeff_8_p1[(i2+134942)] = -1.000000e+00; */
__m128d vec1;
__m128d vec1_2;
vec1 = vec0;
vec1_2 = vec0;
_mm_storeu_pd((&fieldData_LaplaceCoeff_8_p1[(i2+134942)]), vec1);
_mm_storeu_pd((&fieldData_LaplaceCoeff_8_p1[(i2+134944)]), vec1_2);
}
for (; (i2<(iterationOffsetEnd[1][0]+257)); i2 += 1) {
fieldData_LaplaceCoeff_8_p1[(i2+134942)] = -1.000000e+00;
}
}
}
for (int i1 = iterationOffsetBegin[1][1]; (i1<=(iterationOffsetEnd[1][1]+256)); i1 += 1) {
double* fieldData_LaplaceCoeff_8_p1 = (&fieldData_LaplaceCoeff[8][(i1*260)]);
int i2 = iterationOffsetBegin[1][0];
for (; (i2<((iterationOffsetBegin[1][0]+1)&(~1))); i2 += 1) {
fieldData_LaplaceCoeff_8_p1[(i2+269622)] = -1.000000e+00;
}
__m128d vec0 = _mm_set1_pd(-1.000000e+00);
for (; (i2<(iterationOffsetEnd[1][0]+254)); i2 += 4) {
/* fieldData_LaplaceCoeff_8_p1[(i2+269622)] = -1.000000e+00; */
__m128d vec1;
__m128d vec1_2;
vec1 = vec0;
vec1_2 = vec0;
_mm_storeu_pd((&fieldData_LaplaceCoeff_8_p1[(i2+269622)]), vec1);
_mm_storeu_pd((&fieldData_LaplaceCoeff_8_p1[(i2+269624)]), vec1_2);
}
for (; (i2<(iterationOffsetEnd[1][0]+257)); i2 += 1) {
fieldData_LaplaceCoeff_8_p1[(i2+269622)] = -1.000000e+00;
}
}
}
for (int i1 = iterationOffsetBegin[1][1]; (i1<=(iterationOffsetEnd[1][1]+256)); i1 += 1) {
double* fieldData_LaplaceCoeff_8_p1 = (&fieldData_LaplaceCoeff[8][(i1*260)]);
int i2 = iterationOffsetBegin[1][0];
for (; (i2<((iterationOffsetBegin[1][0]+1)&(~1))); i2 += 1) {
fieldData_LaplaceCoeff_8_p1[(i2+404302)] = 0.000000e+00;
}
__m128d vec0 = _mm_set1_pd(0.000000e+00);
for (; (i2<(iterationOffsetEnd[1][0]+254)); i2 += 4) {
/* fieldData_LaplaceCoeff_8_p1[(i2+404302)] = 0.000000e+00; */
__m128d vec1;
__m128d vec1_2;
vec1 = vec0;
vec1_2 = vec0;
_mm_storeu_pd((&fieldData_LaplaceCoeff_8_p1[(i2+404302)]), vec1);
_mm_storeu_pd((&fieldData_LaplaceCoeff_8_p1[(i2+404304)]), vec1_2);
}
for (; (i2<(iterationOffsetEnd[1][0]+257)); i2 += 1) {
fieldData_LaplaceCoeff_8_p1[(i2+404302)] = 0.000000e+00;
}
}
}
for (int i1 = iterationOffsetBegin[1][1]; (i1<=(iterationOffsetEnd[1][1]+256)); i1 += 1) {
double* fieldData_LaplaceCoeff_8_p1 = (&fieldData_LaplaceCoeff[8][(i1*260)]);
int i2 = iterationOffsetBegin[1][0];
for (; (i2<((iterationOffsetBegin[1][0]+1)&(~1))); i2 += 1) {
fieldData_LaplaceCoeff_8_p1[(i2+202282)] = -1.000000e+00;
}
__m128d vec0 = _mm_set1_pd(-1.000000e+00);
for (; (i2<(iterationOffsetEnd[1][0]+254)); i2 += 4) {
/* fieldData_LaplaceCoeff_8_p1[(i2+202282)] = -1.000000e+00; */
__m128d vec1;
__m128d vec1_2;
vec1 = vec0;
vec1_2 = vec0;
_mm_storeu_pd((&fieldData_LaplaceCoeff_8_p1[(i2+202282)]), vec1);
_mm_storeu_pd((&fieldData_LaplaceCoeff_8_p1[(i2+202284)]), vec1_2);
}
for (; (i2<(iterationOffsetEnd[1][0]+257)); i2 += 1) {
fieldData_LaplaceCoeff_8_p1[(i2+202282)] = -1.000000e+00;
}
}
}
for (int i1 = iterationOffsetBegin[1][1]; (i1<=(iterationOffsetEnd[1][1]+256)); i1 += 1) {
double* fieldData_LaplaceCoeff_8_p1 = (&fieldData_LaplaceCoeff[8][(i1*260)]);
int i2 = iterationOffsetBegin[1][0];
for (; (i2<((iterationOffsetBegin[1][0]+1)&(~1))); i2 += 1) {
fieldData_LaplaceCoeff_8_p1[(i2+262)] = 4.000000e+00;
}
__m128d vec0 = _mm_set1_pd(4.000000e+00);
for (; (i2<(iterationOffsetEnd[1][0]+254)); i2 += 4) {
/* fieldData_LaplaceCoeff_8_p1[(i2+262)] = 4.000000e+00; */
__m128d vec1;
__m128d vec1_2;
vec1 = vec0;
vec1_2 = vec0;
_mm_storeu_pd((&fieldData_LaplaceCoeff_8_p1[(i2+262)]), vec1);
_mm_storeu_pd((&fieldData_LaplaceCoeff_8_p1[(i2+264)]), vec1_2);
}
for (; (i2<(iterationOffsetEnd[1][0]+257)); i2 += 1) {
fieldData_LaplaceCoeff_8_p1[(i2+262)] = 4.000000e+00;
}
}
}
for (int i1 = iterationOffsetBegin[1][1]; (i1<=(iterationOffsetEnd[1][1]+256)); i1 += 1) {
double* fieldData_LaplaceCoeff_8_p1 = (&fieldData_LaplaceCoeff[8][(i1*260)]);
int i2 = iterationOffsetBegin[1][0];
for (; (i2<((iterationOffsetBegin[1][0]+1)&(~1))); i2 += 1) {
fieldData_LaplaceCoeff_8_p1[(i2+538982)] = 0.000000e+00;
}
__m128d vec0 = _mm_set1_pd(0.000000e+00);
for (; (i2<(iterationOffsetEnd[1][0]+254)); i2 += 4) {
/* fieldData_LaplaceCoeff_8_p1[(i2+538982)] = 0.000000e+00; */
__m128d vec1;
__m128d vec1_2;
vec1 = vec0;
vec1_2 = vec0;
_mm_storeu_pd((&fieldData_LaplaceCoeff_8_p1[(i2+538982)]), vec1);
_mm_storeu_pd((&fieldData_LaplaceCoeff_8_p1[(i2+538984)]), vec1_2);
}
for (; (i2<(iterationOffsetEnd[1][0]+257)); i2 += 1) {
fieldData_LaplaceCoeff_8_p1[(i2+538982)] = 0.000000e+00;
}
}
}
for (int i1 = iterationOffsetBegin[1][1]; (i1<=(iterationOffsetEnd[1][1]+256)); i1 += 1) {
double* fieldData_LaplaceCoeff_8_p1 = (&fieldData_LaplaceCoeff[8][(i1*260)]);
int i2 = iterationOffsetBegin[1][0];
for (; (i2<((iterationOffsetBegin[1][0]+1)&(~1))); i2 += 1) {
fieldData_LaplaceCoeff_8_p1[(i2+471642)] = 0.000000e+00;
}
__m128d vec0 = _mm_set1_pd(0.000000e+00);
for (; (i2<(iterationOffsetEnd[1][0]+254)); i2 += 4) {
/* fieldData_LaplaceCoeff_8_p1[(i2+471642)] = 0.000000e+00; */
__m128d vec1;
__m128d vec1_2;
vec1 = vec0;
vec1_2 = vec0;
_mm_storeu_pd((&fieldData_LaplaceCoeff_8_p1[(i2+471642)]), vec1);
_mm_storeu_pd((&fieldData_LaplaceCoeff_8_p1[(i2+471644)]), vec1_2);
}
for (; (i2<(iterationOffsetEnd[1][0]+257)); i2 += 1) {
fieldData_LaplaceCoeff_8_p1[(i2+471642)] = 0.000000e+00;
}
}
}
for (int i1 = iterationOffsetBegin[1][1]; (i1<=(iterationOffsetEnd[1][1]+256)); i1 += 1) {
double* fieldData_LaplaceCoeff_8_p1 = (&fieldData_LaplaceCoeff[8][(i1*260)]);
int i2 = iterationOffsetBegin[1][0];
for (; (i2<((iterationOffsetBegin[1][0]+1)&(~1))); i2 += 1) {
fieldData_LaplaceCoeff_8_p1[(i2+336962)] = 0.000000e+00;
}
__m128d vec0 = _mm_set1_pd(0.000000e+00);
for (; (i2<(iterationOffsetEnd[1][0]+254)); i2 += 4) {
/* fieldData_LaplaceCoeff_8_p1[(i2+336962)] = 0.000000e+00; */
__m128d vec1;
__m128d vec1_2;
vec1 = vec0;
vec1_2 = vec0;
_mm_storeu_pd((&fieldData_LaplaceCoeff_8_p1[(i2+336962)]), vec1);
_mm_storeu_pd((&fieldData_LaplaceCoeff_8_p1[(i2+336964)]), vec1_2);
}
for (; (i2<(iterationOffsetEnd[1][0]+257)); i2 += 1) {
fieldData_LaplaceCoeff_8_p1[(i2+336962)] = 0.000000e+00;
}
}
}
}
}
}
