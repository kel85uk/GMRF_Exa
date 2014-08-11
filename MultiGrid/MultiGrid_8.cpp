#include "MultiGrid/MultiGrid.h"
void VCycle_3() {
for (unsigned int someRandomIndexVar = 0; (someRandomIndexVar<2); ++someRandomIndexVar) {
Smoother_3();
}
UpResidual_3();
Restriction_3();
SetSolution_2(0);
VCycle_2();
Correction_3();
for (unsigned int someRandomIndexVar = 0; (someRandomIndexVar<1); ++someRandomIndexVar) {
Smoother_3();
}
}
