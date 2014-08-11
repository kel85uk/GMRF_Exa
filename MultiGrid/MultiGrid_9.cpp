#include "MultiGrid/MultiGrid.h"
void VCycle_4() {
for (unsigned int someRandomIndexVar = 0; (someRandomIndexVar<2); ++someRandomIndexVar) {
Smoother_4();
}
UpResidual_4();
Restriction_4();
SetSolution_3(0);
VCycle_3();
Correction_4();
for (unsigned int someRandomIndexVar = 0; (someRandomIndexVar<1); ++someRandomIndexVar) {
Smoother_4();
}
}
