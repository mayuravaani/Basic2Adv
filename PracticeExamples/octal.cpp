//Receive input as octal number from user and convert it into binary using an array 

#include <iostream>
using namespace std;

int main() {
	/*int num;
	string output = "";
	string octal[] = {"000", "001", "010", "011" ,"100", "101", "110", "111" };
	
	cout << "Enter the octal number: ";
	cin >> num; // 357

	
	int digit, remainder;
	do {
		
		digit = num/10;// 3/10=0
		remainder = num%10; // 3%10 = 3
		output = octal[remainder] + output; // 011 101 111
		num = digit; //num= 3;
	} while(digit != 0);
		
	cout << "binary representation: " << output;
	*/
	string octal[] = {"000", "001", "010", "011" ,"100", "101", "110", "111" };
	string num;
	cout << "Enter the octal number: ";
	cin >> num; // 357
	cout << "length of num: " << num.length() << endl; //12 = length =4 [0,1,2,3]
	for(int i=0 ; i < num.length(); i++) { //3 0,1,2
		//cout << num[i] << endl;
		
		
		//int ia = num[i] -'0';// char to int // ia = '3' - '0' 51-48
		int z = int(num[i]) - int('0');
		
		
		
		cout << octal[z]<< " " ; //001 010 
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}



