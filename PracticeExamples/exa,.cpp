#include <iostream>
#include <fstream>
using namespace std;

int main() {
	string course[5] = {"CHE101", "PHY102", "MAT103", "ART104", "ICT105" };
	
	double marks[4][5];
	
	for(int row = 0; row < 3; row++) {
		for(int col=0; col< 5; col++) {
			if(row == 2) {
			cout << "End of course marks of" << course[col] << " : " << endl;
			} else {
			cout << "Assignment " << row+1 << " marks of" << course[col] <<" : " ;
			}
			cin >> marks[row][col];
		}	
		
	}
	// print
	for(int i = 0; i <5 ; i++) {
		cout << course[i] << "   ";
	}
	cout << endl;
	for(int row = 0; row < 3; row++) {
		for(int col=0; col< 5; col++) {
			cout <<  marks[row][col] << "    ";
		}	
		cout << "\n";
	}
	
	
	for(int col=0; col < 5; col++) {
		marks[3][col] = (marks[0][col] * 0.15 )+ (marks[1][col] * 0.15)+ (marks[2][col] * 0.7);
	}
	
	cout << "after finding final marks " << endl;
	
		for(int i = 0; i <5 ; i++) {
		cout << course[i] << "   ";
	}
	cout << endl;
	for(int row = 0; row < 4; row++) {
		for(int col=0; col< 5; col++) {
			cout <<  marks[row][col] << "    ";
		}	
		cout << "\n";
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}

