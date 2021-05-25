#include<bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	int t;
	for(cin>>t; t--;) {
		int n, m;
		cin>>n>>m;
		int a[n];
		int r[m] = {0};
		for(int i = 0; i < n; ++i) {
			cin>>a[i];
			r[a[i] - 1]++;
		}
		int flag = 0;
		for(int i = 0; i < m; ++i) {
			if (r[i] == 0) {
				cout<<"Yes\n";
				flag = 1;
				break;
			}
		}
		if (flag == 0) {
			cout<<"No\n";
		}
	}
	
	return 0;
}
