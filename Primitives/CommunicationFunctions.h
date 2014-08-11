#ifndef EXASTENCILS_PRIMITIVES_COMMUNICATIONFUNCTIONS_H
#define EXASTENCILS_PRIMITIVES_COMMUNICATIONFUNCTIONS_H
#define _USE_MATH_DEFINES
#include <cmath>
#pragma warning(disable : 4800)
#include <mpi.h>
#include <immintrin.h>
#include <algorithm>
#include "Globals/Globals.h"
#include "Util/Log.h"
#include "Util/Vector.h"
#include "MultiGrid/MultiGrid.h"
void waitForMPIReq(MPI_Request* request);
void connectRemoteElement(size_t localFragId, size_t localNeighId, int remoteRank, int location, int domain);
void exchsolutionData_0(unsigned int slot);
void exchsolutionData_1(unsigned int slot);
void exchsolutionData_2(unsigned int slot);
void exchsolutionData_3(unsigned int slot);
void exchsolutionData_4(unsigned int slot);
void exchsolutionData_5(unsigned int slot);
void exchsolutionData_6(unsigned int slot);
void exchsolutionData_7(unsigned int slot);
void exchsolutionData_8(unsigned int slot);
void exchsolutionmeanData_0(unsigned int slot);
void exchsolutionmeanData_1(unsigned int slot);
void exchsolutionmeanData_2(unsigned int slot);
void exchsolutionmeanData_3(unsigned int slot);
void exchsolutionmeanData_4(unsigned int slot);
void exchsolutionmeanData_5(unsigned int slot);
void exchsolutionmeanData_6(unsigned int slot);
void exchsolutionmeanData_7(unsigned int slot);
void exchsolutionmeanData_8(unsigned int slot);
void exchresidualData_0(unsigned int slot);
void exchresidualData_1(unsigned int slot);
void exchresidualData_2(unsigned int slot);
void exchresidualData_3(unsigned int slot);
void exchresidualData_4(unsigned int slot);
void exchresidualData_5(unsigned int slot);
void exchresidualData_6(unsigned int slot);
void exchresidualData_7(unsigned int slot);
void exchresidualData_8(unsigned int slot);
void exchrhsData_0(unsigned int slot);
void exchrhsData_1(unsigned int slot);
void exchrhsData_2(unsigned int slot);
void exchrhsData_3(unsigned int slot);
void exchrhsData_4(unsigned int slot);
void exchrhsData_5(unsigned int slot);
void exchrhsData_6(unsigned int slot);
void exchrhsData_7(unsigned int slot);
void exchrhsData_8(unsigned int slot);
void exchvecpData_0(unsigned int slot);
void exchvecgradpData_0(unsigned int slot);
void exchsolution_gmrfData_0(unsigned int slot);
void exchsolution_gmrfData_1(unsigned int slot);
void exchsolution_gmrfData_2(unsigned int slot);
void exchsolution_gmrfData_3(unsigned int slot);
void exchsolution_gmrfData_4(unsigned int slot);
void exchsolution_gmrfData_5(unsigned int slot);
void exchsolution_gmrfData_6(unsigned int slot);
void exchsolution_gmrfData_7(unsigned int slot);
void exchsolution_gmrfData_8(unsigned int slot);
void exchresidual_gmrfData_0(unsigned int slot);
void exchresidual_gmrfData_1(unsigned int slot);
void exchresidual_gmrfData_2(unsigned int slot);
void exchresidual_gmrfData_3(unsigned int slot);
void exchresidual_gmrfData_4(unsigned int slot);
void exchresidual_gmrfData_5(unsigned int slot);
void exchresidual_gmrfData_6(unsigned int slot);
void exchresidual_gmrfData_7(unsigned int slot);
void exchresidual_gmrfData_8(unsigned int slot);
void exchrhs_gmrfData_8(unsigned int slot);
void exchrhs_gmrfData_0(unsigned int slot);
void exchrhs_gmrfData_1(unsigned int slot);
void exchrhs_gmrfData_2(unsigned int slot);
void exchrhs_gmrfData_3(unsigned int slot);
void exchrhs_gmrfData_4(unsigned int slot);
void exchrhs_gmrfData_5(unsigned int slot);
void exchrhs_gmrfData_6(unsigned int slot);
void exchrhs_gmrfData_7(unsigned int slot);
void exchvecp_gmrfData_0(unsigned int slot);
void exchvecgradp_gmrfData_0(unsigned int slot);
void exchlaplacecoeffData_0(unsigned int slot);
void exchlaplacecoeffData_1(unsigned int slot);
void exchlaplacecoeffData_2(unsigned int slot);
void exchlaplacecoeffData_3(unsigned int slot);
void exchlaplacecoeffData_4(unsigned int slot);
void exchlaplacecoeffData_5(unsigned int slot);
void exchlaplacecoeffData_6(unsigned int slot);
void exchlaplacecoeffData_7(unsigned int slot);
void exchlaplacecoeffData_8(unsigned int slot);
void exchlaplacecoeff_gmrfData_0(unsigned int slot);
void exchlaplacecoeff_gmrfData_1(unsigned int slot);
void exchlaplacecoeff_gmrfData_2(unsigned int slot);
void exchlaplacecoeff_gmrfData_3(unsigned int slot);
void exchlaplacecoeff_gmrfData_4(unsigned int slot);
void exchlaplacecoeff_gmrfData_5(unsigned int slot);
void exchlaplacecoeff_gmrfData_6(unsigned int slot);
void exchlaplacecoeff_gmrfData_7(unsigned int slot);
void exchlaplacecoeff_gmrfData_8(unsigned int slot);

#endif
