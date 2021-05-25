#include<bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	int n, h, x;
	cin>>n>>h>>x;
	
	int req = h - x;
	int t[n];
	for(int i = 0; i < n; ++i) {
		cin>>t[i];
	}
	
	sort(t, t + n);
	int flag = 0;
	for(int i = 0; i < n; ++i) {
		if (t[i] >= req) {
			cout<<"YES\n";
			flag = 1;
			break;
		}
	}
	if (flag == 0) {
		cout<<"NO\n";
	}
	
	return 0;
}
