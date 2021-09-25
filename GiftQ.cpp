#include <iostream>
using namespace std;

string joinBeads(int x[],int i, int j, string s) {
	if(x[i] == 1) {
		if(s[j] == 'B')
		{
		  	return "Not Possible";
		}
		
		s= s.append("R");
	} 
	else if(x[i] == 2) // blue
	{
		if(s[j] == 'R') 
		{
		  	return "Not Possible";
		}
	
		s = s.append("B");
	}	
	return s;	  			
}

int  construct(int n, int r, int a[], int b[], int x[]) { 
	string s = "";

	for(int i=0; i<r; i++) { 
		if(a[i] == 0) { 
			for(int j = a[i]; j <= b[i]; j++) 
			{
	  			s = joinBeads(x,i, j, s);
	  		} 
		} 
		else 
		{
			for(int j = a[i]+1; j <= b[i]; j++)
			{
	  			s = joinBeads(x, i, j, s);
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
  
  int a1[] = { 0, 1,0};
  int b1[] = { 1, 2,2};
  int x1[] = { 1, 1,2};
  
  int a2[] = {0,2,4,6,7,8,9,10};
  int b2[] = {2,4,6,7,8,9,10,13};
  int x2[] = {1,2,1,2,1,2,1,2};
  
  int a3[] = {0,2,4,6,7,6,9,10};
  int b3[] = {2,4,6,7,8,9,10,13};
  int x3[] = {1,2,1,2,1,1,1,2};

  //construct(4, 2, a, b, x);
  cout << endl;
  //construct(3, 3, a1, b1, x1);
  cout << endl;
  //construct(14, 8, a2, b2, x2);
  construct(14, 8, a3, b3, x3);


  return 1;
}
