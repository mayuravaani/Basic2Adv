#include <iostream>
using namespace std;

int main() {
	int r;
	
	cout << "enter no of req" << endl;
	cin >>  r;
	int a[r][c];
	int b[r];
	int x[r];
	for(int i =0; i < r; i++) {
		cout << "enter start pos: ";
		cin >> a[i];
		cout << "enter end pos: ";
		cin >> b[i];
		cout << "enter the color: ";
		cin >> x[i];
	}
	cout << "===========" ;
	cout << "\n";
	for(int j=0; j<r ; j++) {
		cout << a[j];
	}
	cout << "===========";
	cout << "\n";
	for(int j=0; j<r ; j++) {
		cout << b[j];
	}
	cout << "===========";
	cout << "\n";
	for(int j=0; j<r ; j++) {
		cout << x[j];
	}
	
	
	
	
}
