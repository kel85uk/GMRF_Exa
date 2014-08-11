#include "MultiGrid/MultiGrid.h"
void VCycle_8() {
for (unsigned int someRandomIndexVar = 0; (someRandomIndexVar<2); ++someRandomIndexVar) {
Smoother_8();
}
UpResidual_8();
Restriction_8();
SetSolution_7(0);
VCycle_7();
Correction_8();
for (unsigned int someRandomIndexVar = 0; (someRandomIndexVar<1); ++someRandomIndexVar) {
Smoother_8();
}
}
