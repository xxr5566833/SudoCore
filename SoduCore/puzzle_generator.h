#ifndef PUZZLE_GENERATOR_H_
#define PUZZLE_GENERATOR_H_
#pragma once
//here add the statement of ResDealing_toMatrix
void ResDealing_toMatrix(const int *Res);
//add some statement
void getRandomArray(int num, int array[]);
bool judgeResult(int  puzzle[], bool flag[], bool unique);
bool choose(bool flag[], int puzzle[81], bool unique, int emptynum);

void generate(int number, int mode, int **result);
void generate(int number, int lower, int upper, bool unique, int **result);
bool solve(int *puzzle, int *solution);

#endif // !PUZZLE_GENERATOR_H_