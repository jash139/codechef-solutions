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
		int x, y;
		cin>>x>>y;
		string ar[n];
		int pass[n] = {0};
		for(int i = 0; i < n; ++i) {
			cin>>ar[i];
			int f = 0, p = 0, u = 0;
			string cur = ar[i];
			for(int j = 0; j < m; ++j) {
				if (cur[j] == 'P') {
					p++;
				} else if(cur[j] == 'U') {
					u++;
				} else {
					f++;
				}
			}
			if (f >= x or (f == x - 1 and p >= y)) {
				pass[i] = 1;
			} else {
				pass[i] = 0;
			}
		}
		for(int i = 0; i < n; ++i) {
			cout<<pass[i];
		}
		cout<<"\n";
	}
	
	return 0;
}
