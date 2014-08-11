#include "MultiGrid/MultiGrid.h"
void VCycle_7() {
for (unsigned int someRandomIndexVar = 0; (someRandomIndexVar<2); ++someRandomIndexVar) {
Smoother_7();
}
UpResidual_7();
Restriction_7();
SetSolution_6(0);
VCycle_6();
Correction_7();
for (unsigned int someRandomIndexVar = 0; (someRandomIndexVar<1); ++someRandomIndexVar) {
Smoother_7();
}
}
