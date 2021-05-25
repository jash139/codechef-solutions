#include<bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	int t;
	for(cin>>t; t--;) {
		int n;
		cin>>n;
		int b[n], g[n];
		for(int i = 0; i < n; ++i) {
			cin>>b[i];
		}
		sort(b, b + n);
		
		for(int i = 0; i < n; ++i) {
			cin>>g[i];
		}
		sort(g, g + n, greater<int>());
		
		int max = 0;
		for(int i = 0; i < n; ++i) {
			if (b[i] + g[i] >= max) {
				max = b[i] + g[i];
			}
		}
		cout<<max<<"\n";
	}
	
	return 0;
}
