#include<bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	int t;
	for(cin>>t; t--;) {
		int amin, bmin, cmin, t, a, b, c;
		cin>>amin>>bmin>>cmin>>t>>a>>b>>c;
		int total = a + b + c;
		if (a >= amin and b >= bmin and c >= cmin and total >= t) {
			cout<<"YES\n";
			continue;
		}
		cout<<"NO\n";
	}
	
	return 0;
}
