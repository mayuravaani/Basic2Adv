#include <iostream>
using namespace std;

int main(){
	int sum;
	int A[3][5] = {{2,2,3,4,5,},{1,2,3,4,5},{5,4,6,7,8}};
	    for(int row = 0;row<3;row++){
	    	sum = 0;
	    	 	for(int coloum = 0;coloum<5;coloum++){
	    	 		sum += A[row][coloum];
				 }
	               	cout<<"sum of row" << sum <<endl;
					   	 
}
  for(int coloum = 0;coloum<5;coloum++){
	    int b = 0;
	    	 	for(int row = 0;row<3;row++){
	    	 		b += A[row][coloum];
}
  cout<<"sum of coloum" << b <<endl;
}
}
