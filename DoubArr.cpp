#include "DoubArr.h"
#include <iostream>
#include <cstring> 
using namespace std;





void AlocDoubleArr(int**& arr, int row, int col) {
    if (!arr) {
        arr = new int* [row];
        for (int j = 0; j < row; j++) {
            arr[j] = new int[col] {}; 
        }
    }
}

void PrintDoubleArray(int** arr, int row, int col) {
    for (int j = 0; j < row; j++) {
        for (int i = 0; i < col; i++) {
            cout << arr[j][i] << "\t";
        }
        cout << endl;
    }
}


void DeleteDoubleArray(int**& arr, int row) {
    if (arr) {
        for (int j = 0; j < row; j++) {
            delete[] arr[j];
        }
        delete[] arr;
        arr = nullptr;
    }
}

void InitRandomValues(int** arr, int row, int col, int minValue, int maxValue) {
    for (int j = 0; j < row; j++) {
        for (int i = 0; i < col; i++) {
            arr[j][i] = minValue + rand() % (maxValue - minValue + 1);
        }
    }
}

void ReplaceNegativesWithZero(int** arr, int row, int col) {
    for (int j = 0; j < row; j++) {
        for (int i = 0; i < col; i++) {
            if (arr[j][i] < 0) {
                arr[j][i] = 0;
            }
        }
    }
}

void CreateCharStringArray(char**& arr, int row) {
    const char* strings[] = {
        "I am learning c++",
        "I do my homework c++",
        "I can code in c++"
    };

    arr = new char* [row];
    for (int i = 0; i < row; i++) {
        arr[i] = new char[strlen(strings[i]) + 1]; 
        strcpy(arr[i], strings[i]); 
    }
}

void PrintCharStringArray(char** arr, int row) {
    for (int i = 0; i < row; i++) {
        cout << arr[i] << endl;
    }
}

void DeleteCharStringArray(char**& arr, int row) {
    if (arr) {
        for (int i = 0; i < row; i++) {
            delete[] arr[i];
        }
        delete[] arr;
        arr = nullptr;
    }
}

