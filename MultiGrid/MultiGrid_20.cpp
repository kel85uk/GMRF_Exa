#include "MultiGrid/MultiGrid.h"
void VCycle_GMRF_7() {
for (unsigned int someRandomIndexVar = 0; (someRandomIndexVar<2); ++someRandomIndexVar) {
Smoother_GMRF_7();
}
UpResidual_GMRF_7();
Restriction_GMRF_7();
SetSolution_GMRF_6(0);
VCycle_GMRF_6();
Correction_GMRF_7();
for (unsigned int someRandomIndexVar = 0; (someRandomIndexVar<1); ++someRandomIndexVar) {
Smoother_GMRF_7();
}
}
