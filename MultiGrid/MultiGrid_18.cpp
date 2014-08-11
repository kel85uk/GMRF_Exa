#include "MultiGrid/MultiGrid.h"
void VCycle_GMRF_5() {
for (unsigned int someRandomIndexVar = 0; (someRandomIndexVar<2); ++someRandomIndexVar) {
Smoother_GMRF_5();
}
UpResidual_GMRF_5();
Restriction_GMRF_5();
SetSolution_GMRF_4(0);
VCycle_GMRF_4();
Correction_GMRF_5();
for (unsigned int someRandomIndexVar = 0; (someRandomIndexVar<1); ++someRandomIndexVar) {
Smoother_GMRF_5();
}
}
