#include<bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	int t;
	for(cin>>t; t--;) {
		long long int u, v, a, s;
		cin>>u>>v>>a>>s;
		if (sqrt((u * u) - 2 * a * s) > v) {
			cout<<"No\n";
		} else {
			cout<<"Yes\n";
		}
		
	}
	
	return 0;
}
