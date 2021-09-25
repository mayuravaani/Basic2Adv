
// limli-full
#include <bits/stdc++.h>
 
#include "gift.h"
using namespace std;
 
typedef pair<int, int> ii;
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
vector<ii> combine(vector<ii> ranges) {
    vector<ii> ans;
    if (ranges.empty()) return ranges;
    sort(ranges.begin(), ranges.end());
    int a = ranges[0].first, b = ranges[0].second;
    for (ii range : ranges) {
        if (range.first <= b) {
            b = max(b, range.second);
        } else {
            ans.push_back(ii(a, b));
            a = range.first;
            b = range.second;
        }
    }
    ans.push_back(ii(a, b));
    return ans;
}
 
int construct(int n, int r, vector<int> a, vector<int> b, vector<int> x) {
    vector<ii> ones, twos;
    for (int i = 0; i < r; i++) {
        ii range = ii(a[i], b[i]);
        if (x[i] == 1) {
            ones.push_back(range);
        } else {
            twos.push_back(range);
        }
    }
    ones = combine(ones);
    for (ii range : twos) {
        if (range.first == range.second) {
            return 0;
        }
        if (ones.empty()) continue;
        int bs = upper_bound(ones.begin(), ones.end(), ii(range.first, 1000000000)) - ones.begin() - 1;
        if (bs < 0) continue;
        if (ones[bs].first <= range.first && range.second <= ones[bs].second) {
            return 0;
        }
    }
    string ans(n, 'R');
    int pos = 0;
    for (int i = 1; i < n; i++) {
        if (!ones.empty() && ones[pos].first <= i - 1 && i <= ones[pos].second) {
            ans[i] = ans[i - 1];
        } else {
            ans[i] = 'R' + 'B' - ans[i - 1];
        }
        if (pos + 1 < (int)ones.size() && ones[pos].second <= i) {
            pos++;
        }
    }
    craft(ans);
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
