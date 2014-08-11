#include "MultiGrid/MultiGrid.h"
double bcSol(double yPos, double xPos) {
if ((yPos>=1.000000e+00)) {
return UN;
}
if ((xPos>=1.000000e+00)) {
return UE;
}
if ((yPos<=0.000000e+00)) {
return US;
}
if ((xPos<=0.000000e+00)) {
return UW;
}
return 0.000000e+00;
}
