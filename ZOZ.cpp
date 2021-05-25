#include<bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	int t;
	for(cin>>t; t--;) {
		int n, k;
		cin>>n>>k;
		int a[n], sum = 0;
		for(int i = 0; i < n; ++i) {
			cin>>a[i];
			sum += a[i];
		}
		int ans = 0;
		for(int i = 0; i < n; ++i) {
			if ((a[i] + k) > (sum - a[i])) {
				ans++;
			}
		}
		cout<<ans<<"\n";
		
	}
	
	return 0;
}
