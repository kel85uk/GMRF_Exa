#include "MultiGrid/MultiGrid.h"
void VCycle_GMRF_6() {
for (unsigned int someRandomIndexVar = 0; (someRandomIndexVar<2); ++someRandomIndexVar) {
Smoother_GMRF_6();
}
UpResidual_GMRF_6();
Restriction_GMRF_6();
SetSolution_GMRF_5(0);
VCycle_GMRF_5();
Correction_GMRF_6();
for (unsigned int someRandomIndexVar = 0; (someRandomIndexVar<1); ++someRandomIndexVar) {
Smoother_GMRF_6();
}
}
