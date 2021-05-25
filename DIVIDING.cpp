#include<bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	int n;
	cin>>n;
	int c[n];
	int s = 0;
	for(int i = 0; i < n; ++i) {
		cin>>c[i];
		s += c[i];
	}
	int t = n * (n + 1) / 2;
	if (t == s) {
		cout<<"YES\n";
	} else {
		cout<<"NO\n";
	}
	
	return 0;
}
