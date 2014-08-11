#include "MultiGrid/MultiGrid.h"
void VCycle_6() {
for (unsigned int someRandomIndexVar = 0; (someRandomIndexVar<2); ++someRandomIndexVar) {
Smoother_6();
}
UpResidual_6();
Restriction_6();
SetSolution_5(0);
VCycle_5();
Correction_6();
for (unsigned int someRandomIndexVar = 0; (someRandomIndexVar<1); ++someRandomIndexVar) {
Smoother_6();
}
}
