#include<bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	int t;
	for(cin>>t; t--;) {
		long long int x, r, m;
		cin>>x>>r>>m;
		
		long long int f;
		if (x < m * 60) {
			f = (m * 60 - x) / 2 + x;
		} else {
			f = x;
		}
		
		if (f >= r * 60) {
			cout<<"YES\n";
		} else {
			cout<<"NO\n";
		}		
	}
	
	return 0;
}
