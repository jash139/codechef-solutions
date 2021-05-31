#include<bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	int t;
	for(cin>>t; t--;) {
		long long int a, b, c, d, k;
		cin>>a>>b>>c>>d>>k;
		long long int x = abs(a - c), y = abs(b - d);
		long long int total = x + y;
		if (total > k) {
			cout<<"NO\n";
			continue;
		}
		long long int left = k - total;
		if (left % 2 == 0) {
			cout<<"YES\n";
		} else {
			cout<<"NO\n";
		}
	}
	
	return 0;
}
