#include "MultiGrid/MultiGrid.h"
void VCycle_GMRF_2() {
for (unsigned int someRandomIndexVar = 0; (someRandomIndexVar<2); ++someRandomIndexVar) {
Smoother_GMRF_2();
}
UpResidual_GMRF_2();
Restriction_GMRF_2();
SetSolution_GMRF_1(0);
VCycle_GMRF_1();
Correction_GMRF_2();
for (unsigned int someRandomIndexVar = 0; (someRandomIndexVar<1); ++someRandomIndexVar) {
Smoother_GMRF_2();
}
}
