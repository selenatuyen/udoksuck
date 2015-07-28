#include <iostream>
#include "sud.h"

using namespace std;

//boardSquare::boardSquare(int bid){ squareID = bid;}

void boardSquare::setSquare(int(*vals)[3][3])// , size_t rows, size_t cols){
{
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 3; j++){
			cout << vals[i][j] << " ";
		}
		cout << endl;
	}
	
}