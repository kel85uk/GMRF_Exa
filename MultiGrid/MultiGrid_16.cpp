#include "MultiGrid/MultiGrid.h"
void VCycle_GMRF_3() {
for (unsigned int someRandomIndexVar = 0; (someRandomIndexVar<2); ++someRandomIndexVar) {
Smoother_GMRF_3();
}
UpResidual_GMRF_3();
Restriction_GMRF_3();
SetSolution_GMRF_2(0);
VCycle_GMRF_2();
Correction_GMRF_3();
for (unsigned int someRandomIndexVar = 0; (someRandomIndexVar<1); ++someRandomIndexVar) {
Smoother_GMRF_3();
}
}
