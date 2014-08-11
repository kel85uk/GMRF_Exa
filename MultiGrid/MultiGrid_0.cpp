#include "MultiGrid/MultiGrid.h"
void initFieldsWithZero() {
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[1]) {
/* Statements in this Scop: S0 */
for (int i1 = 0; (i1<=3); i1 += 1) {
double* fieldData_Solution_0_p1 = (&fieldData_Solution[0][(i1*6)]);
int i2 = 1;
for (; (i2<(2&(~1))); i2 += 1) {
fieldData_Solution_0_p1[i2] = 0.000000e+00;
}
__m128d vec0 = _mm_set1_pd(0.000000e+00);
for (; (i2<2); i2 += 4) {
/* fieldData_Solution_0_p1[i2] = 0.000000e+00; */
__m128d vec1;
__m128d vec1_2;
vec1 = vec0;
vec1_2 = vec0;
_mm_storeu_pd((&fieldData_Solution_0_p1[i2]), vec1);
_mm_storeu_pd((&fieldData_Solution_0_p1[(i2+2)]), vec1_2);
}
for (; (i2<5); i2 += 1) {
fieldData_Solution_0_p1[i2] = 0.000000e+00;
}
}
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[1]) {
/* Statements in this Scop: S1 */
for (int i1 = 0; (i1<=4); i1 += 1) {
double* fieldData_Solution_1_p1 = (&fieldData_Solution[1][(i1*6)]);
int i2 = 1;
for (; (i2<(2&(~1))); i2 += 1) {
fieldData_Solution_1_p1[i2] = 0.000000e+00;
}
__m128d vec0 = _mm_set1_pd(0.000000e+00);
for (; (i2<3); i2 += 4) {
/* fieldData_Solution_1_p1[i2] = 0.000000e+00; */
__m128d vec1;
__m128d vec1_2;
vec1 = vec0;
vec1_2 = vec0;
_mm_storeu_pd((&fieldData_Solution_1_p1[i2]), vec1);
_mm_storeu_pd((&fieldData_Solution_1_p1[(i2+2)]), vec1_2);
}
for (; (i2<6); i2 += 1) {
fieldData_Solution_1_p1[i2] = 0.000000e+00;
}
}
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[1]) {
/* Statements in this Scop: S2 */
for (int i1 = 0; (i1<=6); i1 += 1) {
double* fieldData_Solution_2_p1 = (&fieldData_Solution[2][(i1*8)]);
int i2 = 1;
for (; (i2<(2&(~1))); i2 += 1) {
fieldData_Solution_2_p1[i2] = 0.000000e+00;
}
__m128d vec0 = _mm_set1_pd(0.000000e+00);
for (; (i2<5); i2 += 4) {
/* fieldData_Solution_2_p1[i2] = 0.000000e+00; */
__m128d vec1;
__m128d vec1_2;
vec1 = vec0;
vec1_2 = vec0;
_mm_storeu_pd((&fieldData_Solution_2_p1[i2]), vec1);
_mm_storeu_pd((&fieldData_Solution_2_p1[(i2+2)]), vec1_2);
}
for (; (i2<8); i2 += 1) {
fieldData_Solution_2_p1[i2] = 0.000000e+00;
}
}
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[1]) {
/* Statements in this Scop: S3 */
for (int i1 = 0; (i1<=10); i1 += 1) {
double* fieldData_Solution_3_p1 = (&fieldData_Solution[3][(i1*12)]);
int i2 = 1;
for (; (i2<(2&(~1))); i2 += 1) {
fieldData_Solution_3_p1[i2] = 0.000000e+00;
}
__m128d vec0 = _mm_set1_pd(0.000000e+00);
for (; (i2<9); i2 += 4) {
/* fieldData_Solution_3_p1[i2] = 0.000000e+00; */
__m128d vec1;
__m128d vec1_2;
vec1 = vec0;
vec1_2 = vec0;
_mm_storeu_pd((&fieldData_Solution_3_p1[i2]), vec1);
_mm_storeu_pd((&fieldData_Solution_3_p1[(i2+2)]), vec1_2);
}
for (; (i2<12); i2 += 1) {
fieldData_Solution_3_p1[i2] = 0.000000e+00;
}
}
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[1]) {
/* Statements in this Scop: S4 */
for (int i4 = 0; (i4<=18); i4 += 1) {
double* fieldData_Solution_4_p1 = (&fieldData_Solution[4][(i4*20)]);
int i5 = 1;
for (; (i5<(2&(~1))); i5 += 1) {
fieldData_Solution_4_p1[i5] = 0.000000e+00;
}
__m128d vec0 = _mm_set1_pd(0.000000e+00);
for (; (i5<17); i5 += 4) {
/* fieldData_Solution_4_p1[i5] = 0.000000e+00; */
__m128d vec1;
__m128d vec1_2;
vec1 = vec0;
vec1_2 = vec0;
_mm_storeu_pd((&fieldData_Solution_4_p1[i5]), vec1);
_mm_storeu_pd((&fieldData_Solution_4_p1[(i5+2)]), vec1_2);
}
for (; (i5<20); i5 += 1) {
fieldData_Solution_4_p1[i5] = 0.000000e+00;
}
}
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[1]) {
/* Statements in this Scop: S5 */
for (int i4 = 0; (i4<=34); i4 += 1) {
double* fieldData_Solution_5_p1 = (&fieldData_Solution[5][(i4*36)]);
int i5 = 1;
for (; (i5<(2&(~1))); i5 += 1) {
fieldData_Solution_5_p1[i5] = 0.000000e+00;
}
__m128d vec0 = _mm_set1_pd(0.000000e+00);
for (; (i5<33); i5 += 4) {
/* fieldData_Solution_5_p1[i5] = 0.000000e+00; */
__m128d vec1;
__m128d vec1_2;
vec1 = vec0;
vec1_2 = vec0;
_mm_storeu_pd((&fieldData_Solution_5_p1[i5]), vec1);
_mm_storeu_pd((&fieldData_Solution_5_p1[(i5+2)]), vec1_2);
}
for (; (i5<36); i5 += 1) {
fieldData_Solution_5_p1[i5] = 0.000000e+00;
}
}
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[1]) {
/* Statements in this Scop: S6 */
for (int i4 = 0; (i4<=66); i4 += 1) {
double* fieldData_Solution_6_p1 = (&fieldData_Solution[6][(i4*68)]);
int i5 = 1;
for (; (i5<(2&(~1))); i5 += 1) {
fieldData_Solution_6_p1[i5] = 0.000000e+00;
}
__m128d vec0 = _mm_set1_pd(0.000000e+00);
for (; (i5<65); i5 += 4) {
/* fieldData_Solution_6_p1[i5] = 0.000000e+00; */
__m128d vec1;
__m128d vec1_2;
vec1 = vec0;
vec1_2 = vec0;
_mm_storeu_pd((&fieldData_Solution_6_p1[i5]), vec1);
_mm_storeu_pd((&fieldData_Solution_6_p1[(i5+2)]), vec1_2);
}
for (; (i5<68); i5 += 1) {
fieldData_Solution_6_p1[i5] = 0.000000e+00;
}
}
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[1]) {
/* Statements in this Scop: S7 */
for (int i4 = 0; (i4<=130); i4 += 1) {
double* fieldData_Solution_7_p1 = (&fieldData_Solution[7][(i4*132)]);
int i5 = 1;
for (; (i5<(2&(~1))); i5 += 1) {
fieldData_Solution_7_p1[i5] = 0.000000e+00;
}
__m128d vec0 = _mm_set1_pd(0.000000e+00);
for (; (i5<129); i5 += 4) {
/* fieldData_Solution_7_p1[i5] = 0.000000e+00; */
__m128d vec1;
__m128d vec1_2;
vec1 = vec0;
vec1_2 = vec0;
_mm_storeu_pd((&fieldData_Solution_7_p1[i5]), vec1);
_mm_storeu_pd((&fieldData_Solution_7_p1[(i5+2)]), vec1_2);
}
for (; (i5<132); i5 += 1) {
fieldData_Solution_7_p1[i5] = 0.000000e+00;
}
}
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[1]) {
/* Statements in this Scop: S8 */
for (int i4 = 0; (i4<=258); i4 += 1) {
double* fieldData_Solution_8_p1 = (&fieldData_Solution[8][(i4*260)]);
int i5 = 1;
for (; (i5<(2&(~1))); i5 += 1) {
fieldData_Solution_8_p1[i5] = 0.000000e+00;
}
__m128d vec0 = _mm_set1_pd(0.000000e+00);
for (; (i5<257); i5 += 4) {
/* fieldData_Solution_8_p1[i5] = 0.000000e+00; */
__m128d vec1;
__m128d vec1_2;
vec1 = vec0;
vec1_2 = vec0;
_mm_storeu_pd((&fieldData_Solution_8_p1[i5]), vec1);
_mm_storeu_pd((&fieldData_Solution_8_p1[(i5+2)]), vec1_2);
}
for (; (i5<260); i5 += 1) {
fieldData_Solution_8_p1[i5] = 0.000000e+00;
}
}
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[1]) {
/* Statements in this Scop: S9 */
for (int i1 = 0; (i1<=1); i1 += 1) {
double* fieldData_SolutionMean_0_p1 = (&fieldData_SolutionMean[0][(i1*2)]);
int i2 = 0;
for (; (i2<(1&(~1))); i2 += 1) {
fieldData_SolutionMean_0_p1[i2] = 0.000000e+00;
}
__m128d vec0 = _mm_set1_pd(0.000000e+00);
for (; (i2<-1); i2 += 4) {
/* fieldData_SolutionMean_0_p1[i2] = 0.000000e+00; */
__m128d vec1;
__m128d vec1_2;
vec1 = vec0;
vec1_2 = vec0;
_mm_storeu_pd((&fieldData_SolutionMean_0_p1[i2]), vec1);
_mm_storeu_pd((&fieldData_SolutionMean_0_p1[(i2+2)]), vec1_2);
}
for (; (i2<2); i2 += 1) {
fieldData_SolutionMean_0_p1[i2] = 0.000000e+00;
}
}
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[1]) {
/* Statements in this Scop: S10 */
for (int i1 = 0; (i1<=2); i1 += 1) {
double* fieldData_SolutionMean_1_p1 = (&fieldData_SolutionMean[1][(i1*4)]);
int i2 = 0;
for (; (i2<(1&(~1))); i2 += 1) {
fieldData_SolutionMean_1_p1[i2] = 0.000000e+00;
}
__m128d vec0 = _mm_set1_pd(0.000000e+00);
for (; (i2<0); i2 += 4) {
/* fieldData_SolutionMean_1_p1[i2] = 0.000000e+00; */
__m128d vec1;
__m128d vec1_2;
vec1 = vec0;
vec1_2 = vec0;
_mm_storeu_pd((&fieldData_SolutionMean_1_p1[i2]), vec1);
_mm_storeu_pd((&fieldData_SolutionMean_1_p1[(i2+2)]), vec1_2);
}
for (; (i2<3); i2 += 1) {
fieldData_SolutionMean_1_p1[i2] = 0.000000e+00;
}
}
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[1]) {
/* Statements in this Scop: S11 */
for (int i1 = 0; (i1<=4); i1 += 1) {
double* fieldData_SolutionMean_2_p1 = (&fieldData_SolutionMean[2][(i1*6)]);
int i2 = 0;
for (; (i2<(1&(~1))); i2 += 1) {
fieldData_SolutionMean_2_p1[i2] = 0.000000e+00;
}
__m128d vec0 = _mm_set1_pd(0.000000e+00);
for (; (i2<2); i2 += 4) {
/* fieldData_SolutionMean_2_p1[i2] = 0.000000e+00; */
__m128d vec1;
__m128d vec1_2;
vec1 = vec0;
vec1_2 = vec0;
_mm_storeu_pd((&fieldData_SolutionMean_2_p1[i2]), vec1);
_mm_storeu_pd((&fieldData_SolutionMean_2_p1[(i2+2)]), vec1_2);
}
for (; (i2<5); i2 += 1) {
fieldData_SolutionMean_2_p1[i2] = 0.000000e+00;
}
}
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[1]) {
/* Statements in this Scop: S12 */
for (int i1 = 0; (i1<=8); i1 += 1) {
double* fieldData_SolutionMean_3_p1 = (&fieldData_SolutionMean[3][(i1*10)]);
int i2 = 0;
for (; (i2<(1&(~1))); i2 += 1) {
fieldData_SolutionMean_3_p1[i2] = 0.000000e+00;
}
__m128d vec0 = _mm_set1_pd(0.000000e+00);
for (; (i2<6); i2 += 4) {
/* fieldData_SolutionMean_3_p1[i2] = 0.000000e+00; */
__m128d vec1;
__m128d vec1_2;
vec1 = vec0;
vec1_2 = vec0;
_mm_storeu_pd((&fieldData_SolutionMean_3_p1[i2]), vec1);
_mm_storeu_pd((&fieldData_SolutionMean_3_p1[(i2+2)]), vec1_2);
}
for (; (i2<9); i2 += 1) {
fieldData_SolutionMean_3_p1[i2] = 0.000000e+00;
}
}
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[1]) {
/* Statements in this Scop: S13 */
for (int i4 = 0; (i4<=16); i4 += 1) {
double* fieldData_SolutionMean_4_p1 = (&fieldData_SolutionMean[4][(i4*18)]);
int i5 = 0;
for (; (i5<(1&(~1))); i5 += 1) {
fieldData_SolutionMean_4_p1[i5] = 0.000000e+00;
}
__m128d vec0 = _mm_set1_pd(0.000000e+00);
for (; (i5<14); i5 += 4) {
/* fieldData_SolutionMean_4_p1[i5] = 0.000000e+00; */
__m128d vec1;
__m128d vec1_2;
vec1 = vec0;
vec1_2 = vec0;
_mm_storeu_pd((&fieldData_SolutionMean_4_p1[i5]), vec1);
_mm_storeu_pd((&fieldData_SolutionMean_4_p1[(i5+2)]), vec1_2);
}
for (; (i5<17); i5 += 1) {
fieldData_SolutionMean_4_p1[i5] = 0.000000e+00;
}
}
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[1]) {
/* Statements in this Scop: S14 */
for (int i4 = 0; (i4<=32); i4 += 1) {
double* fieldData_SolutionMean_5_p1 = (&fieldData_SolutionMean[5][(i4*34)]);
int i5 = 0;
for (; (i5<(1&(~1))); i5 += 1) {
fieldData_SolutionMean_5_p1[i5] = 0.000000e+00;
}
__m128d vec0 = _mm_set1_pd(0.000000e+00);
for (; (i5<30); i5 += 4) {
/* fieldData_SolutionMean_5_p1[i5] = 0.000000e+00; */
__m128d vec1;
__m128d vec1_2;
vec1 = vec0;
vec1_2 = vec0;
_mm_storeu_pd((&fieldData_SolutionMean_5_p1[i5]), vec1);
_mm_storeu_pd((&fieldData_SolutionMean_5_p1[(i5+2)]), vec1_2);
}
for (; (i5<33); i5 += 1) {
fieldData_SolutionMean_5_p1[i5] = 0.000000e+00;
}
}
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[1]) {
/* Statements in this Scop: S15 */
for (int i4 = 0; (i4<=64); i4 += 1) {
double* fieldData_SolutionMean_6_p1 = (&fieldData_SolutionMean[6][(i4*66)]);
int i5 = 0;
for (; (i5<(1&(~1))); i5 += 1) {
fieldData_SolutionMean_6_p1[i5] = 0.000000e+00;
}
__m128d vec0 = _mm_set1_pd(0.000000e+00);
for (; (i5<62); i5 += 4) {
/* fieldData_SolutionMean_6_p1[i5] = 0.000000e+00; */
__m128d vec1;
__m128d vec1_2;
vec1 = vec0;
vec1_2 = vec0;
_mm_storeu_pd((&fieldData_SolutionMean_6_p1[i5]), vec1);
_mm_storeu_pd((&fieldData_SolutionMean_6_p1[(i5+2)]), vec1_2);
}
for (; (i5<65); i5 += 1) {
fieldData_SolutionMean_6_p1[i5] = 0.000000e+00;
}
}
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[1]) {
/* Statements in this Scop: S16 */
for (int i4 = 0; (i4<=128); i4 += 1) {
double* fieldData_SolutionMean_7_p1 = (&fieldData_SolutionMean[7][(i4*130)]);
int i5 = 0;
for (; (i5<(1&(~1))); i5 += 1) {
fieldData_SolutionMean_7_p1[i5] = 0.000000e+00;
}
__m128d vec0 = _mm_set1_pd(0.000000e+00);
for (; (i5<126); i5 += 4) {
/* fieldData_SolutionMean_7_p1[i5] = 0.000000e+00; */
__m128d vec1;
__m128d vec1_2;
vec1 = vec0;
vec1_2 = vec0;
_mm_storeu_pd((&fieldData_SolutionMean_7_p1[i5]), vec1);
_mm_storeu_pd((&fieldData_SolutionMean_7_p1[(i5+2)]), vec1_2);
}
for (; (i5<129); i5 += 1) {
fieldData_SolutionMean_7_p1[i5] = 0.000000e+00;
}
}
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[1]) {
/* Statements in this Scop: S17 */
for (int i4 = 0; (i4<=256); i4 += 1) {
double* fieldData_SolutionMean_8_p1 = (&fieldData_SolutionMean[8][(i4*258)]);
int i5 = 0;
for (; (i5<(1&(~1))); i5 += 1) {
fieldData_SolutionMean_8_p1[i5] = 0.000000e+00;
}
__m128d vec0 = _mm_set1_pd(0.000000e+00);
for (; (i5<254); i5 += 4) {
/* fieldData_SolutionMean_8_p1[i5] = 0.000000e+00; */
__m128d vec1;
__m128d vec1_2;
vec1 = vec0;
vec1_2 = vec0;
_mm_storeu_pd((&fieldData_SolutionMean_8_p1[i5]), vec1);
_mm_storeu_pd((&fieldData_SolutionMean_8_p1[(i5+2)]), vec1_2);
}
for (; (i5<257); i5 += 1) {
fieldData_SolutionMean_8_p1[i5] = 0.000000e+00;
}
}
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[1]) {
/* Statements in this Scop: S18 */
for (int i1 = 0; (i1<=3); i1 += 1) {
double* fieldData_Residual_0_p1 = (&fieldData_Residual[0][(i1*6)]);
int i2 = 1;
for (; (i2<(2&(~1))); i2 += 1) {
fieldData_Residual_0_p1[i2] = 0.000000e+00;
}
__m128d vec0 = _mm_set1_pd(0.000000e+00);
for (; (i2<2); i2 += 4) {
/* fieldData_Residual_0_p1[i2] = 0.000000e+00; */
__m128d vec1;
__m128d vec1_2;
vec1 = vec0;
vec1_2 = vec0;
_mm_storeu_pd((&fieldData_Residual_0_p1[i2]), vec1);
_mm_storeu_pd((&fieldData_Residual_0_p1[(i2+2)]), vec1_2);
}
for (; (i2<5); i2 += 1) {
fieldData_Residual_0_p1[i2] = 0.000000e+00;
}
}
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[1]) {
/* Statements in this Scop: S19 */
for (int i1 = 0; (i1<=4); i1 += 1) {
double* fieldData_Residual_1_p1 = (&fieldData_Residual[1][(i1*6)]);
int i2 = 1;
for (; (i2<(2&(~1))); i2 += 1) {
fieldData_Residual_1_p1[i2] = 0.000000e+00;
}
__m128d vec0 = _mm_set1_pd(0.000000e+00);
for (; (i2<3); i2 += 4) {
/* fieldData_Residual_1_p1[i2] = 0.000000e+00; */
__m128d vec1;
__m128d vec1_2;
vec1 = vec0;
vec1_2 = vec0;
_mm_storeu_pd((&fieldData_Residual_1_p1[i2]), vec1);
_mm_storeu_pd((&fieldData_Residual_1_p1[(i2+2)]), vec1_2);
}
for (; (i2<6); i2 += 1) {
fieldData_Residual_1_p1[i2] = 0.000000e+00;
}
}
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[1]) {
/* Statements in this Scop: S20 */
for (int i1 = 0; (i1<=6); i1 += 1) {
double* fieldData_Residual_2_p1 = (&fieldData_Residual[2][(i1*8)]);
int i2 = 1;
for (; (i2<(2&(~1))); i2 += 1) {
fieldData_Residual_2_p1[i2] = 0.000000e+00;
}
__m128d vec0 = _mm_set1_pd(0.000000e+00);
for (; (i2<5); i2 += 4) {
/* fieldData_Residual_2_p1[i2] = 0.000000e+00; */
__m128d vec1;
__m128d vec1_2;
vec1 = vec0;
vec1_2 = vec0;
_mm_storeu_pd((&fieldData_Residual_2_p1[i2]), vec1);
_mm_storeu_pd((&fieldData_Residual_2_p1[(i2+2)]), vec1_2);
}
for (; (i2<8); i2 += 1) {
fieldData_Residual_2_p1[i2] = 0.000000e+00;
}
}
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[1]) {
/* Statements in this Scop: S21 */
for (int i1 = 0; (i1<=10); i1 += 1) {
double* fieldData_Residual_3_p1 = (&fieldData_Residual[3][(i1*12)]);
int i2 = 1;
for (; (i2<(2&(~1))); i2 += 1) {
fieldData_Residual_3_p1[i2] = 0.000000e+00;
}
__m128d vec0 = _mm_set1_pd(0.000000e+00);
for (; (i2<9); i2 += 4) {
/* fieldData_Residual_3_p1[i2] = 0.000000e+00; */
__m128d vec1;
__m128d vec1_2;
vec1 = vec0;
vec1_2 = vec0;
_mm_storeu_pd((&fieldData_Residual_3_p1[i2]), vec1);
_mm_storeu_pd((&fieldData_Residual_3_p1[(i2+2)]), vec1_2);
}
for (; (i2<12); i2 += 1) {
fieldData_Residual_3_p1[i2] = 0.000000e+00;
}
}
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[1]) {
/* Statements in this Scop: S22 */
for (int i4 = 0; (i4<=18); i4 += 1) {
double* fieldData_Residual_4_p1 = (&fieldData_Residual[4][(i4*20)]);
int i5 = 1;
for (; (i5<(2&(~1))); i5 += 1) {
fieldData_Residual_4_p1[i5] = 0.000000e+00;
}
__m128d vec0 = _mm_set1_pd(0.000000e+00);
for (; (i5<17); i5 += 4) {
/* fieldData_Residual_4_p1[i5] = 0.000000e+00; */
__m128d vec1;
__m128d vec1_2;
vec1 = vec0;
vec1_2 = vec0;
_mm_storeu_pd((&fieldData_Residual_4_p1[i5]), vec1);
_mm_storeu_pd((&fieldData_Residual_4_p1[(i5+2)]), vec1_2);
}
for (; (i5<20); i5 += 1) {
fieldData_Residual_4_p1[i5] = 0.000000e+00;
}
}
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[1]) {
/* Statements in this Scop: S23 */
for (int i4 = 0; (i4<=34); i4 += 1) {
double* fieldData_Residual_5_p1 = (&fieldData_Residual[5][(i4*36)]);
int i5 = 1;
for (; (i5<(2&(~1))); i5 += 1) {
fieldData_Residual_5_p1[i5] = 0.000000e+00;
}
__m128d vec0 = _mm_set1_pd(0.000000e+00);
for (; (i5<33); i5 += 4) {
/* fieldData_Residual_5_p1[i5] = 0.000000e+00; */
__m128d vec1;
__m128d vec1_2;
vec1 = vec0;
vec1_2 = vec0;
_mm_storeu_pd((&fieldData_Residual_5_p1[i5]), vec1);
_mm_storeu_pd((&fieldData_Residual_5_p1[(i5+2)]), vec1_2);
}
for (; (i5<36); i5 += 1) {
fieldData_Residual_5_p1[i5] = 0.000000e+00;
}
}
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[1]) {
/* Statements in this Scop: S24 */
for (int i4 = 0; (i4<=66); i4 += 1) {
double* fieldData_Residual_6_p1 = (&fieldData_Residual[6][(i4*68)]);
int i5 = 1;
for (; (i5<(2&(~1))); i5 += 1) {
fieldData_Residual_6_p1[i5] = 0.000000e+00;
}
__m128d vec0 = _mm_set1_pd(0.000000e+00);
for (; (i5<65); i5 += 4) {
/* fieldData_Residual_6_p1[i5] = 0.000000e+00; */
__m128d vec1;
__m128d vec1_2;
vec1 = vec0;
vec1_2 = vec0;
_mm_storeu_pd((&fieldData_Residual_6_p1[i5]), vec1);
_mm_storeu_pd((&fieldData_Residual_6_p1[(i5+2)]), vec1_2);
}
for (; (i5<68); i5 += 1) {
fieldData_Residual_6_p1[i5] = 0.000000e+00;
}
}
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[1]) {
/* Statements in this Scop: S25 */
for (int i4 = 0; (i4<=130); i4 += 1) {
double* fieldData_Residual_7_p1 = (&fieldData_Residual[7][(i4*132)]);
int i5 = 1;
for (; (i5<(2&(~1))); i5 += 1) {
fieldData_Residual_7_p1[i5] = 0.000000e+00;
}
__m128d vec0 = _mm_set1_pd(0.000000e+00);
for (; (i5<129); i5 += 4) {
/* fieldData_Residual_7_p1[i5] = 0.000000e+00; */
__m128d vec1;
__m128d vec1_2;
vec1 = vec0;
vec1_2 = vec0;
_mm_storeu_pd((&fieldData_Residual_7_p1[i5]), vec1);
_mm_storeu_pd((&fieldData_Residual_7_p1[(i5+2)]), vec1_2);
}
for (; (i5<132); i5 += 1) {
fieldData_Residual_7_p1[i5] = 0.000000e+00;
}
}
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[1]) {
/* Statements in this Scop: S26 */
for (int i4 = 0; (i4<=258); i4 += 1) {
double* fieldData_Residual_8_p1 = (&fieldData_Residual[8][(i4*260)]);
int i5 = 1;
for (; (i5<(2&(~1))); i5 += 1) {
fieldData_Residual_8_p1[i5] = 0.000000e+00;
}
__m128d vec0 = _mm_set1_pd(0.000000e+00);
for (; (i5<257); i5 += 4) {
/* fieldData_Residual_8_p1[i5] = 0.000000e+00; */
__m128d vec1;
__m128d vec1_2;
vec1 = vec0;
vec1_2 = vec0;
_mm_storeu_pd((&fieldData_Residual_8_p1[i5]), vec1);
_mm_storeu_pd((&fieldData_Residual_8_p1[(i5+2)]), vec1_2);
}
for (; (i5<260); i5 += 1) {
fieldData_Residual_8_p1[i5] = 0.000000e+00;
}
}
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[1]) {
/* Statements in this Scop: S27 */
for (int i1 = 0; (i1<=1); i1 += 1) {
double* fieldData_RHS_0_p1 = (&fieldData_RHS[0][(i1*2)]);
int i2 = 0;
for (; (i2<(1&(~1))); i2 += 1) {
fieldData_RHS_0_p1[i2] = 0.000000e+00;
}
__m128d vec0 = _mm_set1_pd(0.000000e+00);
for (; (i2<-1); i2 += 4) {
/* fieldData_RHS_0_p1[i2] = 0.000000e+00; */
__m128d vec1;
__m128d vec1_2;
vec1 = vec0;
vec1_2 = vec0;
_mm_storeu_pd((&fieldData_RHS_0_p1[i2]), vec1);
_mm_storeu_pd((&fieldData_RHS_0_p1[(i2+2)]), vec1_2);
}
for (; (i2<2); i2 += 1) {
fieldData_RHS_0_p1[i2] = 0.000000e+00;
}
}
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[1]) {
/* Statements in this Scop: S28 */
for (int i1 = 0; (i1<=2); i1 += 1) {
double* fieldData_RHS_1_p1 = (&fieldData_RHS[1][(i1*4)]);
int i2 = 0;
for (; (i2<(1&(~1))); i2 += 1) {
fieldData_RHS_1_p1[i2] = 0.000000e+00;
}
__m128d vec0 = _mm_set1_pd(0.000000e+00);
for (; (i2<0); i2 += 4) {
/* fieldData_RHS_1_p1[i2] = 0.000000e+00; */
__m128d vec1;
__m128d vec1_2;
vec1 = vec0;
vec1_2 = vec0;
_mm_storeu_pd((&fieldData_RHS_1_p1[i2]), vec1);
_mm_storeu_pd((&fieldData_RHS_1_p1[(i2+2)]), vec1_2);
}
for (; (i2<3); i2 += 1) {
fieldData_RHS_1_p1[i2] = 0.000000e+00;
}
}
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[1]) {
/* Statements in this Scop: S29 */
for (int i1 = 0; (i1<=4); i1 += 1) {
double* fieldData_RHS_2_p1 = (&fieldData_RHS[2][(i1*6)]);
int i2 = 0;
for (; (i2<(1&(~1))); i2 += 1) {
fieldData_RHS_2_p1[i2] = 0.000000e+00;
}
__m128d vec0 = _mm_set1_pd(0.000000e+00);
for (; (i2<2); i2 += 4) {
/* fieldData_RHS_2_p1[i2] = 0.000000e+00; */
__m128d vec1;
__m128d vec1_2;
vec1 = vec0;
vec1_2 = vec0;
_mm_storeu_pd((&fieldData_RHS_2_p1[i2]), vec1);
_mm_storeu_pd((&fieldData_RHS_2_p1[(i2+2)]), vec1_2);
}
for (; (i2<5); i2 += 1) {
fieldData_RHS_2_p1[i2] = 0.000000e+00;
}
}
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[1]) {
/* Statements in this Scop: S30 */
for (int i1 = 0; (i1<=8); i1 += 1) {
double* fieldData_RHS_3_p1 = (&fieldData_RHS[3][(i1*10)]);
int i2 = 0;
for (; (i2<(1&(~1))); i2 += 1) {
fieldData_RHS_3_p1[i2] = 0.000000e+00;
}
__m128d vec0 = _mm_set1_pd(0.000000e+00);
for (; (i2<6); i2 += 4) {
/* fieldData_RHS_3_p1[i2] = 0.000000e+00; */
__m128d vec1;
__m128d vec1_2;
vec1 = vec0;
vec1_2 = vec0;
_mm_storeu_pd((&fieldData_RHS_3_p1[i2]), vec1);
_mm_storeu_pd((&fieldData_RHS_3_p1[(i2+2)]), vec1_2);
}
for (; (i2<9); i2 += 1) {
fieldData_RHS_3_p1[i2] = 0.000000e+00;
}
}
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[1]) {
/* Statements in this Scop: S31 */
for (int i4 = 0; (i4<=16); i4 += 1) {
double* fieldData_RHS_4_p1 = (&fieldData_RHS[4][(i4*18)]);
int i5 = 0;
for (; (i5<(1&(~1))); i5 += 1) {
fieldData_RHS_4_p1[i5] = 0.000000e+00;
}
__m128d vec0 = _mm_set1_pd(0.000000e+00);
for (; (i5<14); i5 += 4) {
/* fieldData_RHS_4_p1[i5] = 0.000000e+00; */
__m128d vec1;
__m128d vec1_2;
vec1 = vec0;
vec1_2 = vec0;
_mm_storeu_pd((&fieldData_RHS_4_p1[i5]), vec1);
_mm_storeu_pd((&fieldData_RHS_4_p1[(i5+2)]), vec1_2);
}
for (; (i5<17); i5 += 1) {
fieldData_RHS_4_p1[i5] = 0.000000e+00;
}
}
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[1]) {
/* Statements in this Scop: S32 */
for (int i4 = 0; (i4<=32); i4 += 1) {
double* fieldData_RHS_5_p1 = (&fieldData_RHS[5][(i4*34)]);
int i5 = 0;
for (; (i5<(1&(~1))); i5 += 1) {
fieldData_RHS_5_p1[i5] = 0.000000e+00;
}
__m128d vec0 = _mm_set1_pd(0.000000e+00);
for (; (i5<30); i5 += 4) {
/* fieldData_RHS_5_p1[i5] = 0.000000e+00; */
__m128d vec1;
__m128d vec1_2;
vec1 = vec0;
vec1_2 = vec0;
_mm_storeu_pd((&fieldData_RHS_5_p1[i5]), vec1);
_mm_storeu_pd((&fieldData_RHS_5_p1[(i5+2)]), vec1_2);
}
for (; (i5<33); i5 += 1) {
fieldData_RHS_5_p1[i5] = 0.000000e+00;
}
}
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[1]) {
/* Statements in this Scop: S33 */
for (int i4 = 0; (i4<=64); i4 += 1) {
double* fieldData_RHS_6_p1 = (&fieldData_RHS[6][(i4*66)]);
int i5 = 0;
for (; (i5<(1&(~1))); i5 += 1) {
fieldData_RHS_6_p1[i5] = 0.000000e+00;
}
__m128d vec0 = _mm_set1_pd(0.000000e+00);
for (; (i5<62); i5 += 4) {
/* fieldData_RHS_6_p1[i5] = 0.000000e+00; */
__m128d vec1;
__m128d vec1_2;
vec1 = vec0;
vec1_2 = vec0;
_mm_storeu_pd((&fieldData_RHS_6_p1[i5]), vec1);
_mm_storeu_pd((&fieldData_RHS_6_p1[(i5+2)]), vec1_2);
}
for (; (i5<65); i5 += 1) {
fieldData_RHS_6_p1[i5] = 0.000000e+00;
}
}
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[1]) {
/* Statements in this Scop: S34 */
for (int i4 = 0; (i4<=128); i4 += 1) {
double* fieldData_RHS_7_p1 = (&fieldData_RHS[7][(i4*130)]);
int i5 = 0;
for (; (i5<(1&(~1))); i5 += 1) {
fieldData_RHS_7_p1[i5] = 0.000000e+00;
}
__m128d vec0 = _mm_set1_pd(0.000000e+00);
for (; (i5<126); i5 += 4) {
/* fieldData_RHS_7_p1[i5] = 0.000000e+00; */
__m128d vec1;
__m128d vec1_2;
vec1 = vec0;
vec1_2 = vec0;
_mm_storeu_pd((&fieldData_RHS_7_p1[i5]), vec1);
_mm_storeu_pd((&fieldData_RHS_7_p1[(i5+2)]), vec1_2);
}
for (; (i5<129); i5 += 1) {
fieldData_RHS_7_p1[i5] = 0.000000e+00;
}
}
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[1]) {
/* Statements in this Scop: S35 */
for (int i4 = 0; (i4<=256); i4 += 1) {
double* fieldData_RHS_8_p1 = (&fieldData_RHS[8][(i4*258)]);
int i5 = 0;
for (; (i5<(1&(~1))); i5 += 1) {
fieldData_RHS_8_p1[i5] = 0.000000e+00;
}
__m128d vec0 = _mm_set1_pd(0.000000e+00);
for (; (i5<254); i5 += 4) {
/* fieldData_RHS_8_p1[i5] = 0.000000e+00; */
__m128d vec1;
__m128d vec1_2;
vec1 = vec0;
vec1_2 = vec0;
_mm_storeu_pd((&fieldData_RHS_8_p1[i5]), vec1);
_mm_storeu_pd((&fieldData_RHS_8_p1[(i5+2)]), vec1_2);
}
for (; (i5<257); i5 += 1) {
fieldData_RHS_8_p1[i5] = 0.000000e+00;
}
}
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[1]) {
/* Statements in this Scop: S36 */
for (int i1 = 0; (i1<=3); i1 += 1) {
double* fieldData_VecP_0_p1 = (&fieldData_VecP[0][(i1*6)]);
int i2 = 1;
for (; (i2<(2&(~1))); i2 += 1) {
fieldData_VecP_0_p1[i2] = 0.000000e+00;
}
__m128d vec0 = _mm_set1_pd(0.000000e+00);
for (; (i2<2); i2 += 4) {
/* fieldData_VecP_0_p1[i2] = 0.000000e+00; */
__m128d vec1;
__m128d vec1_2;
vec1 = vec0;
vec1_2 = vec0;
_mm_storeu_pd((&fieldData_VecP_0_p1[i2]), vec1);
_mm_storeu_pd((&fieldData_VecP_0_p1[(i2+2)]), vec1_2);
}
for (; (i2<5); i2 += 1) {
fieldData_VecP_0_p1[i2] = 0.000000e+00;
}
}
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[1]) {
/* Statements in this Scop: S37 */
for (int i1 = 0; (i1<=1); i1 += 1) {
double* fieldData_VecGradP_0_p1 = (&fieldData_VecGradP[0][(i1*2)]);
int i2 = 0;
for (; (i2<(1&(~1))); i2 += 1) {
fieldData_VecGradP_0_p1[i2] = 0.000000e+00;
}
__m128d vec0 = _mm_set1_pd(0.000000e+00);
for (; (i2<-1); i2 += 4) {
/* fieldData_VecGradP_0_p1[i2] = 0.000000e+00; */
__m128d vec1;
__m128d vec1_2;
vec1 = vec0;
vec1_2 = vec0;
_mm_storeu_pd((&fieldData_VecGradP_0_p1[i2]), vec1);
_mm_storeu_pd((&fieldData_VecGradP_0_p1[(i2+2)]), vec1_2);
}
for (; (i2<2); i2 += 1) {
fieldData_VecGradP_0_p1[i2] = 0.000000e+00;
}
}
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[0]) {
/* Statements in this Scop: S38 */
for (int i1 = 0; (i1<=3); i1 += 1) {
double* fieldData_Solution_GMRF_0_p1 = (&fieldData_Solution_GMRF[0][(i1*6)]);
int i2 = 1;
for (; (i2<(2&(~1))); i2 += 1) {
fieldData_Solution_GMRF_0_p1[i2] = 0.000000e+00;
}
__m128d vec0 = _mm_set1_pd(0.000000e+00);
for (; (i2<2); i2 += 4) {
/* fieldData_Solution_GMRF_0_p1[i2] = 0.000000e+00; */
__m128d vec1;
__m128d vec1_2;
vec1 = vec0;
vec1_2 = vec0;
_mm_storeu_pd((&fieldData_Solution_GMRF_0_p1[i2]), vec1);
_mm_storeu_pd((&fieldData_Solution_GMRF_0_p1[(i2+2)]), vec1_2);
}
for (; (i2<5); i2 += 1) {
fieldData_Solution_GMRF_0_p1[i2] = 0.000000e+00;
}
}
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[0]) {
/* Statements in this Scop: S39 */
for (int i1 = 0; (i1<=4); i1 += 1) {
double* fieldData_Solution_GMRF_1_p1 = (&fieldData_Solution_GMRF[1][(i1*6)]);
int i2 = 1;
for (; (i2<(2&(~1))); i2 += 1) {
fieldData_Solution_GMRF_1_p1[i2] = 0.000000e+00;
}
__m128d vec0 = _mm_set1_pd(0.000000e+00);
for (; (i2<3); i2 += 4) {
/* fieldData_Solution_GMRF_1_p1[i2] = 0.000000e+00; */
__m128d vec1;
__m128d vec1_2;
vec1 = vec0;
vec1_2 = vec0;
_mm_storeu_pd((&fieldData_Solution_GMRF_1_p1[i2]), vec1);
_mm_storeu_pd((&fieldData_Solution_GMRF_1_p1[(i2+2)]), vec1_2);
}
for (; (i2<6); i2 += 1) {
fieldData_Solution_GMRF_1_p1[i2] = 0.000000e+00;
}
}
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[0]) {
/* Statements in this Scop: S40 */
for (int i1 = 0; (i1<=6); i1 += 1) {
double* fieldData_Solution_GMRF_2_p1 = (&fieldData_Solution_GMRF[2][(i1*8)]);
int i2 = 1;
for (; (i2<(2&(~1))); i2 += 1) {
fieldData_Solution_GMRF_2_p1[i2] = 0.000000e+00;
}
__m128d vec0 = _mm_set1_pd(0.000000e+00);
for (; (i2<5); i2 += 4) {
/* fieldData_Solution_GMRF_2_p1[i2] = 0.000000e+00; */
__m128d vec1;
__m128d vec1_2;
vec1 = vec0;
vec1_2 = vec0;
_mm_storeu_pd((&fieldData_Solution_GMRF_2_p1[i2]), vec1);
_mm_storeu_pd((&fieldData_Solution_GMRF_2_p1[(i2+2)]), vec1_2);
}
for (; (i2<8); i2 += 1) {
fieldData_Solution_GMRF_2_p1[i2] = 0.000000e+00;
}
}
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[0]) {
/* Statements in this Scop: S41 */
for (int i1 = 0; (i1<=10); i1 += 1) {
double* fieldData_Solution_GMRF_3_p1 = (&fieldData_Solution_GMRF[3][(i1*12)]);
int i2 = 1;
for (; (i2<(2&(~1))); i2 += 1) {
fieldData_Solution_GMRF_3_p1[i2] = 0.000000e+00;
}
__m128d vec0 = _mm_set1_pd(0.000000e+00);
for (; (i2<9); i2 += 4) {
/* fieldData_Solution_GMRF_3_p1[i2] = 0.000000e+00; */
__m128d vec1;
__m128d vec1_2;
vec1 = vec0;
vec1_2 = vec0;
_mm_storeu_pd((&fieldData_Solution_GMRF_3_p1[i2]), vec1);
_mm_storeu_pd((&fieldData_Solution_GMRF_3_p1[(i2+2)]), vec1_2);
}
for (; (i2<12); i2 += 1) {
fieldData_Solution_GMRF_3_p1[i2] = 0.000000e+00;
}
}
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[0]) {
/* Statements in this Scop: S42 */
for (int i4 = 0; (i4<=18); i4 += 1) {
double* fieldData_Solution_GMRF_4_p1 = (&fieldData_Solution_GMRF[4][(i4*20)]);
int i5 = 1;
for (; (i5<(2&(~1))); i5 += 1) {
fieldData_Solution_GMRF_4_p1[i5] = 0.000000e+00;
}
__m128d vec0 = _mm_set1_pd(0.000000e+00);
for (; (i5<17); i5 += 4) {
/* fieldData_Solution_GMRF_4_p1[i5] = 0.000000e+00; */
__m128d vec1;
__m128d vec1_2;
vec1 = vec0;
vec1_2 = vec0;
_mm_storeu_pd((&fieldData_Solution_GMRF_4_p1[i5]), vec1);
_mm_storeu_pd((&fieldData_Solution_GMRF_4_p1[(i5+2)]), vec1_2);
}
for (; (i5<20); i5 += 1) {
fieldData_Solution_GMRF_4_p1[i5] = 0.000000e+00;
}
}
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[0]) {
/* Statements in this Scop: S43 */
for (int i4 = 0; (i4<=34); i4 += 1) {
double* fieldData_Solution_GMRF_5_p1 = (&fieldData_Solution_GMRF[5][(i4*36)]);
int i5 = 1;
for (; (i5<(2&(~1))); i5 += 1) {
fieldData_Solution_GMRF_5_p1[i5] = 0.000000e+00;
}
__m128d vec0 = _mm_set1_pd(0.000000e+00);
for (; (i5<33); i5 += 4) {
/* fieldData_Solution_GMRF_5_p1[i5] = 0.000000e+00; */
__m128d vec1;
__m128d vec1_2;
vec1 = vec0;
vec1_2 = vec0;
_mm_storeu_pd((&fieldData_Solution_GMRF_5_p1[i5]), vec1);
_mm_storeu_pd((&fieldData_Solution_GMRF_5_p1[(i5+2)]), vec1_2);
}
for (; (i5<36); i5 += 1) {
fieldData_Solution_GMRF_5_p1[i5] = 0.000000e+00;
}
}
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[0]) {
/* Statements in this Scop: S44 */
for (int i4 = 0; (i4<=66); i4 += 1) {
double* fieldData_Solution_GMRF_6_p1 = (&fieldData_Solution_GMRF[6][(i4*68)]);
int i5 = 1;
for (; (i5<(2&(~1))); i5 += 1) {
fieldData_Solution_GMRF_6_p1[i5] = 0.000000e+00;
}
__m128d vec0 = _mm_set1_pd(0.000000e+00);
for (; (i5<65); i5 += 4) {
/* fieldData_Solution_GMRF_6_p1[i5] = 0.000000e+00; */
__m128d vec1;
__m128d vec1_2;
vec1 = vec0;
vec1_2 = vec0;
_mm_storeu_pd((&fieldData_Solution_GMRF_6_p1[i5]), vec1);
_mm_storeu_pd((&fieldData_Solution_GMRF_6_p1[(i5+2)]), vec1_2);
}
for (; (i5<68); i5 += 1) {
fieldData_Solution_GMRF_6_p1[i5] = 0.000000e+00;
}
}
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[0]) {
/* Statements in this Scop: S45 */
for (int i4 = 0; (i4<=130); i4 += 1) {
double* fieldData_Solution_GMRF_7_p1 = (&fieldData_Solution_GMRF[7][(i4*132)]);
int i5 = 1;
for (; (i5<(2&(~1))); i5 += 1) {
fieldData_Solution_GMRF_7_p1[i5] = 0.000000e+00;
}
__m128d vec0 = _mm_set1_pd(0.000000e+00);
for (; (i5<129); i5 += 4) {
/* fieldData_Solution_GMRF_7_p1[i5] = 0.000000e+00; */
__m128d vec1;
__m128d vec1_2;
vec1 = vec0;
vec1_2 = vec0;
_mm_storeu_pd((&fieldData_Solution_GMRF_7_p1[i5]), vec1);
_mm_storeu_pd((&fieldData_Solution_GMRF_7_p1[(i5+2)]), vec1_2);
}
for (; (i5<132); i5 += 1) {
fieldData_Solution_GMRF_7_p1[i5] = 0.000000e+00;
}
}
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[0]) {
/* Statements in this Scop: S46 */
for (int i4 = 0; (i4<=258); i4 += 1) {
double* fieldData_Solution_GMRF_8_p1 = (&fieldData_Solution_GMRF[8][(i4*260)]);
int i5 = 1;
for (; (i5<(2&(~1))); i5 += 1) {
fieldData_Solution_GMRF_8_p1[i5] = 0.000000e+00;
}
__m128d vec0 = _mm_set1_pd(0.000000e+00);
for (; (i5<257); i5 += 4) {
/* fieldData_Solution_GMRF_8_p1[i5] = 0.000000e+00; */
__m128d vec1;
__m128d vec1_2;
vec1 = vec0;
vec1_2 = vec0;
_mm_storeu_pd((&fieldData_Solution_GMRF_8_p1[i5]), vec1);
_mm_storeu_pd((&fieldData_Solution_GMRF_8_p1[(i5+2)]), vec1_2);
}
for (; (i5<260); i5 += 1) {
fieldData_Solution_GMRF_8_p1[i5] = 0.000000e+00;
}
}
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[0]) {
/* Statements in this Scop: S47 */
for (int i1 = 0; (i1<=3); i1 += 1) {
double* fieldData_Residual_GMRF_0_p1 = (&fieldData_Residual_GMRF[0][(i1*6)]);
int i2 = 1;
for (; (i2<(2&(~1))); i2 += 1) {
fieldData_Residual_GMRF_0_p1[i2] = 0.000000e+00;
}
__m128d vec0 = _mm_set1_pd(0.000000e+00);
for (; (i2<2); i2 += 4) {
/* fieldData_Residual_GMRF_0_p1[i2] = 0.000000e+00; */
__m128d vec1;
__m128d vec1_2;
vec1 = vec0;
vec1_2 = vec0;
_mm_storeu_pd((&fieldData_Residual_GMRF_0_p1[i2]), vec1);
_mm_storeu_pd((&fieldData_Residual_GMRF_0_p1[(i2+2)]), vec1_2);
}
for (; (i2<5); i2 += 1) {
fieldData_Residual_GMRF_0_p1[i2] = 0.000000e+00;
}
}
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[0]) {
/* Statements in this Scop: S48 */
for (int i1 = 0; (i1<=4); i1 += 1) {
double* fieldData_Residual_GMRF_1_p1 = (&fieldData_Residual_GMRF[1][(i1*6)]);
int i2 = 1;
for (; (i2<(2&(~1))); i2 += 1) {
fieldData_Residual_GMRF_1_p1[i2] = 0.000000e+00;
}
__m128d vec0 = _mm_set1_pd(0.000000e+00);
for (; (i2<3); i2 += 4) {
/* fieldData_Residual_GMRF_1_p1[i2] = 0.000000e+00; */
__m128d vec1;
__m128d vec1_2;
vec1 = vec0;
vec1_2 = vec0;
_mm_storeu_pd((&fieldData_Residual_GMRF_1_p1[i2]), vec1);
_mm_storeu_pd((&fieldData_Residual_GMRF_1_p1[(i2+2)]), vec1_2);
}
for (; (i2<6); i2 += 1) {
fieldData_Residual_GMRF_1_p1[i2] = 0.000000e+00;
}
}
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[0]) {
/* Statements in this Scop: S49 */
for (int i1 = 0; (i1<=6); i1 += 1) {
double* fieldData_Residual_GMRF_2_p1 = (&fieldData_Residual_GMRF[2][(i1*8)]);
int i2 = 1;
for (; (i2<(2&(~1))); i2 += 1) {
fieldData_Residual_GMRF_2_p1[i2] = 0.000000e+00;
}
__m128d vec0 = _mm_set1_pd(0.000000e+00);
for (; (i2<5); i2 += 4) {
/* fieldData_Residual_GMRF_2_p1[i2] = 0.000000e+00; */
__m128d vec1;
__m128d vec1_2;
vec1 = vec0;
vec1_2 = vec0;
_mm_storeu_pd((&fieldData_Residual_GMRF_2_p1[i2]), vec1);
_mm_storeu_pd((&fieldData_Residual_GMRF_2_p1[(i2+2)]), vec1_2);
}
for (; (i2<8); i2 += 1) {
fieldData_Residual_GMRF_2_p1[i2] = 0.000000e+00;
}
}
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[0]) {
/* Statements in this Scop: S50 */
for (int i1 = 0; (i1<=10); i1 += 1) {
double* fieldData_Residual_GMRF_3_p1 = (&fieldData_Residual_GMRF[3][(i1*12)]);
int i2 = 1;
for (; (i2<(2&(~1))); i2 += 1) {
fieldData_Residual_GMRF_3_p1[i2] = 0.000000e+00;
}
__m128d vec0 = _mm_set1_pd(0.000000e+00);
for (; (i2<9); i2 += 4) {
/* fieldData_Residual_GMRF_3_p1[i2] = 0.000000e+00; */
__m128d vec1;
__m128d vec1_2;
vec1 = vec0;
vec1_2 = vec0;
_mm_storeu_pd((&fieldData_Residual_GMRF_3_p1[i2]), vec1);
_mm_storeu_pd((&fieldData_Residual_GMRF_3_p1[(i2+2)]), vec1_2);
}
for (; (i2<12); i2 += 1) {
fieldData_Residual_GMRF_3_p1[i2] = 0.000000e+00;
}
}
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[0]) {
/* Statements in this Scop: S51 */
for (int i4 = 0; (i4<=18); i4 += 1) {
double* fieldData_Residual_GMRF_4_p1 = (&fieldData_Residual_GMRF[4][(i4*20)]);
int i5 = 1;
for (; (i5<(2&(~1))); i5 += 1) {
fieldData_Residual_GMRF_4_p1[i5] = 0.000000e+00;
}
__m128d vec0 = _mm_set1_pd(0.000000e+00);
for (; (i5<17); i5 += 4) {
/* fieldData_Residual_GMRF_4_p1[i5] = 0.000000e+00; */
__m128d vec1;
__m128d vec1_2;
vec1 = vec0;
vec1_2 = vec0;
_mm_storeu_pd((&fieldData_Residual_GMRF_4_p1[i5]), vec1);
_mm_storeu_pd((&fieldData_Residual_GMRF_4_p1[(i5+2)]), vec1_2);
}
for (; (i5<20); i5 += 1) {
fieldData_Residual_GMRF_4_p1[i5] = 0.000000e+00;
}
}
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[0]) {
/* Statements in this Scop: S52 */
for (int i4 = 0; (i4<=34); i4 += 1) {
double* fieldData_Residual_GMRF_5_p1 = (&fieldData_Residual_GMRF[5][(i4*36)]);
int i5 = 1;
for (; (i5<(2&(~1))); i5 += 1) {
fieldData_Residual_GMRF_5_p1[i5] = 0.000000e+00;
}
__m128d vec0 = _mm_set1_pd(0.000000e+00);
for (; (i5<33); i5 += 4) {
/* fieldData_Residual_GMRF_5_p1[i5] = 0.000000e+00; */
__m128d vec1;
__m128d vec1_2;
vec1 = vec0;
vec1_2 = vec0;
_mm_storeu_pd((&fieldData_Residual_GMRF_5_p1[i5]), vec1);
_mm_storeu_pd((&fieldData_Residual_GMRF_5_p1[(i5+2)]), vec1_2);
}
for (; (i5<36); i5 += 1) {
fieldData_Residual_GMRF_5_p1[i5] = 0.000000e+00;
}
}
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[0]) {
/* Statements in this Scop: S53 */
for (int i4 = 0; (i4<=66); i4 += 1) {
double* fieldData_Residual_GMRF_6_p1 = (&fieldData_Residual_GMRF[6][(i4*68)]);
int i5 = 1;
for (; (i5<(2&(~1))); i5 += 1) {
fieldData_Residual_GMRF_6_p1[i5] = 0.000000e+00;
}
__m128d vec0 = _mm_set1_pd(0.000000e+00);
for (; (i5<65); i5 += 4) {
/* fieldData_Residual_GMRF_6_p1[i5] = 0.000000e+00; */
__m128d vec1;
__m128d vec1_2;
vec1 = vec0;
vec1_2 = vec0;
_mm_storeu_pd((&fieldData_Residual_GMRF_6_p1[i5]), vec1);
_mm_storeu_pd((&fieldData_Residual_GMRF_6_p1[(i5+2)]), vec1_2);
}
for (; (i5<68); i5 += 1) {
fieldData_Residual_GMRF_6_p1[i5] = 0.000000e+00;
}
}
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[0]) {
/* Statements in this Scop: S54 */
for (int i4 = 0; (i4<=130); i4 += 1) {
double* fieldData_Residual_GMRF_7_p1 = (&fieldData_Residual_GMRF[7][(i4*132)]);
int i5 = 1;
for (; (i5<(2&(~1))); i5 += 1) {
fieldData_Residual_GMRF_7_p1[i5] = 0.000000e+00;
}
__m128d vec0 = _mm_set1_pd(0.000000e+00);
for (; (i5<129); i5 += 4) {
/* fieldData_Residual_GMRF_7_p1[i5] = 0.000000e+00; */
__m128d vec1;
__m128d vec1_2;
vec1 = vec0;
vec1_2 = vec0;
_mm_storeu_pd((&fieldData_Residual_GMRF_7_p1[i5]), vec1);
_mm_storeu_pd((&fieldData_Residual_GMRF_7_p1[(i5+2)]), vec1_2);
}
for (; (i5<132); i5 += 1) {
fieldData_Residual_GMRF_7_p1[i5] = 0.000000e+00;
}
}
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[0]) {
/* Statements in this Scop: S55 */
for (int i4 = 0; (i4<=258); i4 += 1) {
double* fieldData_Residual_GMRF_8_p1 = (&fieldData_Residual_GMRF[8][(i4*260)]);
int i5 = 1;
for (; (i5<(2&(~1))); i5 += 1) {
fieldData_Residual_GMRF_8_p1[i5] = 0.000000e+00;
}
__m128d vec0 = _mm_set1_pd(0.000000e+00);
for (; (i5<257); i5 += 4) {
/* fieldData_Residual_GMRF_8_p1[i5] = 0.000000e+00; */
__m128d vec1;
__m128d vec1_2;
vec1 = vec0;
vec1_2 = vec0;
_mm_storeu_pd((&fieldData_Residual_GMRF_8_p1[i5]), vec1);
_mm_storeu_pd((&fieldData_Residual_GMRF_8_p1[(i5+2)]), vec1_2);
}
for (; (i5<260); i5 += 1) {
fieldData_Residual_GMRF_8_p1[i5] = 0.000000e+00;
}
}
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[0]) {
/* Statements in this Scop: S56 */
for (int i4 = 0; (i4<=256); i4 += 1) {
double* fieldData_RHS_GMRF_8_p1 = (&fieldData_RHS_GMRF[8][(i4*258)]);
int i5 = 0;
for (; (i5<(1&(~1))); i5 += 1) {
fieldData_RHS_GMRF_8_p1[i5] = 0.000000e+00;
}
__m128d vec0 = _mm_set1_pd(0.000000e+00);
for (; (i5<254); i5 += 4) {
/* fieldData_RHS_GMRF_8_p1[i5] = 0.000000e+00; */
__m128d vec1;
__m128d vec1_2;
vec1 = vec0;
vec1_2 = vec0;
_mm_storeu_pd((&fieldData_RHS_GMRF_8_p1[i5]), vec1);
_mm_storeu_pd((&fieldData_RHS_GMRF_8_p1[(i5+2)]), vec1_2);
}
for (; (i5<257); i5 += 1) {
fieldData_RHS_GMRF_8_p1[i5] = 0.000000e+00;
}
}
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[0]) {
/* Statements in this Scop: S57 */
for (int i1 = 0; (i1<=1); i1 += 1) {
double* fieldData_RHS_GMRF_0_p1 = (&fieldData_RHS_GMRF[0][(i1*2)]);
int i2 = 0;
for (; (i2<(1&(~1))); i2 += 1) {
fieldData_RHS_GMRF_0_p1[i2] = 0.000000e+00;
}
__m128d vec0 = _mm_set1_pd(0.000000e+00);
for (; (i2<-1); i2 += 4) {
/* fieldData_RHS_GMRF_0_p1[i2] = 0.000000e+00; */
__m128d vec1;
__m128d vec1_2;
vec1 = vec0;
vec1_2 = vec0;
_mm_storeu_pd((&fieldData_RHS_GMRF_0_p1[i2]), vec1);
_mm_storeu_pd((&fieldData_RHS_GMRF_0_p1[(i2+2)]), vec1_2);
}
for (; (i2<2); i2 += 1) {
fieldData_RHS_GMRF_0_p1[i2] = 0.000000e+00;
}
}
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[0]) {
/* Statements in this Scop: S58 */
for (int i1 = 0; (i1<=2); i1 += 1) {
double* fieldData_RHS_GMRF_1_p1 = (&fieldData_RHS_GMRF[1][(i1*4)]);
int i2 = 0;
for (; (i2<(1&(~1))); i2 += 1) {
fieldData_RHS_GMRF_1_p1[i2] = 0.000000e+00;
}
__m128d vec0 = _mm_set1_pd(0.000000e+00);
for (; (i2<0); i2 += 4) {
/* fieldData_RHS_GMRF_1_p1[i2] = 0.000000e+00; */
__m128d vec1;
__m128d vec1_2;
vec1 = vec0;
vec1_2 = vec0;
_mm_storeu_pd((&fieldData_RHS_GMRF_1_p1[i2]), vec1);
_mm_storeu_pd((&fieldData_RHS_GMRF_1_p1[(i2+2)]), vec1_2);
}
for (; (i2<3); i2 += 1) {
fieldData_RHS_GMRF_1_p1[i2] = 0.000000e+00;
}
}
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[0]) {
/* Statements in this Scop: S59 */
for (int i1 = 0; (i1<=4); i1 += 1) {
double* fieldData_RHS_GMRF_2_p1 = (&fieldData_RHS_GMRF[2][(i1*6)]);
int i2 = 0;
for (; (i2<(1&(~1))); i2 += 1) {
fieldData_RHS_GMRF_2_p1[i2] = 0.000000e+00;
}
__m128d vec0 = _mm_set1_pd(0.000000e+00);
for (; (i2<2); i2 += 4) {
/* fieldData_RHS_GMRF_2_p1[i2] = 0.000000e+00; */
__m128d vec1;
__m128d vec1_2;
vec1 = vec0;
vec1_2 = vec0;
_mm_storeu_pd((&fieldData_RHS_GMRF_2_p1[i2]), vec1);
_mm_storeu_pd((&fieldData_RHS_GMRF_2_p1[(i2+2)]), vec1_2);
}
for (; (i2<5); i2 += 1) {
fieldData_RHS_GMRF_2_p1[i2] = 0.000000e+00;
}
}
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[0]) {
/* Statements in this Scop: S60 */
for (int i1 = 0; (i1<=8); i1 += 1) {
double* fieldData_RHS_GMRF_3_p1 = (&fieldData_RHS_GMRF[3][(i1*10)]);
int i2 = 0;
for (; (i2<(1&(~1))); i2 += 1) {
fieldData_RHS_GMRF_3_p1[i2] = 0.000000e+00;
}
__m128d vec0 = _mm_set1_pd(0.000000e+00);
for (; (i2<6); i2 += 4) {
/* fieldData_RHS_GMRF_3_p1[i2] = 0.000000e+00; */
__m128d vec1;
__m128d vec1_2;
vec1 = vec0;
vec1_2 = vec0;
_mm_storeu_pd((&fieldData_RHS_GMRF_3_p1[i2]), vec1);
_mm_storeu_pd((&fieldData_RHS_GMRF_3_p1[(i2+2)]), vec1_2);
}
for (; (i2<9); i2 += 1) {
fieldData_RHS_GMRF_3_p1[i2] = 0.000000e+00;
}
}
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[0]) {
/* Statements in this Scop: S61 */
for (int i4 = 0; (i4<=16); i4 += 1) {
double* fieldData_RHS_GMRF_4_p1 = (&fieldData_RHS_GMRF[4][(i4*18)]);
int i5 = 0;
for (; (i5<(1&(~1))); i5 += 1) {
fieldData_RHS_GMRF_4_p1[i5] = 0.000000e+00;
}
__m128d vec0 = _mm_set1_pd(0.000000e+00);
for (; (i5<14); i5 += 4) {
/* fieldData_RHS_GMRF_4_p1[i5] = 0.000000e+00; */
__m128d vec1;
__m128d vec1_2;
vec1 = vec0;
vec1_2 = vec0;
_mm_storeu_pd((&fieldData_RHS_GMRF_4_p1[i5]), vec1);
_mm_storeu_pd((&fieldData_RHS_GMRF_4_p1[(i5+2)]), vec1_2);
}
for (; (i5<17); i5 += 1) {
fieldData_RHS_GMRF_4_p1[i5] = 0.000000e+00;
}
}
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[0]) {
/* Statements in this Scop: S62 */
for (int i4 = 0; (i4<=32); i4 += 1) {
double* fieldData_RHS_GMRF_5_p1 = (&fieldData_RHS_GMRF[5][(i4*34)]);
int i5 = 0;
for (; (i5<(1&(~1))); i5 += 1) {
fieldData_RHS_GMRF_5_p1[i5] = 0.000000e+00;
}
__m128d vec0 = _mm_set1_pd(0.000000e+00);
for (; (i5<30); i5 += 4) {
/* fieldData_RHS_GMRF_5_p1[i5] = 0.000000e+00; */
__m128d vec1;
__m128d vec1_2;
vec1 = vec0;
vec1_2 = vec0;
_mm_storeu_pd((&fieldData_RHS_GMRF_5_p1[i5]), vec1);
_mm_storeu_pd((&fieldData_RHS_GMRF_5_p1[(i5+2)]), vec1_2);
}
for (; (i5<33); i5 += 1) {
fieldData_RHS_GMRF_5_p1[i5] = 0.000000e+00;
}
}
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[0]) {
/* Statements in this Scop: S63 */
for (int i4 = 0; (i4<=64); i4 += 1) {
double* fieldData_RHS_GMRF_6_p1 = (&fieldData_RHS_GMRF[6][(i4*66)]);
int i5 = 0;
for (; (i5<(1&(~1))); i5 += 1) {
fieldData_RHS_GMRF_6_p1[i5] = 0.000000e+00;
}
__m128d vec0 = _mm_set1_pd(0.000000e+00);
for (; (i5<62); i5 += 4) {
/* fieldData_RHS_GMRF_6_p1[i5] = 0.000000e+00; */
__m128d vec1;
__m128d vec1_2;
vec1 = vec0;
vec1_2 = vec0;
_mm_storeu_pd((&fieldData_RHS_GMRF_6_p1[i5]), vec1);
_mm_storeu_pd((&fieldData_RHS_GMRF_6_p1[(i5+2)]), vec1_2);
}
for (; (i5<65); i5 += 1) {
fieldData_RHS_GMRF_6_p1[i5] = 0.000000e+00;
}
}
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[0]) {
/* Statements in this Scop: S64 */
for (int i4 = 0; (i4<=128); i4 += 1) {
double* fieldData_RHS_GMRF_7_p1 = (&fieldData_RHS_GMRF[7][(i4*130)]);
int i5 = 0;
for (; (i5<(1&(~1))); i5 += 1) {
fieldData_RHS_GMRF_7_p1[i5] = 0.000000e+00;
}
__m128d vec0 = _mm_set1_pd(0.000000e+00);
for (; (i5<126); i5 += 4) {
/* fieldData_RHS_GMRF_7_p1[i5] = 0.000000e+00; */
__m128d vec1;
__m128d vec1_2;
vec1 = vec0;
vec1_2 = vec0;
_mm_storeu_pd((&fieldData_RHS_GMRF_7_p1[i5]), vec1);
_mm_storeu_pd((&fieldData_RHS_GMRF_7_p1[(i5+2)]), vec1_2);
}
for (; (i5<129); i5 += 1) {
fieldData_RHS_GMRF_7_p1[i5] = 0.000000e+00;
}
}
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[0]) {
/* Statements in this Scop: S65 */
for (int i1 = 0; (i1<=3); i1 += 1) {
double* fieldData_VecP_GMRF_0_p1 = (&fieldData_VecP_GMRF[0][(i1*6)]);
int i2 = 1;
for (; (i2<(2&(~1))); i2 += 1) {
fieldData_VecP_GMRF_0_p1[i2] = 0.000000e+00;
}
__m128d vec0 = _mm_set1_pd(0.000000e+00);
for (; (i2<2); i2 += 4) {
/* fieldData_VecP_GMRF_0_p1[i2] = 0.000000e+00; */
__m128d vec1;
__m128d vec1_2;
vec1 = vec0;
vec1_2 = vec0;
_mm_storeu_pd((&fieldData_VecP_GMRF_0_p1[i2]), vec1);
_mm_storeu_pd((&fieldData_VecP_GMRF_0_p1[(i2+2)]), vec1_2);
}
for (; (i2<5); i2 += 1) {
fieldData_VecP_GMRF_0_p1[i2] = 0.000000e+00;
}
}
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[0]) {
/* Statements in this Scop: S66 */
for (int i1 = 0; (i1<=1); i1 += 1) {
double* fieldData_VecGradP_GMRF_0_p1 = (&fieldData_VecGradP_GMRF[0][(i1*2)]);
int i2 = 0;
for (; (i2<(1&(~1))); i2 += 1) {
fieldData_VecGradP_GMRF_0_p1[i2] = 0.000000e+00;
}
__m128d vec0 = _mm_set1_pd(0.000000e+00);
for (; (i2<-1); i2 += 4) {
/* fieldData_VecGradP_GMRF_0_p1[i2] = 0.000000e+00; */
__m128d vec1;
__m128d vec1_2;
vec1 = vec0;
vec1_2 = vec0;
_mm_storeu_pd((&fieldData_VecGradP_GMRF_0_p1[i2]), vec1);
_mm_storeu_pd((&fieldData_VecGradP_GMRF_0_p1[(i2+2)]), vec1_2);
}
for (; (i2<2); i2 += 1) {
fieldData_VecGradP_GMRF_0_p1[i2] = 0.000000e+00;
}
}
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[1]) {
/* Statements in this Scop: S67 */
for (int i0 = 0; (i0<=8); i0 += 1) {
for (int i1 = 0; (i1<=3); i1 += 1) {
double* fieldData_LaplaceCoeff_0_p1 = (&fieldData_LaplaceCoeff[0][((i1*6)+(i0*24))]);
int i2 = 1;
for (; (i2<(2&(~1))); i2 += 1) {
fieldData_LaplaceCoeff_0_p1[i2] = 0.000000e+00;
}
__m128d vec0 = _mm_set1_pd(0.000000e+00);
for (; (i2<2); i2 += 4) {
/* fieldData_LaplaceCoeff_0_p1[i2] = 0.000000e+00; */
__m128d vec1;
__m128d vec1_2;
vec1 = vec0;
vec1_2 = vec0;
_mm_storeu_pd((&fieldData_LaplaceCoeff_0_p1[i2]), vec1);
_mm_storeu_pd((&fieldData_LaplaceCoeff_0_p1[(i2+2)]), vec1_2);
}
for (; (i2<5); i2 += 1) {
fieldData_LaplaceCoeff_0_p1[i2] = 0.000000e+00;
}
}
}
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[1]) {
/* Statements in this Scop: S68 */
for (int i0 = 0; (i0<=8); i0 += 1) {
for (int i1 = 0; (i1<=4); i1 += 1) {
double* fieldData_LaplaceCoeff_1_p1 = (&fieldData_LaplaceCoeff[1][((i1*6)+(i0*30))]);
int i2 = 1;
for (; (i2<(2&(~1))); i2 += 1) {
fieldData_LaplaceCoeff_1_p1[i2] = 0.000000e+00;
}
__m128d vec0 = _mm_set1_pd(0.000000e+00);
for (; (i2<3); i2 += 4) {
/* fieldData_LaplaceCoeff_1_p1[i2] = 0.000000e+00; */
__m128d vec1;
__m128d vec1_2;
vec1 = vec0;
vec1_2 = vec0;
_mm_storeu_pd((&fieldData_LaplaceCoeff_1_p1[i2]), vec1);
_mm_storeu_pd((&fieldData_LaplaceCoeff_1_p1[(i2+2)]), vec1_2);
}
for (; (i2<6); i2 += 1) {
fieldData_LaplaceCoeff_1_p1[i2] = 0.000000e+00;
}
}
}
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[1]) {
/* Statements in this Scop: S69 */
for (int i3 = 0; (i3<=8); i3 += 1) {
for (int i4 = 0; (i4<=6); i4 += 1) {
double* fieldData_LaplaceCoeff_2_p1 = (&fieldData_LaplaceCoeff[2][((i4*8)+(i3*56))]);
int i5 = 1;
for (; (i5<(2&(~1))); i5 += 1) {
fieldData_LaplaceCoeff_2_p1[i5] = 0.000000e+00;
}
__m128d vec0 = _mm_set1_pd(0.000000e+00);
for (; (i5<5); i5 += 4) {
/* fieldData_LaplaceCoeff_2_p1[i5] = 0.000000e+00; */
__m128d vec1;
__m128d vec1_2;
vec1 = vec0;
vec1_2 = vec0;
_mm_storeu_pd((&fieldData_LaplaceCoeff_2_p1[i5]), vec1);
_mm_storeu_pd((&fieldData_LaplaceCoeff_2_p1[(i5+2)]), vec1_2);
}
for (; (i5<8); i5 += 1) {
fieldData_LaplaceCoeff_2_p1[i5] = 0.000000e+00;
}
}
}
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[1]) {
/* Statements in this Scop: S70 */
for (int i3 = 0; (i3<=8); i3 += 1) {
for (int i4 = 0; (i4<=10); i4 += 1) {
double* fieldData_LaplaceCoeff_3_p1 = (&fieldData_LaplaceCoeff[3][((i4*12)+(i3*132))]);
int i5 = 1;
for (; (i5<(2&(~1))); i5 += 1) {
fieldData_LaplaceCoeff_3_p1[i5] = 0.000000e+00;
}
__m128d vec0 = _mm_set1_pd(0.000000e+00);
for (; (i5<9); i5 += 4) {
/* fieldData_LaplaceCoeff_3_p1[i5] = 0.000000e+00; */
__m128d vec1;
__m128d vec1_2;
vec1 = vec0;
vec1_2 = vec0;
_mm_storeu_pd((&fieldData_LaplaceCoeff_3_p1[i5]), vec1);
_mm_storeu_pd((&fieldData_LaplaceCoeff_3_p1[(i5+2)]), vec1_2);
}
for (; (i5<12); i5 += 1) {
fieldData_LaplaceCoeff_3_p1[i5] = 0.000000e+00;
}
}
}
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[1]) {
/* Statements in this Scop: S71 */
for (int i3 = 0; (i3<=8); i3 += 1) {
for (int i4 = 0; (i4<=18); i4 += 1) {
double* fieldData_LaplaceCoeff_4_p1 = (&fieldData_LaplaceCoeff[4][((i4*20)+(i3*380))]);
int i5 = 1;
for (; (i5<(2&(~1))); i5 += 1) {
fieldData_LaplaceCoeff_4_p1[i5] = 0.000000e+00;
}
__m128d vec0 = _mm_set1_pd(0.000000e+00);
for (; (i5<17); i5 += 4) {
/* fieldData_LaplaceCoeff_4_p1[i5] = 0.000000e+00; */
__m128d vec1;
__m128d vec1_2;
vec1 = vec0;
vec1_2 = vec0;
_mm_storeu_pd((&fieldData_LaplaceCoeff_4_p1[i5]), vec1);
_mm_storeu_pd((&fieldData_LaplaceCoeff_4_p1[(i5+2)]), vec1_2);
}
for (; (i5<20); i5 += 1) {
fieldData_LaplaceCoeff_4_p1[i5] = 0.000000e+00;
}
}
}
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[1]) {
/* Statements in this Scop: S72 */
for (int i3 = 0; (i3<=8); i3 += 1) {
for (int i4 = 0; (i4<=34); i4 += 1) {
double* fieldData_LaplaceCoeff_5_p1 = (&fieldData_LaplaceCoeff[5][((i4*36)+(i3*1260))]);
int i5 = 1;
for (; (i5<(2&(~1))); i5 += 1) {
fieldData_LaplaceCoeff_5_p1[i5] = 0.000000e+00;
}
__m128d vec0 = _mm_set1_pd(0.000000e+00);
for (; (i5<33); i5 += 4) {
/* fieldData_LaplaceCoeff_5_p1[i5] = 0.000000e+00; */
__m128d vec1;
__m128d vec1_2;
vec1 = vec0;
vec1_2 = vec0;
_mm_storeu_pd((&fieldData_LaplaceCoeff_5_p1[i5]), vec1);
_mm_storeu_pd((&fieldData_LaplaceCoeff_5_p1[(i5+2)]), vec1_2);
}
for (; (i5<36); i5 += 1) {
fieldData_LaplaceCoeff_5_p1[i5] = 0.000000e+00;
}
}
}
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[1]) {
/* Statements in this Scop: S73 */
for (int i3 = 0; (i3<=8); i3 += 1) {
for (int i4 = 0; (i4<=66); i4 += 1) {
double* fieldData_LaplaceCoeff_6_p1 = (&fieldData_LaplaceCoeff[6][((i4*68)+(i3*4556))]);
int i5 = 1;
for (; (i5<(2&(~1))); i5 += 1) {
fieldData_LaplaceCoeff_6_p1[i5] = 0.000000e+00;
}
__m128d vec0 = _mm_set1_pd(0.000000e+00);
for (; (i5<65); i5 += 4) {
/* fieldData_LaplaceCoeff_6_p1[i5] = 0.000000e+00; */
__m128d vec1;
__m128d vec1_2;
vec1 = vec0;
vec1_2 = vec0;
_mm_storeu_pd((&fieldData_LaplaceCoeff_6_p1[i5]), vec1);
_mm_storeu_pd((&fieldData_LaplaceCoeff_6_p1[(i5+2)]), vec1_2);
}
for (; (i5<68); i5 += 1) {
fieldData_LaplaceCoeff_6_p1[i5] = 0.000000e+00;
}
}
}
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[1]) {
/* Statements in this Scop: S74 */
for (int i3 = 0; (i3<=8); i3 += 1) {
for (int i4 = 0; (i4<=130); i4 += 1) {
double* fieldData_LaplaceCoeff_7_p1 = (&fieldData_LaplaceCoeff[7][((i4*132)+(i3*17292))]);
int i5 = 1;
for (; (i5<(2&(~1))); i5 += 1) {
fieldData_LaplaceCoeff_7_p1[i5] = 0.000000e+00;
}
__m128d vec0 = _mm_set1_pd(0.000000e+00);
for (; (i5<129); i5 += 4) {
/* fieldData_LaplaceCoeff_7_p1[i5] = 0.000000e+00; */
__m128d vec1;
__m128d vec1_2;
vec1 = vec0;
vec1_2 = vec0;
_mm_storeu_pd((&fieldData_LaplaceCoeff_7_p1[i5]), vec1);
_mm_storeu_pd((&fieldData_LaplaceCoeff_7_p1[(i5+2)]), vec1_2);
}
for (; (i5<132); i5 += 1) {
fieldData_LaplaceCoeff_7_p1[i5] = 0.000000e+00;
}
}
}
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[1]) {
/* Statements in this Scop: S75 */
for (int i3 = 0; (i3<=8); i3 += 1) {
for (int i4 = 0; (i4<=258); i4 += 1) {
double* fieldData_LaplaceCoeff_8_p1 = (&fieldData_LaplaceCoeff[8][((i4*260)+(i3*67340))]);
int i5 = 1;
for (; (i5<(2&(~1))); i5 += 1) {
fieldData_LaplaceCoeff_8_p1[i5] = 0.000000e+00;
}
__m128d vec0 = _mm_set1_pd(0.000000e+00);
for (; (i5<257); i5 += 4) {
/* fieldData_LaplaceCoeff_8_p1[i5] = 0.000000e+00; */
__m128d vec1;
__m128d vec1_2;
vec1 = vec0;
vec1_2 = vec0;
_mm_storeu_pd((&fieldData_LaplaceCoeff_8_p1[i5]), vec1);
_mm_storeu_pd((&fieldData_LaplaceCoeff_8_p1[(i5+2)]), vec1_2);
}
for (; (i5<260); i5 += 1) {
fieldData_LaplaceCoeff_8_p1[i5] = 0.000000e+00;
}
}
}
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[0]) {
/* Statements in this Scop: S76 */
for (int i0 = 0; (i0<=8); i0 += 1) {
for (int i1 = 0; (i1<=3); i1 += 1) {
double* fieldData_LaplaceCoeff_GMRF_0_p1 = (&fieldData_LaplaceCoeff_GMRF[0][((i1*6)+(i0*24))]);
int i2 = 1;
for (; (i2<(2&(~1))); i2 += 1) {
fieldData_LaplaceCoeff_GMRF_0_p1[i2] = 0.000000e+00;
}
__m128d vec0 = _mm_set1_pd(0.000000e+00);
for (; (i2<2); i2 += 4) {
/* fieldData_LaplaceCoeff_GMRF_0_p1[i2] = 0.000000e+00; */
__m128d vec1;
__m128d vec1_2;
vec1 = vec0;
vec1_2 = vec0;
_mm_storeu_pd((&fieldData_LaplaceCoeff_GMRF_0_p1[i2]), vec1);
_mm_storeu_pd((&fieldData_LaplaceCoeff_GMRF_0_p1[(i2+2)]), vec1_2);
}
for (; (i2<5); i2 += 1) {
fieldData_LaplaceCoeff_GMRF_0_p1[i2] = 0.000000e+00;
}
}
}
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[0]) {
/* Statements in this Scop: S77 */
for (int i0 = 0; (i0<=8); i0 += 1) {
for (int i1 = 0; (i1<=4); i1 += 1) {
double* fieldData_LaplaceCoeff_GMRF_1_p1 = (&fieldData_LaplaceCoeff_GMRF[1][((i1*6)+(i0*30))]);
int i2 = 1;
for (; (i2<(2&(~1))); i2 += 1) {
fieldData_LaplaceCoeff_GMRF_1_p1[i2] = 0.000000e+00;
}
__m128d vec0 = _mm_set1_pd(0.000000e+00);
for (; (i2<3); i2 += 4) {
/* fieldData_LaplaceCoeff_GMRF_1_p1[i2] = 0.000000e+00; */
__m128d vec1;
__m128d vec1_2;
vec1 = vec0;
vec1_2 = vec0;
_mm_storeu_pd((&fieldData_LaplaceCoeff_GMRF_1_p1[i2]), vec1);
_mm_storeu_pd((&fieldData_LaplaceCoeff_GMRF_1_p1[(i2+2)]), vec1_2);
}
for (; (i2<6); i2 += 1) {
fieldData_LaplaceCoeff_GMRF_1_p1[i2] = 0.000000e+00;
}
}
}
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[0]) {
/* Statements in this Scop: S78 */
for (int i3 = 0; (i3<=8); i3 += 1) {
for (int i4 = 0; (i4<=6); i4 += 1) {
double* fieldData_LaplaceCoeff_GMRF_2_p1 = (&fieldData_LaplaceCoeff_GMRF[2][((i4*8)+(i3*56))]);
int i5 = 1;
for (; (i5<(2&(~1))); i5 += 1) {
fieldData_LaplaceCoeff_GMRF_2_p1[i5] = 0.000000e+00;
}
__m128d vec0 = _mm_set1_pd(0.000000e+00);
for (; (i5<5); i5 += 4) {
/* fieldData_LaplaceCoeff_GMRF_2_p1[i5] = 0.000000e+00; */
__m128d vec1;
__m128d vec1_2;
vec1 = vec0;
vec1_2 = vec0;
_mm_storeu_pd((&fieldData_LaplaceCoeff_GMRF_2_p1[i5]), vec1);
_mm_storeu_pd((&fieldData_LaplaceCoeff_GMRF_2_p1[(i5+2)]), vec1_2);
}
for (; (i5<8); i5 += 1) {
fieldData_LaplaceCoeff_GMRF_2_p1[i5] = 0.000000e+00;
}
}
}
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[0]) {
/* Statements in this Scop: S79 */
for (int i3 = 0; (i3<=8); i3 += 1) {
for (int i4 = 0; (i4<=10); i4 += 1) {
double* fieldData_LaplaceCoeff_GMRF_3_p1 = (&fieldData_LaplaceCoeff_GMRF[3][((i4*12)+(i3*132))]);
int i5 = 1;
for (; (i5<(2&(~1))); i5 += 1) {
fieldData_LaplaceCoeff_GMRF_3_p1[i5] = 0.000000e+00;
}
__m128d vec0 = _mm_set1_pd(0.000000e+00);
for (; (i5<9); i5 += 4) {
/* fieldData_LaplaceCoeff_GMRF_3_p1[i5] = 0.000000e+00; */
__m128d vec1;
__m128d vec1_2;
vec1 = vec0;
vec1_2 = vec0;
_mm_storeu_pd((&fieldData_LaplaceCoeff_GMRF_3_p1[i5]), vec1);
_mm_storeu_pd((&fieldData_LaplaceCoeff_GMRF_3_p1[(i5+2)]), vec1_2);
}
for (; (i5<12); i5 += 1) {
fieldData_LaplaceCoeff_GMRF_3_p1[i5] = 0.000000e+00;
}
}
}
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[0]) {
/* Statements in this Scop: S80 */
for (int i3 = 0; (i3<=8); i3 += 1) {
for (int i4 = 0; (i4<=18); i4 += 1) {
double* fieldData_LaplaceCoeff_GMRF_4_p1 = (&fieldData_LaplaceCoeff_GMRF[4][((i4*20)+(i3*380))]);
int i5 = 1;
for (; (i5<(2&(~1))); i5 += 1) {
fieldData_LaplaceCoeff_GMRF_4_p1[i5] = 0.000000e+00;
}
__m128d vec0 = _mm_set1_pd(0.000000e+00);
for (; (i5<17); i5 += 4) {
/* fieldData_LaplaceCoeff_GMRF_4_p1[i5] = 0.000000e+00; */
__m128d vec1;
__m128d vec1_2;
vec1 = vec0;
vec1_2 = vec0;
_mm_storeu_pd((&fieldData_LaplaceCoeff_GMRF_4_p1[i5]), vec1);
_mm_storeu_pd((&fieldData_LaplaceCoeff_GMRF_4_p1[(i5+2)]), vec1_2);
}
for (; (i5<20); i5 += 1) {
fieldData_LaplaceCoeff_GMRF_4_p1[i5] = 0.000000e+00;
}
}
}
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[0]) {
/* Statements in this Scop: S81 */
for (int i3 = 0; (i3<=8); i3 += 1) {
for (int i4 = 0; (i4<=34); i4 += 1) {
double* fieldData_LaplaceCoeff_GMRF_5_p1 = (&fieldData_LaplaceCoeff_GMRF[5][((i4*36)+(i3*1260))]);
int i5 = 1;
for (; (i5<(2&(~1))); i5 += 1) {
fieldData_LaplaceCoeff_GMRF_5_p1[i5] = 0.000000e+00;
}
__m128d vec0 = _mm_set1_pd(0.000000e+00);
for (; (i5<33); i5 += 4) {
/* fieldData_LaplaceCoeff_GMRF_5_p1[i5] = 0.000000e+00; */
__m128d vec1;
__m128d vec1_2;
vec1 = vec0;
vec1_2 = vec0;
_mm_storeu_pd((&fieldData_LaplaceCoeff_GMRF_5_p1[i5]), vec1);
_mm_storeu_pd((&fieldData_LaplaceCoeff_GMRF_5_p1[(i5+2)]), vec1_2);
}
for (; (i5<36); i5 += 1) {
fieldData_LaplaceCoeff_GMRF_5_p1[i5] = 0.000000e+00;
}
}
}
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[0]) {
/* Statements in this Scop: S82 */
for (int i3 = 0; (i3<=8); i3 += 1) {
for (int i4 = 0; (i4<=66); i4 += 1) {
double* fieldData_LaplaceCoeff_GMRF_6_p1 = (&fieldData_LaplaceCoeff_GMRF[6][((i4*68)+(i3*4556))]);
int i5 = 1;
for (; (i5<(2&(~1))); i5 += 1) {
fieldData_LaplaceCoeff_GMRF_6_p1[i5] = 0.000000e+00;
}
__m128d vec0 = _mm_set1_pd(0.000000e+00);
for (; (i5<65); i5 += 4) {
/* fieldData_LaplaceCoeff_GMRF_6_p1[i5] = 0.000000e+00; */
__m128d vec1;
__m128d vec1_2;
vec1 = vec0;
vec1_2 = vec0;
_mm_storeu_pd((&fieldData_LaplaceCoeff_GMRF_6_p1[i5]), vec1);
_mm_storeu_pd((&fieldData_LaplaceCoeff_GMRF_6_p1[(i5+2)]), vec1_2);
}
for (; (i5<68); i5 += 1) {
fieldData_LaplaceCoeff_GMRF_6_p1[i5] = 0.000000e+00;
}
}
}
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[0]) {
/* Statements in this Scop: S83 */
for (int i3 = 0; (i3<=8); i3 += 1) {
for (int i4 = 0; (i4<=130); i4 += 1) {
double* fieldData_LaplaceCoeff_GMRF_7_p1 = (&fieldData_LaplaceCoeff_GMRF[7][((i4*132)+(i3*17292))]);
int i5 = 1;
for (; (i5<(2&(~1))); i5 += 1) {
fieldData_LaplaceCoeff_GMRF_7_p1[i5] = 0.000000e+00;
}
__m128d vec0 = _mm_set1_pd(0.000000e+00);
for (; (i5<129); i5 += 4) {
/* fieldData_LaplaceCoeff_GMRF_7_p1[i5] = 0.000000e+00; */
__m128d vec1;
__m128d vec1_2;
vec1 = vec0;
vec1_2 = vec0;
_mm_storeu_pd((&fieldData_LaplaceCoeff_GMRF_7_p1[i5]), vec1);
_mm_storeu_pd((&fieldData_LaplaceCoeff_GMRF_7_p1[(i5+2)]), vec1_2);
}
for (; (i5<132); i5 += 1) {
fieldData_LaplaceCoeff_GMRF_7_p1[i5] = 0.000000e+00;
}
}
}
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[0]) {
/* Statements in this Scop: S84 */
for (int i3 = 0; (i3<=8); i3 += 1) {
for (int i4 = 0; (i4<=258); i4 += 1) {
double* fieldData_LaplaceCoeff_GMRF_8_p1 = (&fieldData_LaplaceCoeff_GMRF[8][((i4*260)+(i3*67340))]);
int i5 = 1;
for (; (i5<(2&(~1))); i5 += 1) {
fieldData_LaplaceCoeff_GMRF_8_p1[i5] = 0.000000e+00;
}
__m128d vec0 = _mm_set1_pd(0.000000e+00);
for (; (i5<257); i5 += 4) {
/* fieldData_LaplaceCoeff_GMRF_8_p1[i5] = 0.000000e+00; */
__m128d vec1;
__m128d vec1_2;
vec1 = vec0;
vec1_2 = vec0;
_mm_storeu_pd((&fieldData_LaplaceCoeff_GMRF_8_p1[i5]), vec1);
_mm_storeu_pd((&fieldData_LaplaceCoeff_GMRF_8_p1[(i5+2)]), vec1_2);
}
for (; (i5<260); i5 += 1) {
fieldData_LaplaceCoeff_GMRF_8_p1[i5] = 0.000000e+00;
}
}
}
}
}
}
