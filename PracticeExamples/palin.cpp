/* This question is solved by only using 
	string operations,
	loops,
	conditional statement,
	1-D Array
*/

#include <iostream>
using namespace std;

//function to check whether the given substring is palindrome or not
bool isPalindrome(string str) {
	for(int i = 0; i <str.length()/2; i++) {
		if(str[i] != str[str.length()-1-i]) {
			return false;
		}
	}
	return true;
}

/*find the position of the substring if it is already exist in the array
	if that is already exist then 
		the return value will be >=0
	Otherwise the return value is -1 */
int findPosition(string array[], string sub, int size) {
	for(int i = 0; i < size; i++) {
		if(array[i] == sub) {
			return i;
		}
	}
	return -1;
}

//print the substring, no of occurrence and the points
void printResults(string a[], int b[], int c[], int maxIndex) {
	for(int i = 0; i <= maxIndex; i++) {
		cout << "substring: " << a[i] << " => no of Occurrence:  " << b[i] 
			<< " => occurrence value: " << c[i] << endl;
	}
}

//find the length of the given array
int arraylength(string str) {//aba => a ab aba b ba a
	int len = 0;
	/*int i = 1;
	while(i <= str.length()) {// 
		len = len + i;
		i++;
	}
	  */ //aba
	for(int i=1; i <= str.length(); i++) {
		len = len + i; //len=6
	}
	cout << len;
	return len;
}

//find the maximum of the given array
int findMax(int array[], int maxPos) {
	int max = array[0];
	for(int i = 1; i <= maxPos; i++) {
		if(array[i] > max) {
			max = array[i];
		}
	} 
	return max;	
}
//abacaba == 7
// www= 3

int main() {
	// the input from the user
	string str;
	cin >> str;
	
	// define the array for the substring,no_of_occurrence for the respected substring, points
	string substr[str.length()];// sustring == palindrome 
	int times[str.length()]; // count 
	int points[str.length()];// points = [len(substring x count)
	
	// temporary variable for storing a subsstring
	string temp;
	
	// maximum index of all defined arrays
	int maxIndex = -1;

	/* get each substring
	 check whether it is palindrome or not 
	 and then if
		it is a palindrome then check if the substring already noted or not
		and then if it is noted 
			then just increase the respected times value for that substring by 1
		otherwise
			create a new substring value in the substr array and insert 1 at the respected times array value
	 if it is not a palindrome do nothing */
	//abc i=0 -> 1
	for(int i = 0; i < str.length(); i++) {
		temp = "";
		for(int k=i; k < str.length(); k++) {//0,1
			temp = temp + str[k];  // temp= ab+c => abc
			if(isPalindrome(temp)) {// abad
				int pos = findPosition(substr, temp, maxIndex);// = -1
				if(pos >= 0) {
					times[pos] = times[pos] + 1;
				} else{
					maxIndex++;
					substr[maxIndex] = temp;// substring
					times[maxIndex] = 1;
					
				}
			}
		}
		
	}
	
	// to find the value of occurrence = [length(substring) x no_of_occurrence]
	for(int i = 0; i <= maxIndex; i++) {
		points[i] = substr[i].length() * times[i];
	}
	
	//to print all the substring and associated values
	printResults(substr, times, points, maxIndex);
	
		
	cout << "Output max: " << findMax(points, maxIndex);;	
}
