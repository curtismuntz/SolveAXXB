#ifndef ANDREFFEXTENDEDAXXBSOLVER_H
#define ANDREFFEXTENDEDAXXBSOLVER_H

#include "axxbsolver.h"

namespace axxb {

class AndreffExtendedAXXBSolver:public AXXBSolver
{
public:
    AndreffExtendedAXXBSolver(const Poses A, const Poses B):AXXBSolver(A,B){}
    Pose SolveX();
};

#endif // ANDREFFEXTENDEDAXXBSOLVER_H

} // namespace axxb
