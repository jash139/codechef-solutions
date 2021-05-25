#include<bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	int t;
	for(cin>>t; t--;) {
		int n, x;
		cin>>n>>x;
		int s[n], r[n];
		int max = 0;
		for(int i = 0; i < n; ++i) {
			cin>>s[i]>>r[i];
			if (r[i] >= max and s[i] <= x) { 
				max = r[i];
			}
		}
		cout<<max<<"\n";
		
		
	}
	
	return 0;
}
