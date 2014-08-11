#include "Primitives/CommunicationFunctions.h"
void waitForMPIReq(MPI_Request* request) {
MPI_Status stat;
if (MPI_ERR_IN_STATUS == MPI_Wait(request, &stat)) {
char msg[MPI_MAX_ERROR_STRING];
int len;
MPI_Error_string(stat.MPI_ERROR, msg, &len);
LOG_WARNING("MPI Error encountered (" << msg << ")");
}
*request = MPI_Request();
}
