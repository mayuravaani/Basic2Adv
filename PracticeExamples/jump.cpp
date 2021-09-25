#include <iostream>
using namespace std;




int main() {
	// initialize
	int n = 3;
	if(n%2 ==0) {
		goto label1;
	}
	else {
		goto label2;
	}
	
label1:
	cout << "EVEN" << endl;
	return 1;
	
label2:
	cout << "ODD" << endl;
	return 0;
	
label3:
	cout << "this is label3";
	
	
	
	
	


	
	

}

