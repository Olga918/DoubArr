#pragma once



#include <iostream>
#include <string>
using namespace std;



void AlocDoubleArr(int**& arr, int row, int col);

void PrintDoubleArray(int** arr, int row, int col);

void DeleteDoubleArray(int**& arr, int row);

void InitRandomValues(int** arr, int row, int col, int minValue, int maxValue);

void ReplaceNegativesWithZero(int** arr, int row, int col);

void CreateCharStringArray(char**& arr, int row);

void PrintCharStringArray(char** arr, int row);

void DeleteCharStringArray(char**& arr, int row);



//1. Вывод на екран двовимірного масиву
//2. Видалення всього двовимірного масиву
//3. Ініціалізація елементів двовимірного масиву випадковими значення в діапазоні - 5 до 20
//4. В двовимірному масиві всі від'ємні значення заміняємо значеннями нуль
//5. Створити двовимірний масив строк я вчу c++; Друга строка я роблю домашнє завдання C++; Третя строка я можу кодити на c++