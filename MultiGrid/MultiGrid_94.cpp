#include "MultiGrid/MultiGrid.h"
void SetSolution_6(double value) {
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[1]) {
/* Statements in this Scop: S183 */
for (int i0 = (iterationOffsetBegin[1][1]-1); (i0<=(iterationOffsetEnd[1][1]+65)); i0 += 1) {
double* fieldData_Solution_6_p1 = (&fieldData_Solution[6][(i0*68)]);
int i1 = (iterationOffsetBegin[1][0]-1);
for (; (i1<(iterationOffsetBegin[1][0]&(~1))); i1 += 1) {
fieldData_Solution_6_p1[(i1+70)] = value;
}
__m128d vec0 = _mm_set1_pd(value);
for (; (i1<(iterationOffsetEnd[1][0]+63)); i1 += 4) {
/* fieldData_Solution_6_p1[(i1+70)] = value; */
__m128d vec1;
__m128d vec1_2;
vec1 = vec0;
vec1_2 = vec0;
_mm_storeu_pd((&fieldData_Solution_6_p1[(i1+70)]), vec1);
_mm_storeu_pd((&fieldData_Solution_6_p1[(i1+72)]), vec1_2);
}
for (; (i1<(iterationOffsetEnd[1][0]+66)); i1 += 1) {
fieldData_Solution_6_p1[(i1+70)] = value;
}
}
}
}
}
