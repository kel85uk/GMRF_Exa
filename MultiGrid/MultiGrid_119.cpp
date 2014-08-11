#include "MultiGrid/MultiGrid.h"
void InitLaplace_6() {
exchlaplacecoeffData_7(0);
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
if (isValidForSubdomain[1]) {
/* Statements in this Scop: S260, S262, S265, S268, S267, S261, S264, S263, S266 */
for (int i0 = iterationOffsetBegin[1][1]; (i0<=(iterationOffsetEnd[1][1]+64)); i0 += 1) {
double* fieldData_LaplaceCoeff_6_p1 = (&fieldData_LaplaceCoeff[6][(i0*68)]);
double* fieldData_LaplaceCoeff_7_p1 = (&fieldData_LaplaceCoeff[7][(i0*264)]);
int i1 = iterationOffsetBegin[1][0];
for (; (i1<=(iterationOffsetEnd[1][0]+63)); i1 += 2) {
{
{
{
{
{
{
{
fieldData_LaplaceCoeff_6_p1[(i1+31962)] = ((((((fieldData_LaplaceCoeff_7_p1[((i1*2)+17294)]+fieldData_LaplaceCoeff_7_p1[((i1*2)+69303)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+17295)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+69171)])*1.250000e-01)+((((fieldData_LaplaceCoeff_7_p1[((i1*2)+121179)]+fieldData_LaplaceCoeff_7_p1[((i1*2)+121046)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+121047)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+121178)])*2.500000e-01))+(fieldData_LaplaceCoeff_7_p1[((i1*2)+3)]*6.250000e-02));
fieldData_LaplaceCoeff_6_p1[(i1+70)] = ((((((((((((((((((((fieldData_LaplaceCoeff_7_p1[((i1*2)+51879)]+fieldData_LaplaceCoeff_7_p1[((i1*2)+69433)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+34587)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+69435)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+17294)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+69303)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+51877)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+52009)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+17557)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+34586)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+52011)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+34851)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+17558)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+69301)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+34850)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+17293)])*1.250000e-01)+((((((((((((((((((((fieldData_LaplaceCoeff_7_p1[((i1*2)+138470)]+fieldData_LaplaceCoeff_7_p1[((i1*2)+86595)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+103887)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+138338)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+266)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+86727)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+121177)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+103886)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+121310)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+2)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+103754)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+86594)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+135)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+86726)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+133)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+121309)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+138469)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+103755)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+138337)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+121178)])*2.500000e-01))+((((((((fieldData_LaplaceCoeff_7_p1[((i1*2)+17425)]+fieldData_LaplaceCoeff_7_p1[((i1*2)+34719)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+17426)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+34718)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+52010)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+69302)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+51878)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+69434)])*5.000000e-01))+fieldData_LaplaceCoeff_7_p1[((i1*2)+134)])+((((fieldData_LaplaceCoeff_7_p1[((i1*2)+265)]+fieldData_LaplaceCoeff_7_p1[((i1*2)+3)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+1)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+267)])*6.250000e-02));
}
fieldData_LaplaceCoeff_6_p1[(i1+36518)] = ((((((fieldData_LaplaceCoeff_7_p1[((i1*2)+52143)]+fieldData_LaplaceCoeff_7_p1[((i1*2)+17559)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+52011)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+17558)])*1.250000e-01)+((((fieldData_LaplaceCoeff_7_p1[((i1*2)+138470)]+fieldData_LaplaceCoeff_7_p1[((i1*2)+138603)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+138602)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+138471)])*2.500000e-01))+(fieldData_LaplaceCoeff_7_p1[((i1*2)+267)]*6.250000e-02));
}
fieldData_LaplaceCoeff_6_p1[(i1+9182)] = (((((((((((fieldData_LaplaceCoeff_7_p1[((i1*2)+69433)]+fieldData_LaplaceCoeff_7_p1[((i1*2)+34585)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+52009)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+51877)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+34849)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+34586)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+69301)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+34850)])*1.250000e-01)+(((((((((fieldData_LaplaceCoeff_7_p1[((i1*2)+103753)]+fieldData_LaplaceCoeff_7_p1[((i1*2)+86725)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+86593)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+103886)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+103754)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+86594)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+133)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+86726)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+103885)])*2.500000e-01))+((fieldData_LaplaceCoeff_7_p1[((i1*2)+34718)]+fieldData_LaplaceCoeff_7_p1[((i1*2)+34717)])*5.000000e-01))+((fieldData_LaplaceCoeff_7_p1[((i1*2)+265)]+fieldData_LaplaceCoeff_7_p1[((i1*2)+1)])*6.250000e-02));
}
fieldData_LaplaceCoeff_6_p1[(i1+13738)] = (((((((((((fieldData_LaplaceCoeff_7_p1[((i1*2)+52143)]+fieldData_LaplaceCoeff_7_p1[((i1*2)+52141)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+52009)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+17557)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+52011)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+17558)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+34851)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+34850)])*1.250000e-01)+(((((((((fieldData_LaplaceCoeff_7_p1[((i1*2)+138470)]+fieldData_LaplaceCoeff_7_p1[((i1*2)+103887)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+266)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+104018)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+138601)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+103886)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+138602)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+104019)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+138469)])*2.500000e-01))+((fieldData_LaplaceCoeff_7_p1[((i1*2)+52010)]+fieldData_LaplaceCoeff_7_p1[((i1*2)+52142)])*5.000000e-01))+((fieldData_LaplaceCoeff_7_p1[((i1*2)+265)]+fieldData_LaplaceCoeff_7_p1[((i1*2)+267)])*6.250000e-02));
}
fieldData_LaplaceCoeff_6_p1[(i1+4626)] = (((((((((((fieldData_LaplaceCoeff_7_p1[((i1*2)+51879)]+fieldData_LaplaceCoeff_7_p1[((i1*2)+17559)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+69435)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+17294)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+69303)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+17295)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+52011)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+17558)])*1.250000e-01)+(((((((((fieldData_LaplaceCoeff_7_p1[((i1*2)+121179)]+fieldData_LaplaceCoeff_7_p1[((i1*2)+138470)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+138338)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+138339)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+121311)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+121310)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+135)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+138471)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+121178)])*2.500000e-01))+((fieldData_LaplaceCoeff_7_p1[((i1*2)+17427)]+fieldData_LaplaceCoeff_7_p1[((i1*2)+17426)])*5.000000e-01))+((fieldData_LaplaceCoeff_7_p1[((i1*2)+3)]+fieldData_LaplaceCoeff_7_p1[((i1*2)+267)])*6.250000e-02));
}
fieldData_LaplaceCoeff_6_p1[(i1+18294)] = (((((((((((fieldData_LaplaceCoeff_7_p1[((i1*2)+69169)]+fieldData_LaplaceCoeff_7_p1[((i1*2)+17294)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+34587)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+69303)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+34586)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+69301)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+69171)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+17293)])*1.250000e-01)+(((((((((fieldData_LaplaceCoeff_7_p1[((i1*2)+86595)]+fieldData_LaplaceCoeff_7_p1[((i1*2)+121046)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+86463)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+121177)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+86462)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+2)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+86594)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+121045)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+121178)])*2.500000e-01))+((fieldData_LaplaceCoeff_7_p1[((i1*2)+69170)]+fieldData_LaplaceCoeff_7_p1[((i1*2)+69302)])*5.000000e-01))+((fieldData_LaplaceCoeff_7_p1[((i1*2)+3)]+fieldData_LaplaceCoeff_7_p1[((i1*2)+1)])*6.250000e-02));
}
fieldData_LaplaceCoeff_6_p1[(i1+27406)] = ((((((fieldData_LaplaceCoeff_7_p1[((i1*2)+52141)]+fieldData_LaplaceCoeff_7_p1[((i1*2)+52009)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+34849)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+34850)])*1.250000e-01)+((((fieldData_LaplaceCoeff_7_p1[((i1*2)+104017)]+fieldData_LaplaceCoeff_7_p1[((i1*2)+104018)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+103886)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+103885)])*2.500000e-01))+(fieldData_LaplaceCoeff_7_p1[((i1*2)+265)]*6.250000e-02));
}
{
{
{
{
{
{
{
fieldData_LaplaceCoeff_6_p1[(i1+31963)] = ((((((fieldData_LaplaceCoeff_7_p1[((i1*2)+17296)]+fieldData_LaplaceCoeff_7_p1[((i1*2)+69305)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+17297)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+69173)])*1.250000e-01)+((((fieldData_LaplaceCoeff_7_p1[((i1*2)+121181)]+fieldData_LaplaceCoeff_7_p1[((i1*2)+121048)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+121049)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+121180)])*2.500000e-01))+(fieldData_LaplaceCoeff_7_p1[((i1*2)+5)]*6.250000e-02));
fieldData_LaplaceCoeff_6_p1[(i1+71)] = ((((((((((((((((((((fieldData_LaplaceCoeff_7_p1[((i1*2)+51881)]+fieldData_LaplaceCoeff_7_p1[((i1*2)+69435)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+34589)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+69437)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+17296)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+69305)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+51879)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+52011)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+17559)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+34588)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+52013)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+34853)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+17560)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+69303)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+34852)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+17295)])*1.250000e-01)+((((((((((((((((((((fieldData_LaplaceCoeff_7_p1[((i1*2)+138472)]+fieldData_LaplaceCoeff_7_p1[((i1*2)+86597)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+103889)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+138340)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+268)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+86729)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+121179)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+103888)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+121312)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+4)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+103756)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+86596)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+137)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+86728)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+135)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+121311)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+138471)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+103757)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+138339)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+121180)])*2.500000e-01))+((((((((fieldData_LaplaceCoeff_7_p1[((i1*2)+17427)]+fieldData_LaplaceCoeff_7_p1[((i1*2)+34721)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+17428)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+34720)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+52012)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+69304)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+51880)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+69436)])*5.000000e-01))+fieldData_LaplaceCoeff_7_p1[((i1*2)+136)])+((((fieldData_LaplaceCoeff_7_p1[((i1*2)+267)]+fieldData_LaplaceCoeff_7_p1[((i1*2)+5)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+3)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+269)])*6.250000e-02));
}
fieldData_LaplaceCoeff_6_p1[(i1+36519)] = ((((((fieldData_LaplaceCoeff_7_p1[((i1*2)+52145)]+fieldData_LaplaceCoeff_7_p1[((i1*2)+17561)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+52013)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+17560)])*1.250000e-01)+((((fieldData_LaplaceCoeff_7_p1[((i1*2)+138472)]+fieldData_LaplaceCoeff_7_p1[((i1*2)+138605)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+138604)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+138473)])*2.500000e-01))+(fieldData_LaplaceCoeff_7_p1[((i1*2)+269)]*6.250000e-02));
}
fieldData_LaplaceCoeff_6_p1[(i1+9183)] = (((((((((((fieldData_LaplaceCoeff_7_p1[((i1*2)+69435)]+fieldData_LaplaceCoeff_7_p1[((i1*2)+34587)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+52011)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+51879)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+34851)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+34588)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+69303)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+34852)])*1.250000e-01)+(((((((((fieldData_LaplaceCoeff_7_p1[((i1*2)+103755)]+fieldData_LaplaceCoeff_7_p1[((i1*2)+86727)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+86595)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+103888)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+103756)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+86596)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+135)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+86728)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+103887)])*2.500000e-01))+((fieldData_LaplaceCoeff_7_p1[((i1*2)+34720)]+fieldData_LaplaceCoeff_7_p1[((i1*2)+34719)])*5.000000e-01))+((fieldData_LaplaceCoeff_7_p1[((i1*2)+267)]+fieldData_LaplaceCoeff_7_p1[((i1*2)+3)])*6.250000e-02));
}
fieldData_LaplaceCoeff_6_p1[(i1+13739)] = (((((((((((fieldData_LaplaceCoeff_7_p1[((i1*2)+52145)]+fieldData_LaplaceCoeff_7_p1[((i1*2)+52143)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+52011)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+17559)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+52013)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+17560)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+34853)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+34852)])*1.250000e-01)+(((((((((fieldData_LaplaceCoeff_7_p1[((i1*2)+138472)]+fieldData_LaplaceCoeff_7_p1[((i1*2)+103889)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+268)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+104020)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+138603)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+103888)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+138604)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+104021)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+138471)])*2.500000e-01))+((fieldData_LaplaceCoeff_7_p1[((i1*2)+52012)]+fieldData_LaplaceCoeff_7_p1[((i1*2)+52144)])*5.000000e-01))+((fieldData_LaplaceCoeff_7_p1[((i1*2)+267)]+fieldData_LaplaceCoeff_7_p1[((i1*2)+269)])*6.250000e-02));
}
fieldData_LaplaceCoeff_6_p1[(i1+4627)] = (((((((((((fieldData_LaplaceCoeff_7_p1[((i1*2)+51881)]+fieldData_LaplaceCoeff_7_p1[((i1*2)+17561)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+69437)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+17296)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+69305)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+17297)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+52013)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+17560)])*1.250000e-01)+(((((((((fieldData_LaplaceCoeff_7_p1[((i1*2)+121181)]+fieldData_LaplaceCoeff_7_p1[((i1*2)+138472)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+138340)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+138341)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+121313)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+121312)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+137)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+138473)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+121180)])*2.500000e-01))+((fieldData_LaplaceCoeff_7_p1[((i1*2)+17429)]+fieldData_LaplaceCoeff_7_p1[((i1*2)+17428)])*5.000000e-01))+((fieldData_LaplaceCoeff_7_p1[((i1*2)+5)]+fieldData_LaplaceCoeff_7_p1[((i1*2)+269)])*6.250000e-02));
}
fieldData_LaplaceCoeff_6_p1[(i1+18295)] = (((((((((((fieldData_LaplaceCoeff_7_p1[((i1*2)+69171)]+fieldData_LaplaceCoeff_7_p1[((i1*2)+17296)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+34589)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+69305)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+34588)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+69303)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+69173)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+17295)])*1.250000e-01)+(((((((((fieldData_LaplaceCoeff_7_p1[((i1*2)+86597)]+fieldData_LaplaceCoeff_7_p1[((i1*2)+121048)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+86465)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+121179)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+86464)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+4)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+86596)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+121047)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+121180)])*2.500000e-01))+((fieldData_LaplaceCoeff_7_p1[((i1*2)+69172)]+fieldData_LaplaceCoeff_7_p1[((i1*2)+69304)])*5.000000e-01))+((fieldData_LaplaceCoeff_7_p1[((i1*2)+5)]+fieldData_LaplaceCoeff_7_p1[((i1*2)+3)])*6.250000e-02));
}
fieldData_LaplaceCoeff_6_p1[(i1+27407)] = ((((((fieldData_LaplaceCoeff_7_p1[((i1*2)+52143)]+fieldData_LaplaceCoeff_7_p1[((i1*2)+52011)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+34851)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+34852)])*1.250000e-01)+((((fieldData_LaplaceCoeff_7_p1[((i1*2)+104019)]+fieldData_LaplaceCoeff_7_p1[((i1*2)+104020)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+103888)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+103887)])*2.500000e-01))+(fieldData_LaplaceCoeff_7_p1[((i1*2)+267)]*6.250000e-02));
}
fieldData_LaplaceCoeff_6_p1[(i1+22850)] = ((((((fieldData_LaplaceCoeff_7_p1[((i1*2)+69169)]+fieldData_LaplaceCoeff_7_p1[((i1*2)+34585)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+34586)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+69301)])*1.250000e-01)+((((fieldData_LaplaceCoeff_7_p1[((i1*2)+86593)]+fieldData_LaplaceCoeff_7_p1[((i1*2)+86462)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+86594)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+86461)])*2.500000e-01))+(fieldData_LaplaceCoeff_7_p1[((i1*2)+1)]*6.250000e-02));
fieldData_LaplaceCoeff_6_p1[(i1+22851)] = ((((((fieldData_LaplaceCoeff_7_p1[((i1*2)+69171)]+fieldData_LaplaceCoeff_7_p1[((i1*2)+34587)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+34588)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+69303)])*1.250000e-01)+((((fieldData_LaplaceCoeff_7_p1[((i1*2)+86595)]+fieldData_LaplaceCoeff_7_p1[((i1*2)+86464)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+86596)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+86463)])*2.500000e-01))+(fieldData_LaplaceCoeff_7_p1[((i1*2)+3)]*6.250000e-02));
}
for (; (i1<=(iterationOffsetEnd[1][0]+64)); i1 += 1) {
{
{
{
{
{
{
{
fieldData_LaplaceCoeff_6_p1[(i1+31962)] = ((((((fieldData_LaplaceCoeff_7_p1[((i1*2)+17294)]+fieldData_LaplaceCoeff_7_p1[((i1*2)+69303)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+17295)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+69171)])*1.250000e-01)+((((fieldData_LaplaceCoeff_7_p1[((i1*2)+121179)]+fieldData_LaplaceCoeff_7_p1[((i1*2)+121046)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+121047)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+121178)])*2.500000e-01))+(fieldData_LaplaceCoeff_7_p1[((i1*2)+3)]*6.250000e-02));
fieldData_LaplaceCoeff_6_p1[(i1+70)] = ((((((((((((((((((((fieldData_LaplaceCoeff_7_p1[((i1*2)+51879)]+fieldData_LaplaceCoeff_7_p1[((i1*2)+69433)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+34587)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+69435)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+17294)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+69303)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+51877)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+52009)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+17557)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+34586)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+52011)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+34851)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+17558)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+69301)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+34850)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+17293)])*1.250000e-01)+((((((((((((((((((((fieldData_LaplaceCoeff_7_p1[((i1*2)+138470)]+fieldData_LaplaceCoeff_7_p1[((i1*2)+86595)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+103887)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+138338)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+266)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+86727)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+121177)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+103886)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+121310)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+2)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+103754)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+86594)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+135)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+86726)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+133)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+121309)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+138469)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+103755)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+138337)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+121178)])*2.500000e-01))+((((((((fieldData_LaplaceCoeff_7_p1[((i1*2)+17425)]+fieldData_LaplaceCoeff_7_p1[((i1*2)+34719)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+17426)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+34718)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+52010)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+69302)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+51878)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+69434)])*5.000000e-01))+fieldData_LaplaceCoeff_7_p1[((i1*2)+134)])+((((fieldData_LaplaceCoeff_7_p1[((i1*2)+265)]+fieldData_LaplaceCoeff_7_p1[((i1*2)+3)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+1)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+267)])*6.250000e-02));
}
fieldData_LaplaceCoeff_6_p1[(i1+36518)] = ((((((fieldData_LaplaceCoeff_7_p1[((i1*2)+52143)]+fieldData_LaplaceCoeff_7_p1[((i1*2)+17559)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+52011)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+17558)])*1.250000e-01)+((((fieldData_LaplaceCoeff_7_p1[((i1*2)+138470)]+fieldData_LaplaceCoeff_7_p1[((i1*2)+138603)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+138602)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+138471)])*2.500000e-01))+(fieldData_LaplaceCoeff_7_p1[((i1*2)+267)]*6.250000e-02));
}
fieldData_LaplaceCoeff_6_p1[(i1+9182)] = (((((((((((fieldData_LaplaceCoeff_7_p1[((i1*2)+69433)]+fieldData_LaplaceCoeff_7_p1[((i1*2)+34585)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+52009)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+51877)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+34849)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+34586)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+69301)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+34850)])*1.250000e-01)+(((((((((fieldData_LaplaceCoeff_7_p1[((i1*2)+103753)]+fieldData_LaplaceCoeff_7_p1[((i1*2)+86725)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+86593)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+103886)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+103754)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+86594)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+133)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+86726)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+103885)])*2.500000e-01))+((fieldData_LaplaceCoeff_7_p1[((i1*2)+34718)]+fieldData_LaplaceCoeff_7_p1[((i1*2)+34717)])*5.000000e-01))+((fieldData_LaplaceCoeff_7_p1[((i1*2)+265)]+fieldData_LaplaceCoeff_7_p1[((i1*2)+1)])*6.250000e-02));
}
fieldData_LaplaceCoeff_6_p1[(i1+13738)] = (((((((((((fieldData_LaplaceCoeff_7_p1[((i1*2)+52143)]+fieldData_LaplaceCoeff_7_p1[((i1*2)+52141)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+52009)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+17557)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+52011)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+17558)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+34851)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+34850)])*1.250000e-01)+(((((((((fieldData_LaplaceCoeff_7_p1[((i1*2)+138470)]+fieldData_LaplaceCoeff_7_p1[((i1*2)+103887)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+266)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+104018)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+138601)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+103886)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+138602)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+104019)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+138469)])*2.500000e-01))+((fieldData_LaplaceCoeff_7_p1[((i1*2)+52010)]+fieldData_LaplaceCoeff_7_p1[((i1*2)+52142)])*5.000000e-01))+((fieldData_LaplaceCoeff_7_p1[((i1*2)+265)]+fieldData_LaplaceCoeff_7_p1[((i1*2)+267)])*6.250000e-02));
}
fieldData_LaplaceCoeff_6_p1[(i1+4626)] = (((((((((((fieldData_LaplaceCoeff_7_p1[((i1*2)+51879)]+fieldData_LaplaceCoeff_7_p1[((i1*2)+17559)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+69435)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+17294)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+69303)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+17295)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+52011)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+17558)])*1.250000e-01)+(((((((((fieldData_LaplaceCoeff_7_p1[((i1*2)+121179)]+fieldData_LaplaceCoeff_7_p1[((i1*2)+138470)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+138338)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+138339)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+121311)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+121310)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+135)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+138471)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+121178)])*2.500000e-01))+((fieldData_LaplaceCoeff_7_p1[((i1*2)+17427)]+fieldData_LaplaceCoeff_7_p1[((i1*2)+17426)])*5.000000e-01))+((fieldData_LaplaceCoeff_7_p1[((i1*2)+3)]+fieldData_LaplaceCoeff_7_p1[((i1*2)+267)])*6.250000e-02));
}
fieldData_LaplaceCoeff_6_p1[(i1+18294)] = (((((((((((fieldData_LaplaceCoeff_7_p1[((i1*2)+69169)]+fieldData_LaplaceCoeff_7_p1[((i1*2)+17294)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+34587)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+69303)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+34586)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+69301)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+69171)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+17293)])*1.250000e-01)+(((((((((fieldData_LaplaceCoeff_7_p1[((i1*2)+86595)]+fieldData_LaplaceCoeff_7_p1[((i1*2)+121046)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+86463)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+121177)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+86462)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+2)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+86594)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+121045)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+121178)])*2.500000e-01))+((fieldData_LaplaceCoeff_7_p1[((i1*2)+69170)]+fieldData_LaplaceCoeff_7_p1[((i1*2)+69302)])*5.000000e-01))+((fieldData_LaplaceCoeff_7_p1[((i1*2)+3)]+fieldData_LaplaceCoeff_7_p1[((i1*2)+1)])*6.250000e-02));
}
fieldData_LaplaceCoeff_6_p1[(i1+27406)] = ((((((fieldData_LaplaceCoeff_7_p1[((i1*2)+52141)]+fieldData_LaplaceCoeff_7_p1[((i1*2)+52009)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+34849)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+34850)])*1.250000e-01)+((((fieldData_LaplaceCoeff_7_p1[((i1*2)+104017)]+fieldData_LaplaceCoeff_7_p1[((i1*2)+104018)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+103886)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+103885)])*2.500000e-01))+(fieldData_LaplaceCoeff_7_p1[((i1*2)+265)]*6.250000e-02));
}
fieldData_LaplaceCoeff_6_p1[(i1+22850)] = ((((((fieldData_LaplaceCoeff_7_p1[((i1*2)+69169)]+fieldData_LaplaceCoeff_7_p1[((i1*2)+34585)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+34586)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+69301)])*1.250000e-01)+((((fieldData_LaplaceCoeff_7_p1[((i1*2)+86593)]+fieldData_LaplaceCoeff_7_p1[((i1*2)+86462)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+86594)])+fieldData_LaplaceCoeff_7_p1[((i1*2)+86461)])*2.500000e-01))+(fieldData_LaplaceCoeff_7_p1[((i1*2)+1)]*6.250000e-02));
}
}
}
}
}