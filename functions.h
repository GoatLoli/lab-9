#pragma once
#define N_Max 100

namespace pm
{
    void Read(int matrix[N_Max][N_Max], int& n, int& m);

    void Write(int matrix[N_Max][N_Max], int n, int m);

    bool isConsistZero(int x);

    //*bool isConsistZeroInMatrix(int matrix[N_Max][N_Max], int n, int m);

    void findMaxStringValue(int matrix[N_Max][N_Max], int maxValue2[N_Max], int n, int m);

    bool isMaxDiagonal(int matrix[N_Max][N_Max], int maxValue2[N_Max], int n, int m);

    void findDiagonalMult(int matrix[N_Max][N_Max], int mult, int n, int m);

    void replaceConsistZero(int matrix[N_Max][N_Max], int mult, int n, int m);
}