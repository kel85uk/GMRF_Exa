#include "MultiGrid/MultiGrid.h"
void VCycle_5() {
for (unsigned int someRandomIndexVar = 0; (someRandomIndexVar<2); ++someRandomIndexVar) {
Smoother_5();
}
UpResidual_5();
Restriction_5();
SetSolution_4(0);
VCycle_4();
Correction_5();
for (unsigned int someRandomIndexVar = 0; (someRandomIndexVar<1); ++someRandomIndexVar) {
Smoother_5();
}
}
