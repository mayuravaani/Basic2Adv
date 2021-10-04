#include <iostream>
using namespace std;

int main() {
	int array[] = {4, 3, 6,7 , 8};
	cout << "size of full array: " << sizeof(array) << endl;
	cout << "size of single element: " << sizeof(array[0]) << endl;
	int len = sizeof(array) / sizeof(array[0]);
	cout << "answer: " << len << endl;
	cout << endl << endl;
	cout << sizeof(int) << endl;
	cout << sizeof(string) << endl;
	
	
	
	int *ptr = array;
	
	cout << array[0] << endl;
	cout << &array[0] << endl;
	
	cout << &array[1] << endl;
	cout << &array[2] << endl;
	cout << &array[3] << endl;

	
	cout  << "array only : "<< array << endl;
	
	cout << *ptr << endl;
	cout << *(ptr+1)<< endl;
	cout << *(ptr+2)<< endl;
}
