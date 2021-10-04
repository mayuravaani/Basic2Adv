#include <bits/stdc++.h>
#include "gift.h"
using namespace std;

int joinBeads(std::vector<int> x,int i, int j, string &s) {
	if(x[i] == 1) {//red
		if(s[j] == 'B')//
		{
		  	return 0;
		} else if(s[j] ==  'R'){
			return 1;
		}
		
		s= s.append("R");
	} 
	else if(x[i] == 2) // blue
	{
		if(s[j] == 'R') 
		{
		  	return 0;
		} else if(s[j] ==  'B'){
			return 1;
		}
	
		s = s.append("B");
	}	
	return 1;// RRBB	  			
}

int construct(int n, int r, std::vector<int> a, std::vector<int> b, std::vector<int> x) {
	string s = "";
	int k = 1;

	for(int i=0; i<r; i++) { 
		if(a[i] == 0) { 
			for(int j = a[i]; j <= b[i]; j++) 
			{
	  			k = joinBeads(x,i, j, s);
	  			if(k==0) {
	  				return 0;
				}
	  		} 
		} 
		else 
		{
			for(int j = a[i]+1; j <= b[i]; j++)
			{
	  			s = joinBeads(x, i, j, s);
	  			if(k == 0) {
	  				return 0;
				  }
		  	} 
		}
	}
	
	craft(s);
	
	return 1;
}
