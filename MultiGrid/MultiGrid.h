#ifndef EXASTENCILS_MULTIGRID_MULTIGRID_H
#define EXASTENCILS_MULTIGRID_MULTIGRID_H
#include "Globals/Globals.h"
#pragma warning(disable : 4800)
#include <mpi.h>
#include <immintrin.h>
#include <algorithm>
#include "Util/Log.h"
#include "Util/Vector.h"
#include "Util/Stopwatch.h"
#include "Primitives/CommunicationFunctions.h"
#include "Domains/DomainGenerated.h"
void initFieldsWithZero();
double bcSol(double yPos, double xPos);
void VCycle_0();
void VCycle_0_0();
void VCycle_GMRF_0();
void VCycle_GMRF_0_0();
void VCycle_1();
void VCycle_2();
void VCycle_3();
void VCycle_4();
void VCycle_5();
void VCycle_6();
void VCycle_7();
void VCycle_8();
void VCycle_GMRF_1();
void VCycle_GMRF_2();
void VCycle_GMRF_3();
void VCycle_GMRF_4();
void VCycle_GMRF_5();
void VCycle_GMRF_6();
void VCycle_GMRF_7();
void VCycle_GMRF_8();
void Smoother_1();
void Smoother_2();
void Smoother_3();
void Smoother_4();
void Smoother_5();
void Smoother_6();
void Smoother_7();
void Smoother_8();
void Smoother_GMRF_1();
void Smoother_GMRF_2();
void Smoother_GMRF_3();
void Smoother_GMRF_4();
void Smoother_GMRF_5();
void Smoother_GMRF_6();
void Smoother_GMRF_7();
void Smoother_GMRF_8();
void UpResidual_0();
void UpResidual_1();
void UpResidual_2();
void UpResidual_3();
void UpResidual_4();
void UpResidual_5();
void UpResidual_6();
void UpResidual_7();
void UpResidual_8();
void UpResidual_GMRF_0();
void UpResidual_GMRF_1();
void UpResidual_GMRF_2();
void UpResidual_GMRF_3();
void UpResidual_GMRF_4();
void UpResidual_GMRF_5();
void UpResidual_GMRF_6();
void UpResidual_GMRF_7();
void UpResidual_GMRF_8();
void Restriction_1();
void Restriction_2();
void Restriction_3();
void Restriction_4();
void Restriction_5();
void Restriction_6();
void Restriction_7();
void Restriction_8();
void Restriction_GMRF_1();
void Restriction_GMRF_2();
void Restriction_GMRF_3();
void Restriction_GMRF_4();
void Restriction_GMRF_5();
void Restriction_GMRF_6();
void Restriction_GMRF_7();
void Restriction_GMRF_8();
void Correction_1();
void Correction_2();
void Correction_3();
void Correction_4();
void Correction_5();
void Correction_6();
void Correction_7();
void Correction_8();
void Correction_GMRF_1();
void Correction_GMRF_2();
void Correction_GMRF_3();
void Correction_GMRF_4();
void Correction_GMRF_5();
void Correction_GMRF_6();
void Correction_GMRF_7();
void Correction_GMRF_8();
void SetSolution_0(double value);
void SetSolution_1(double value);
void SetSolution_2(double value);
void SetSolution_3(double value);
void SetSolution_4(double value);
void SetSolution_5(double value);
void SetSolution_6(double value);
void SetSolution_7(double value);
void SetSolution_8(double value);
double L2Residual_0_0();
double L2Residual_0_8();
void SetSolution_GMRF_0(double value);
void SetSolution_GMRF_1(double value);
void SetSolution_GMRF_2(double value);
void SetSolution_GMRF_3(double value);
void SetSolution_GMRF_4(double value);
void SetSolution_GMRF_5(double value);
void SetSolution_GMRF_6(double value);
void SetSolution_GMRF_7(double value);
void SetSolution_GMRF_8(double value);
double L2Residual_GMRF_0_0();
double L2Residual_GMRF_0_8();
void InitSolution();
void InitRHS();
void InitLaplace_8();
void InitLaplace_0();
void InitLaplace_1();
void InitLaplace_2();
void InitLaplace_3();
void InitLaplace_4();
void InitLaplace_5();
void InitLaplace_6();
void InitLaplace_7();
void InitSolution_GMRF();
void InitRHS_GMRF();
void InitLaplace_GMRF_8();
void InitLaplace_GMRF_0();
void InitLaplace_GMRF_1();
void InitLaplace_GMRF_2();
void InitLaplace_GMRF_3();
void InitLaplace_GMRF_4();
void InitLaplace_GMRF_5();
void InitLaplace_GMRF_6();
void InitLaplace_GMRF_7();
void Solve();
void Solve_GMRF();
int main(int argc, char** argv);

#endif
