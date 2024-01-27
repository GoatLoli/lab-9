#include "functions.h"
#include <iostream>

namespace pm
{
    void Read(int matrix[N_Max][N_Max], int& n, int& m) //& чтобы m и n работали как матрица (изменяется внутри и снаружи)
    {
        std::cout << "razmer matricy: ";
        std::cin >> n >> m;
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                std::cin >> matrix[i][j];
    }

    void Write(int matrix[N_Max][N_Max], int n, int m)//n и m не меняются
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
                std::cout << matrix[i][j] << " ";
            std::cout << std::endl;

        }
    }

    bool isConsistZero(int x)
    {
        bool flag = false; //нет нуля
        while (x > 0)
        {
            if (x % 10 == 0)
                flag = true;
            x /= 10;
        }
        if (!flag)
            return false;
    }

    /*bool isConsistZeroInMatrix(int matrix[N_Max][N_Max], int n, int m)
    {
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                if (isConsistZero(matrix[i][j]))
                    return true;
        return false;
    }
    */
    void findMaxStringValue(int matrix[N_Max][N_Max], int maxValue2[N_Max], int n, int m)
    {
        for (int i = 0; i < n; i++)
        {
            maxValue2[i] = INT_MIN;
            for (int j = 0; j < m; j++)
            {
                if (maxValue2[i] < matrix[i][j])
                    maxValue2[i] = matrix[i][j];

            }
        }
    }

    bool isMaxDiagonal(int matrix[N_Max][N_Max], int maxValue2[N_Max], int n, int m)
    {
        for (int i = 0; i < n; i++)
        {
            bool flag = false; //максимальное в строке - не диагональное
            if (matrix[i][i] == maxValue2[i])
                flag = true;
            if (!flag)
                return false;
        }
        return true;
    }

    void findDiagonalMult(int matrix[N_Max][N_Max], int mult, int n, int m)
    {
        for (int i = 0; i < n; i++)

        {
            int x = matrix[i][i];
            mult *= x;
        }
    }

    void replaceConsistZero(int matrix[N_Max][N_Max], int mult, int n, int m)
    {
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                if (isConsistZero(matrix[i][j]))
                {
                    matrix[i][j] = mult;
                }
    }

}