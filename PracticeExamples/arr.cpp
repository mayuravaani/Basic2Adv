#include <iostream>
using namespace std;

int main() {
	int arr1[4];
	
	
	/*
	for(int i =0; i < 4; i++) {
		cin >> arr1[i];
	}
	
	
	cout << endl << endl;
	for(int i = 0; i < 4; i++) {
		cout << arr1[i];
	}
	*/
	float arr[5]; 
	
	float *ptr = arr;
	
	for(int i =0; i < 5; i++) {
		cout << "loc" << ptr+i << endl;
		cin >> *(ptr+i);
	}
	
	cout << endl << endl;
	
	for(int i =0; i < 5; i++) {
		cout << arr[i] ;
	}
}

