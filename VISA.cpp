#include<bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	int t;
	for(cin>>t; t--;) {
		int a, b, c, d, e, f;
		cin>>a>>b>>c>>d>>e>>f;
		if (b < a or d < c or f > e) {
			cout<<"NO\n";
		} else {
			cout<<"YES\n";
		}
		
	}
	
	return 0;
}
