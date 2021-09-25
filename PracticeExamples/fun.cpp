#include <iostream>
using namespace std;

//find summation
double sum(double m1, double m2, double m3) {
	double totalMarks = m1 + m2 + m3;
	return totalMarks;
}


void printAverage(double s, int n) {
	double avg = s/n;
	cout << "average: " << avg;
}

int main() {
	
string str= "Hello"; 
 
	cout << str[0] << endl;
	cout << str[1] << endl;
	cout << str[2] << endl;
	cout << str[3] << endl;
	cout << str[4] << endl;	
	
	return 0;
}
