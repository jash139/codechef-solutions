#include<bits/stdc++.h>
using namespace std;

int calculate(int n, int k) {
	return (n * (n + 1)) / 2 + k * (n - 1);
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	int t;
	for(cin>>t; t--;) {
		int n, k;
		cin>>n>>k;
		int ans = calculate(n, k);
		cout<<ans<<"\n";
	}
	
	return 0;
}
