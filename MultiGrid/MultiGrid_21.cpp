#include "MultiGrid/MultiGrid.h"
void VCycle_GMRF_8() {
for (unsigned int someRandomIndexVar = 0; (someRandomIndexVar<2); ++someRandomIndexVar) {
Smoother_GMRF_8();
}
UpResidual_GMRF_8();
Restriction_GMRF_8();
SetSolution_GMRF_7(0);
VCycle_GMRF_7();
Correction_GMRF_8();
for (unsigned int someRandomIndexVar = 0; (someRandomIndexVar<1); ++someRandomIndexVar) {
Smoother_GMRF_8();
}
}
