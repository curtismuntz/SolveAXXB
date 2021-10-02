#ifndef EXTENDEDAXXBELILAMBDASVDSOLVER_H
#define EXTENDEDAXXBELILAMBDASVDSOLVER_H

#include"axxbsolver.h"
namespace axxb {

class ExtendedAXXBEliLambdaSVDSolver:public AXXBSolver
{
public:
    ExtendedAXXBEliLambdaSVDSolver(const Poses A, const Poses B):AXXBSolver(A,B){}
    Pose SolveX();
};
} // namespace axxb
#endif // EXTENDEDAXXBELILAMBDASVDSOLVER_H
