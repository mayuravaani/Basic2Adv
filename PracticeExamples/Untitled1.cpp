#include "gift.h"
 
const int MAX_N = 500000;
int sef[MAX_N];
 
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
 
    return 1;
}
