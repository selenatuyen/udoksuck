using namespace std;

#ifndef SUD_H
#define SUD_H

class boardSquare{
public: 
	//boardSquare(int);
	int boxes[3][3];
	int squareID;
	bool emptyOrFull = 0;
	void setSquare(int(*val)[3][3]);// , size_t rows, size_t cols);  // sets square value
	int getSquare();   //retrieves square location on grid
	bool checkSquare(int);  //see if moves are valid
	//~boardSquare();
};

#endif