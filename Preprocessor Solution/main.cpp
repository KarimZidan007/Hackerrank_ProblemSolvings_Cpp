

#define Result "Result"
#define toStr(x) #x
#define io(v) cin>>(v)
#define FUNCTION(x,y)
#define INF  1000000000
#define foreach(vector,integer)  for(int integer : vector)
#define minimum(var,var_to_comp)  var = (var > var_to_comp) ? var_to_comp : var
#define maximum(var,var_to_comp)  var = (var < var_to_comp) ? var_to_comp : var
#include <iostream>
#include <vector>
using namespace std;

#if !defined toStr || !defined io || !defined FUNCTION || !defined INF
#error Missing preprocessor definitions
#endif 

FUNCTION(minimum, <)
FUNCTION(maximum, >)

int main(){
	int n; cin >> n;
	vector<int> v(n);
	foreach(v, i) {
		io(v)[i];
	}
	int mn = INF;
	int mx = -INF;

	foreach(v, i) {
		minimum(mn, v[i]);
		maximum(mx, v[i]);

	}
	int ans = mx - mn;
	cout << toStr(Result =) <<' '<< ans;
	return 0;

}
