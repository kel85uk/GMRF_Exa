#include "Domains/DomainGenerated.h"
void initDomain() {
if (mpiSize != 36) {
LOG_ERROR("Invalid number of MPI processes (" << mpiSize << ") should be " << 36);
return;
}
Vec3 positions[1];
unsigned int posWritePos = 0;
Vec3 rankPos(mpiRank % 6, (mpiRank / 6) % 6, mpiRank / 36);
for (int y = 0; (y<1); y += 1) {
int x = 0;
for (; (x<0); x += 2) {
positions[posWritePos++] = (Vec3((((rankPos.x+5.000000e-01)+x)*5.000000e-01)+-1.000000e+00,((((rankPos.y+5.000000e-01)+y)*5.000000e-01)-1.000000e+00),0));
positions[posWritePos++] = (Vec3((((rankPos.x+5.000000e-01)+(x+1))*5.000000e-01)+-1.000000e+00,((((rankPos.y+5.000000e-01)+y)*5.000000e-01)-1.000000e+00),0));
}
for (; (x<1); x += 1) {
positions[posWritePos++] = (Vec3((((rankPos.x+5.000000e-01)+x)*5.000000e-01)+-1.000000e+00,((((rankPos.y+5.000000e-01)+y)*5.000000e-01)-1.000000e+00),0));
}
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
primitiveId = (((int)floor(((positions[fragmentIdx].y+1.000000e+00)/5.000000e-01))*6)+(int)floor(((positions[fragmentIdx].x+1.000000e+00)/5.000000e-01)));
commId = (((int)floor(((positions[fragmentIdx].y+1.000000e+00)/5.000000e-01))%1)+((int)floor(((positions[fragmentIdx].x+1.000000e+00)/5.000000e-01))%1));
pos = positions[fragmentIdx];
posBegin = (positions[fragmentIdx]-Vec3(2.500000e-01,2.500000e-01,0));
posEnd = (positions[fragmentIdx]+Vec3(2.500000e-01,2.500000e-01,0));
}
for (int fragmentIdx = 0; fragmentIdx < 1; ++fragmentIdx) {
isValidForSubdomain[0] = (((((pos.x>=-1.000000e+00)&&(pos.x<=2.000000e+00))&&(pos.y>=-1.000000e+00))&&(pos.y<=2.000000e+00)));
isValidForSubdomain[1] = (((((pos.x>=0.000000e+00)&&(pos.x<=1.000000e+00))&&(pos.y>=0.000000e+00))&&(pos.y<=1.000000e+00)));
{
Vec3 offsetPos = (pos+Vec3(-1 * 0.5, 0 * 0.5, 0 * 0.0));
if ((isValidForSubdomain[0]&&(((((offsetPos.x>=-1.000000e+00)&&(offsetPos.x<=2.000000e+00))&&(offsetPos.y>=-1.000000e+00))&&(offsetPos.y<=2.000000e+00))))) {
connectRemoteElement(fragmentIdx, (((int)floor(((offsetPos.y+1.000000e+00)/5.000000e-01))%1)+((int)floor(((offsetPos.x+1.000000e+00)/5.000000e-01))%1)), ((((((offsetPos.x<-1.000000e+00)||(offsetPos.x>2.000000e+00))||(offsetPos.y<-1.000000e+00))||(offsetPos.y>2.000000e+00))) ? MPI_PROC_NULL : ((((int)floor(((offsetPos.y+1.000000e+00)/5.000000e-01))/1)*6)+((int)floor(((offsetPos.x+1.000000e+00)/5.000000e-01))/1))), 0, 0);
}
if ((isValidForSubdomain[1]&&(((((offsetPos.x>=0.000000e+00)&&(offsetPos.x<=1.000000e+00))&&(offsetPos.y>=0.000000e+00))&&(offsetPos.y<=1.000000e+00))))) {
connectRemoteElement(fragmentIdx, (((int)floor(((offsetPos.y+1.000000e+00)/5.000000e-01))%1)+((int)floor(((offsetPos.x+1.000000e+00)/5.000000e-01))%1)), ((((((offsetPos.x<0.000000e+00)||(offsetPos.x>1.000000e+00))||(offsetPos.y<0.000000e+00))||(offsetPos.y>1.000000e+00))) ? MPI_PROC_NULL : ((((int)floor(((offsetPos.y+1.000000e+00)/5.000000e-01))/1)*6)+((int)floor(((offsetPos.x+1.000000e+00)/5.000000e-01))/1))), 0, 1);
}
}
{
Vec3 offsetPos = (pos+Vec3(1 * 0.5, 0 * 0.5, 0 * 0.0));
if ((isValidForSubdomain[0]&&(((((offsetPos.x>=-1.000000e+00)&&(offsetPos.x<=2.000000e+00))&&(offsetPos.y>=-1.000000e+00))&&(offsetPos.y<=2.000000e+00))))) {
connectRemoteElement(fragmentIdx, (((int)floor(((offsetPos.y+1.000000e+00)/5.000000e-01))%1)+((int)floor(((offsetPos.x+1.000000e+00)/5.000000e-01))%1)), ((((((offsetPos.x<-1.000000e+00)||(offsetPos.x>2.000000e+00))||(offsetPos.y<-1.000000e+00))||(offsetPos.y>2.000000e+00))) ? MPI_PROC_NULL : ((((int)floor(((offsetPos.y+1.000000e+00)/5.000000e-01))/1)*6)+((int)floor(((offsetPos.x+1.000000e+00)/5.000000e-01))/1))), 1, 0);
}
if ((isValidForSubdomain[1]&&(((((offsetPos.x>=0.000000e+00)&&(offsetPos.x<=1.000000e+00))&&(offsetPos.y>=0.000000e+00))&&(offsetPos.y<=1.000000e+00))))) {
connectRemoteElement(fragmentIdx, (((int)floor(((offsetPos.y+1.000000e+00)/5.000000e-01))%1)+((int)floor(((offsetPos.x+1.000000e+00)/5.000000e-01))%1)), ((((((offsetPos.x<0.000000e+00)||(offsetPos.x>1.000000e+00))||(offsetPos.y<0.000000e+00))||(offsetPos.y>1.000000e+00))) ? MPI_PROC_NULL : ((((int)floor(((offsetPos.y+1.000000e+00)/5.000000e-01))/1)*6)+((int)floor(((offsetPos.x+1.000000e+00)/5.000000e-01))/1))), 1, 1);
}
}
{
Vec3 offsetPos = (pos+Vec3(0 * 0.5, -1 * 0.5, 0 * 0.0));
if ((isValidForSubdomain[0]&&(((((offsetPos.x>=-1.000000e+00)&&(offsetPos.x<=2.000000e+00))&&(offsetPos.y>=-1.000000e+00))&&(offsetPos.y<=2.000000e+00))))) {
connectRemoteElement(fragmentIdx, (((int)floor(((offsetPos.y+1.000000e+00)/5.000000e-01))%1)+((int)floor(((offsetPos.x+1.000000e+00)/5.000000e-01))%1)), ((((((offsetPos.x<-1.000000e+00)||(offsetPos.x>2.000000e+00))||(offsetPos.y<-1.000000e+00))||(offsetPos.y>2.000000e+00))) ? MPI_PROC_NULL : ((((int)floor(((offsetPos.y+1.000000e+00)/5.000000e-01))/1)*6)+((int)floor(((offsetPos.x+1.000000e+00)/5.000000e-01))/1))), 2, 0);
}
if ((isValidForSubdomain[1]&&(((((offsetPos.x>=0.000000e+00)&&(offsetPos.x<=1.000000e+00))&&(offsetPos.y>=0.000000e+00))&&(offsetPos.y<=1.000000e+00))))) {
connectRemoteElement(fragmentIdx, (((int)floor(((offsetPos.y+1.000000e+00)/5.000000e-01))%1)+((int)floor(((offsetPos.x+1.000000e+00)/5.000000e-01))%1)), ((((((offsetPos.x<0.000000e+00)||(offsetPos.x>1.000000e+00))||(offsetPos.y<0.000000e+00))||(offsetPos.y>1.000000e+00))) ? MPI_PROC_NULL : ((((int)floor(((offsetPos.y+1.000000e+00)/5.000000e-01))/1)*6)+((int)floor(((offsetPos.x+1.000000e+00)/5.000000e-01))/1))), 2, 1);
}
}
{
Vec3 offsetPos = (pos+Vec3(0 * 0.5, 1 * 0.5, 0 * 0.0));
if ((isValidForSubdomain[0]&&(((((offsetPos.x>=-1.000000e+00)&&(offsetPos.x<=2.000000e+00))&&(offsetPos.y>=-1.000000e+00))&&(offsetPos.y<=2.000000e+00))))) {
connectRemoteElement(fragmentIdx, (((int)floor(((offsetPos.y+1.000000e+00)/5.000000e-01))%1)+((int)floor(((offsetPos.x+1.000000e+00)/5.000000e-01))%1)), ((((((offsetPos.x<-1.000000e+00)||(offsetPos.x>2.000000e+00))||(offsetPos.y<-1.000000e+00))||(offsetPos.y>2.000000e+00))) ? MPI_PROC_NULL : ((((int)floor(((offsetPos.y+1.000000e+00)/5.000000e-01))/1)*6)+((int)floor(((offsetPos.x+1.000000e+00)/5.000000e-01))/1))), 3, 0);
}
if ((isValidForSubdomain[1]&&(((((offsetPos.x>=0.000000e+00)&&(offsetPos.x<=1.000000e+00))&&(offsetPos.y>=0.000000e+00))&&(offsetPos.y<=1.000000e+00))))) {
connectRemoteElement(fragmentIdx, (((int)floor(((offsetPos.y+1.000000e+00)/5.000000e-01))%1)+((int)floor(((offsetPos.x+1.000000e+00)/5.000000e-01))%1)), ((((((offsetPos.x<0.000000e+00)||(offsetPos.x>1.000000e+00))||(offsetPos.y<0.000000e+00))||(offsetPos.y>1.000000e+00))) ? MPI_PROC_NULL : ((((int)floor(((offsetPos.y+1.000000e+00)/5.000000e-01))/1)*6)+((int)floor(((offsetPos.x+1.000000e+00)/5.000000e-01))/1))), 3, 1);
}
}
}
setupBuffers();
}
