//Write a c++ program to print the relevant month name when the user input the month number

#include <iostream>
using namespace std;

int main() {
	int mNo;
	string message;
	string monthArray[] = {"jan","feb", "mar", "apr", "may", "jun", "jul", "aug", "sep", "oct", "nov", "dec"};
	
	
	
	
	do {
		cout << "Enter month number";
		cin >> mNo;
		if(mNo >= 1 && mNo <= 12) {
		cout << "month is : " << monthArray[mNo-1] << endl;
		}
		else {
		cout << "Invalid month number" << endl;
		}
		cout << "Do you want to continue? " << endl;
		cin >> message;
		
	} while(message == "yes");
	
	
	
	
	
		
	
	return 0;
}
