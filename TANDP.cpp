#include<bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	int t;
	for(cin>>t; t--;) {
		long long int n, m; 
		cin>>n>>m;
		
		long long int x, y;
		cin>>x>>y;
		
		long long int a, b;
		cin>>a>>b;
		
		long long int thief = (m - y) + (n - x);
		long long int police = (m - b) + (n - a);
		
		if (police < thief) {
			cout<<"NO\n";
		} else {
			cout<<"YES\n";
		}
		
	}
	
	return 0;
}
