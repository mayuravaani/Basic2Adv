/* This question is solved only using
	1-D array, loops, conditional statements */


#include <iostream>
using namespace std;


int chkPossible(int a[], int b[] ,int j) {
	int k =1;
	if(a[j] == 1 || b[j] == 1 ) {
		k=0	;
	}	
	return k;
}

void fillArray(int a[], int b[], int n) {
	for(int i = 0; i < n; i++) {
		a[i] = 0;
		b[i] = 0;
	}
}

string joinBeads(int x[], int red[], int blue[], int i, int j, string s) {
	if(x[i] == 1) {//red
		if(chkPossible(red,blue, j) == 0)
		{
		  	return "Not Possible";
		}
		red[j] = 1;
		s= s.append("R");
	} 
	else if(x[i] == 2) //blue
	{
		if(chkPossible(red,blue, j) == 0) 
		{
		  	return "Not Possible";
		}
		blue[j] = 1;
		s = s.append("B");
	}	
	return s;	  			
}

int  construct(int n, int r, int a[], int b[], int x[]) {
	string s = "";
	int red[n];
	int blue[n];
    	
	for(int i=0; i<r; i++) {
		if(a[i] == 0) {
			for(int j = a[i]; j <= b[i]; j++) 
			{
	  			s = joinBeads(x, red, blue, i, j, s);
	  		} 
		} 
		else 
		{
			for(int j = a[i]+1; j <= b[i]; j++) 
			{
	  			s = joinBeads(x, red, blue, i, j, s);
		  	} 
		}
	}
	
	cout << s;
	
	return 1;
}

int main() {
	
  int a[] = { 0, 2};
  int b[] = { 2, 3};
  int x[] = { 1, 2};
  // no of beads =14
  // no of requirements = 5
  int a2[]= {0,3,6,7,10};
  int b2[]= {3,9,7,10,13};
  int x2[]= {1,2,1,2,1};
  
  int a1[] = { 0, 1,0};
  int b1[] = { 1, 2,2};
  int x1[] = { 1, 1,2}; 
  

  //construct(4, 2, a, b, x);
  //cout << endl;
  // construct(14, 5, a2, b2, x2);
  construct(3, 3, a1, b1, x1);

  return 1;
}
