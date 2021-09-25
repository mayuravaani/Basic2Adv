#include <iostream>
using namespace std;

int sum(int x, int y) {
	return x+y;
}


string myFunc2() {
	return "hello" ;
}

void myFunction() {
	cout << "introduction to methods";

}

int main() {
	int array1[] = {3,5,6,7,2,7,3,6,8,2,6,9};
	////////////////////////////////////////
	int n = sizeof(array1)/sizeof(array1[0]); // array length
	////////////////////////////////////////////////////
	int number, count = 0;
	cin >> number;
	for(int i = 0; i < n; i++) {
		if(number == array1[i]) {
			count++;
		}
	}
	
	cout << "no of occourence:"	 << count << endl; 
}
