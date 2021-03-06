#ifndef EXASTENCILS_GLOBALS_GLOBALS_H
#define EXASTENCILS_GLOBALS_GLOBALS_H
#include "Util/Vector.h"
#pragma warning(disable : 4800)
#include <mpi.h>
#include <random>
#include <functional>
#include "Util/Gamma.h"
extern double UN;
extern double US;
extern double UE;
extern double UW;
extern int alpha;
extern double sigma;
extern double lambda;
extern double nu;
extern double kappa;
extern double dim;
extern MPI_Comm mpiCommunicator;
extern int mpiRank;
extern int mpiSize;
extern double* buffer_Recv[4];
extern double* buffer_Send[4];
extern int commId;
extern double* fieldData_LaplaceCoeff[9];
extern double* fieldData_LaplaceCoeff_GMRF[9];
extern double* fieldData_RHS[9];
extern double* fieldData_RHS_GMRF[9];
extern double* fieldData_Residual[9];
extern double* fieldData_Residual_GMRF[9];
extern double* fieldData_Solution[9];
extern double* fieldData_SolutionMean[9];
extern double* fieldData_Solution_GMRF[9];
extern double* fieldData_VecGradP[9];
extern double* fieldData_VecGradP_GMRF[9];
extern double* fieldData_VecP[9];
extern double* fieldData_VecP_GMRF[9];
extern bool isValidForSubdomain[2];
extern Vec3i iterationOffsetBegin[2];
extern Vec3i iterationOffsetEnd[2];
extern MPI_Request mpiRequest_Recv[4];
extern MPI_Request mpiRequest_Send[4];
extern size_t neighbor_fragCommId[2][4];
extern bool neighbor_isRemote[2][4];
extern bool neighbor_isValid[2][4];
extern int neighbor_remoteRank[2][4];
extern Vec3 pos;
extern Vec3 posBegin;
extern Vec3 posEnd;
extern size_t primitiveId;
extern bool reqOutstanding_Recv[4];
extern bool reqOutstanding_Send[4];
extern MPI_Datatype mpiDatatype_1_129_132;
extern MPI_Datatype mpiDatatype_9_67_4556;
extern MPI_Datatype mpiDatatype_1_257_260;
extern MPI_Datatype mpiDatatype_11_1_12;
extern MPI_Datatype mpiDatatype_1_131_132;
extern MPI_Datatype mpiDatatype_257_1_260;
extern MPI_Datatype mpiDatatype_1_3_6;
extern MPI_Datatype mpiDatatype_35_1_36;
extern MPI_Datatype mpiDatatype_9_5_30;
extern MPI_Datatype mpiDatatype_9_3_30;
extern MPI_Datatype mpiDatatype_2_1_6;
extern MPI_Datatype mpiDatatype_5_1_8;
extern MPI_Datatype mpiDatatype_9_1_12;
extern MPI_Datatype mpiDatatype_9_17_380;
extern MPI_Datatype mpiDatatype_9_129_17292;
extern MPI_Datatype mpiDatatype_1_7_8;
extern MPI_Datatype mpiDatatype_9_257_67340;
extern MPI_Datatype mpiDatatype_3_1_6;
extern MPI_Datatype mpiDatatype_1_11_12;
extern MPI_Datatype mpiDatatype_129_1_132;
extern MPI_Datatype mpiDatatype_9_33_1260;
extern MPI_Datatype mpiDatatype_1_259_260;
extern MPI_Datatype mpiDatatype_9_5_56;
extern MPI_Datatype mpiDatatype_9_11_132;
extern MPI_Datatype mpiDatatype_17_1_20;
extern MPI_Datatype mpiDatatype_9_7_56;
extern MPI_Datatype mpiDatatype_9_131_17292;
extern MPI_Datatype mpiDatatype_65_1_68;
extern MPI_Datatype mpiDatatype_1_2_6;
extern MPI_Datatype mpiDatatype_1_5_6;
extern MPI_Datatype mpiDatatype_259_1_260;
extern MPI_Datatype mpiDatatype_9_65_4556;
extern MPI_Datatype mpiDatatype_9_2_24;
extern MPI_Datatype mpiDatatype_1_19_20;
extern MPI_Datatype mpiDatatype_131_1_132;
extern MPI_Datatype mpiDatatype_9_4_24;
extern MPI_Datatype mpiDatatype_4_1_6;
extern MPI_Datatype mpiDatatype_9_19_380;
extern MPI_Datatype mpiDatatype_1_17_20;
extern MPI_Datatype mpiDatatype_9_9_132;
extern MPI_Datatype mpiDatatype_1_9_12;
extern MPI_Datatype mpiDatatype_9_259_67340;
extern MPI_Datatype mpiDatatype_33_1_36;
extern MPI_Datatype mpiDatatype_1_67_68;
extern MPI_Datatype mpiDatatype_9_35_1260;
extern MPI_Datatype mpiDatatype_1_65_68;
extern MPI_Datatype mpiDatatype_7_1_8;
extern MPI_Datatype mpiDatatype_19_1_20;
extern MPI_Datatype mpiDatatype_1_5_8;
extern MPI_Datatype mpiDatatype_1_35_36;
extern MPI_Datatype mpiDatatype_1_33_36;
extern MPI_Datatype mpiDatatype_67_1_68;
extern MPI_Datatype mpiDatatype_5_1_6;
extern MPI_Datatype mpiDatatype_1_4_6;
void initGlobals();
void destroyGlobals();
void setupBuffers();

#endif
