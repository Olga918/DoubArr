

#include <iostream>
#include "DoubArr.h"
#include <cstdlib> 
#include <ctime>   
using namespace std;






int main()
{
	////////////////////////////////////////////////////////////////////////
	//int row = 4;
	//int col = 3;
 //
	//int** ptrr = new int* [row];////  new int* [row]; - ìàñèâ àäðå


	///*ptrr[0] = new int[col] {1, 2, 3};
	//ptrr[1] = new int[col] {5, 2, 4};
	//ptrr[2] = new int[col] {1, 3, 7};
	//ptrr[3] = new int[col] {9, 8, 6};*/


	//for (int j = 0; j < row; j++)
	//{
	//	ptrr[j] = new int[col] {};/// {} çàïîâíþºìî 0 
	//}


	//for (int j = 0; j < row; j++)
	//{
	//	for (int i = 0; i < col; i++)
	//	{
	//		cout << ptrr[j][i] << " ";
	//	}
	//	cout << endl;
	//}


	//////////////////////////////////////////////////////////////
	


	srand(time(0)); 

	int row = 6;
	int col = 3;
	int** ptrr = nullptr;

	AlocDoubleArr(ptrr, row, col);

	InitRandomValues(ptrr, row, col, -5, 20);

	cout << "Two-dimensional array (Random values):" << endl;
	PrintDoubleArray(ptrr, row, col);

	ReplaceNegativesWithZero(ptrr, row, col);

	cout << "Two-dimensional array (Negative substitutions for zero):" << endl;
	PrintDoubleArray(ptrr, row, col);

	DeleteDoubleArray(ptrr, row);

	if (ptrr == nullptr) {
		cout << "The array was deleted successfully.!" << endl;
	}

	char** strArray = nullptr;
	CreateCharStringArray(strArray, 3);

	cout << "Array of strings:" << endl;
	PrintCharStringArray(strArray, 3);

	DeleteCharStringArray(strArray, 3);







	return 0;

}
