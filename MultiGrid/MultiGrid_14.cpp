#include "MultiGrid/MultiGrid.h"
void VCycle_GMRF_1() {
for (unsigned int someRandomIndexVar = 0; (someRandomIndexVar<2); ++someRandomIndexVar) {
Smoother_GMRF_1();
}
UpResidual_GMRF_1();
Restriction_GMRF_1();
SetSolution_GMRF_0(0);
VCycle_GMRF_0();
Correction_GMRF_1();
for (unsigned int someRandomIndexVar = 0; (someRandomIndexVar<1); ++someRandomIndexVar) {
Smoother_GMRF_1();
}
}
