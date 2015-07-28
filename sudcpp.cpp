#include <iostream>
#include "sud.h"

using namespace std;
int main(){
	
	int grid [9][9]= { { 1, 2, 3, 4, 5, 6, 7, 8, 9 }, { 10, 11, 12, 13, 14, 15, 16, 17, 18 }, { 19, 20, 21, 22, 23, 24, 25, 26, 27 },
	{ 28, 29, 30, 31, 32, 33, 34, 35, 36 }, { 37, 38, 39, 40, 41, 42, 43, 44, 45 }, { 46, 47, 48, 49, 50, 51, 52, 53, 54 },
	{ 55, 56, 57, 58, 59, 60, 61, 62, 63 }, { 64, 65, 66, 67, 68, 69, 70, 71, 72 }, { 73, 74, 75, 76, 77, 78, 79, 80, 81 } };
/*
	for (int i = 0; i < 9; i++){
		for (int j = 0; j < 9; j++){
			cout << grid[i][j] << " ";
		}
		cout << endl;
	}	
	*/
/*	int **firstBox = new int[3];
	for (int i = 0; i < 3; ++i)
		firstBox[i] = new int[3];
*/
	int(*firstBox)[3][3] = { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } };
	boardSquare theBox;
	theBox.setSquare(firstBox);

	cin.get();
	return(0);
}