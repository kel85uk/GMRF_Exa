#include "MultiGrid/MultiGrid.h"
void VCycle_1() {
for (unsigned int someRandomIndexVar = 0; (someRandomIndexVar<2); ++someRandomIndexVar) {
Smoother_1();
}
UpResidual_1();
Restriction_1();
SetSolution_0(0);
VCycle_0();
Correction_1();
for (unsigned int someRandomIndexVar = 0; (someRandomIndexVar<1); ++someRandomIndexVar) {
Smoother_1();
}
}
