#include "gift.h"
 #include <vector>
// CPP program to initialize a vector like
// an array.
#include <bits/stdc++.h>
const int MAX_N = 500000;
int sef[MAX_N];
static int called = 0;
static int n = 4;

static std::string s;


void craft(std::string &_s)
{
	std::cout << _s << std::endl;
    assert(!called);
    s = _s;
    assert((int) s.size() == n);
    for (int i = 0; i < n; i++) {
        assert(s[i] == 'R' || s[i] == 'B');
    }
    called = 1;
}
 
int myfind(int x) {
    if(x == sef[x])
        return x;
    sef[x] = myfind(sef[x]);
    return sef[x];
}
 
void myunion(int a, int b) {
    int sa = myfind(a), sb = myfind(b);
 
    if(sa != sb)
        sef[sb] = sa;
}
 
int construct(int n, int r, std::vector<int> a, std::vector<int> b, std::vector<int> x) {
    for(int i = 0; i < n; ++i)
        sef[i] = i;
 
    for(int i = 0; i < r; ++i) {
        if(x[i] == 1)
            while(myfind(b[i]) > a[i])
                myunion(myfind(b[i]) - 1, myfind(b[i]));
    }
 
    for(int i = 0; i < r; ++i)
        if(x[i] == 2 && myfind(b[i]) <= a[i])
            return 0;
 
    std::string res;
    char color = 'R';
 
    for(int i = 0; i < n; ++i) {
        if(myfind(i) == i)
            color = 'R' + 'B' - color;
        res.push_back(color);
    }
 
    craft(res);
 	std::cout << res;
    return 1;
}

int main() {

	 std::vector<int> a;
	 a = { 0,2};
	  std::vector<int> b;
	  b ={ 2,3 };
	   std::vector<int> x;
	   x = { 1,2};
	std::cout << "hello";
	std::cout << a.back() << std::endl;
  construct(4, 2, a, b, x);
  return 1;
}
