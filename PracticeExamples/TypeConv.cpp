#include <iostream>
using namespace std;


int main() {
	string str;// mam
	cin >> str;
	bool isPalindrome = true;
	for(int i = 0; i < str.length()/2; i++) {
		cout << "i:" << i << endl;
		if(str[i] != str[str.length()-1-i]) {
			isPalindrome = false;
			break;	
		}
		//cout << str[i] << "  " << str[str.length()-1-i] << endl;
	}
	
	////
	
	cout << "is Palindrome: " << isPalindrome;
	
	
}
	




