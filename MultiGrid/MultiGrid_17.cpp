#include "MultiGrid/MultiGrid.h"
void VCycle_GMRF_4() {
for (unsigned int someRandomIndexVar = 0; (someRandomIndexVar<2); ++someRandomIndexVar) {
Smoother_GMRF_4();
}
UpResidual_GMRF_4();
Restriction_GMRF_4();
SetSolution_GMRF_3(0);
VCycle_GMRF_3();
Correction_GMRF_4();
for (unsigned int someRandomIndexVar = 0; (someRandomIndexVar<1); ++someRandomIndexVar) {
Smoother_GMRF_4();
}
}
