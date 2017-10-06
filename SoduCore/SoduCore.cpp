// SoduCore.cpp : 定义 DLL 应用程序的导出函数。
//

#include "stdafx.h"
#include "SoduCore.h"
#include "puzzle_generator.h"
#include "dlx.h"

SODUCORE_API void generate_m(int number, int mode, int **result)
{
    generate(number, mode, result);
}

SODUCORE_API void generate_r(int number, int lower, int upper, bool unique, int **result)
{
    generate(number, lower, upper, unique, result);
}

SODUCORE_API bool solve_s(int * puzzle, int * solution)
{
    return solve(puzzle, solution);
}

SODUCORE_API bool dlxFind(int N, bool random, void ResDealing(const int *Res))
{
    dlx DLX;
    return DLX.find(N, random, ResDealing);
}
