#include "MultiGrid/MultiGrid.h"
void SetSolution_GMRF_8(double value) {
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[0]) {
/* Statements in this Scop: S194 */
for (int i0 = (iterationOffsetBegin[0][1]-1); (i0<=(iterationOffsetEnd[0][1]+257)); i0 += 1) {
double* fieldData_Solution_GMRF_8_p1 = (&fieldData_Solution_GMRF[8][(i0*260)]);
int i1 = (iterationOffsetBegin[0][0]-1);
for (; (i1<(iterationOffsetBegin[0][0]&(~1))); i1 += 1) {
fieldData_Solution_GMRF_8_p1[(i1+262)] = value;
}
__m128d vec0 = _mm_set1_pd(value);
for (; (i1<(iterationOffsetEnd[0][0]+255)); i1 += 4) {
/* fieldData_Solution_GMRF_8_p1[(i1+262)] = value; */
__m128d vec1;
__m128d vec1_2;
vec1 = vec0;
vec1_2 = vec0;
_mm_storeu_pd((&fieldData_Solution_GMRF_8_p1[(i1+262)]), vec1);
_mm_storeu_pd((&fieldData_Solution_GMRF_8_p1[(i1+264)]), vec1_2);
}
for (; (i1<(iterationOffsetEnd[0][0]+258)); i1 += 1) {
fieldData_Solution_GMRF_8_p1[(i1+262)] = value;
}
}
}
}
}
