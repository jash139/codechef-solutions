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
		int a[n];
		for(int i = 0; i < n; ++i) {
			cin>>a[i];
		}
		int m;
		cin>>m;
		int b[m];
		for(int i = 0; i < m; ++i) {
			cin>>b[i];
		}
		int j = 0;
		int flag = 0;
		for(int i = 0; i < m; ++i) {
			int found = 0;
			for(int j = 0; j < n; ++j) {
				if (a[j] == b[i]) {
					found = 1;
					break;
				}
			}
			if (found == 1) {
				continue;
			} else {
				flag = 1;
			}
		}
		if (flag == 1) {
			cout<<"No\n";
		} else {
			cout<<"Yes\n";
		}
	}
	
	return 0;
}
