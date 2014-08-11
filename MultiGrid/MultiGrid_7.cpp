#include "MultiGrid/MultiGrid.h"
void VCycle_2() {
for (unsigned int someRandomIndexVar = 0; (someRandomIndexVar<2); ++someRandomIndexVar) {
Smoother_2();
}
UpResidual_2();
Restriction_2();
SetSolution_1(0);
VCycle_1();
Correction_2();
for (unsigned int someRandomIndexVar = 0; (someRandomIndexVar<1); ++someRandomIndexVar) {
Smoother_2();
}
}
