// (вариант 6) Дана целочисленная матрица {Aij}i=1...n;j=1..n , n<=100. Если все диагональные элементы матрицы являются 
// наибольшими элементами своих строк, заменить элементы матрицы, содержащие цифру 0, на произведение диагональных элементов. 

//используйте процедуры и функции : Функция чтения, Функция обработки(может быть несколько, Функция записи
//Их необходимо расположить в отдельных файлах(*.hpp и * .cpp) в отдельном пространстве имен.


#include <iostream>
#include "functions.h"

int main()
{
    int n, m;
    int matrix[N_Max][N_Max];
    //int maxValue = INT_MIN;
    int mult = 1;

    //ввод
    pm::Read( matrix, n, m);


    std::cout << "isConsistZero: " << pm::isConsistZero << "\n";
    //std::cout << "isConsistZeroInMatrix: " << isConsistZeroInMatrix << "\n";
    std::cout << "findMaxStringValue: " << pm::findMaxStringValue << "\n";
    std::cout << "isMaxDiagonal: " << pm::isMaxDiagonal << "\n";
    std::cout << "findDiagonalMult: " << pm::findDiagonalMult << "\n";
    std::cout << "replaceConsistZero: " << pm::replaceConsistZero << "\n";
    //найти максимальный элемент строки
    int maxValue2[N_Max];

    pm::findMaxStringValue(matrix, maxValue2, n, m);


    // проверить является ли наибольший элемент строки диагональным
    if (pm::isMaxDiagonal(matrix, maxValue2, n, m))
    {
        //найти диагональное произведение
        pm::findDiagonalMult(matrix, mult, n, m);

        //заменить элемент матрицы с "0" на диагональное произведение
        //1. наличие "0" в числе
        //2. замена на mult
        pm::replaceConsistZero(matrix,mult, n, m);

    }
     
    //вывод
    pm::Write(matrix, n, m);
}

