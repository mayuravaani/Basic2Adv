#include<iostream>
using namespace std;

int main() {
	// 1-D
	int array1[4];
	array1[0] = 5;
	
	// 2-D
	int row = 3;
	int column = 4;
	
	int array2[3][3];
	
	array2[0][0] = 100;
	array2[0][1] = 101;
	array2[0][2] = 102;
	array2[1][0] = 110;
	array2[1][1] = 111;
	array2[1][2] = 112;
	array2[2][0] = 120;
	array2[2][1] = 121;
	array2[2][2] = 122;
	
	cout << "\n";
//	cout << array2[2][1];
	
	cout  << "\n";
/*	int array3[3][3];
	for(int row = 0; row < 3; row++) {
		for(int column = 0; column < 3; column++) {
			cin >> array3[row][column] ;
		}
		
	} */
	
	int x[3][4] = {{0,1,2,3}, {4,5,6,7}, {8,9,10,11}};

	
		for(int row = 0; row < 3; row++) {
		for(int column = 0; column < 4; column++) {
			cout << x[row][column]  << " ";
		}
		cout << endl;
		
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}

