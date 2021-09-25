#include <iostream>
using namespace std;

int main(){
	int n;
	cout<<"please enter the value : ";
	cin >> n;
	int count = 0;
	int A[3][5] = {{2,2,3,4,5,},{1,2,3,4,5},{5,4,6,7,8}};
	  for(int row = 0;row<3;row++){
	  	for(int coloum = 0;coloum<5;coloum++){
            if(n == A[row][coloum]){
            	count++;
			}
		  }
	  }
	  cout<<"The number "<<n<<" occured "<<count;
	  
}
