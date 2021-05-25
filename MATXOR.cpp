#include<bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	int t;
	for(cin>>t; t--;) {
		int n, m, k;
		cin>>n>>m>>k;
		long long int ans = 0;
		
		int i;
		for(i = 2; i <= m; ++i) {
			
			if (n < i - 1 and n % 2 == 0) {
				continue;
			}
			if (n >= i - 1 and i % 2 != 0) {
				continue;
			}
			ans ^= (i + k);
		}
		
		for(; i <= m + n; ++i) {
	
			if (n < i - 1 - m and (n - i - 1 -m) % 2 == 0) {
				continue;
			}
			if (n >= i - 1 - m and (i - m - 1) % 2 == 0) {
				continue;
			}
			ans ^= (k + i);
		}
		
		cout<<ans<<"\n";
	}
	
	return 0;
}
