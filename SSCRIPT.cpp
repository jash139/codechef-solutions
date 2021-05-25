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
		string s;
		cin>>s;
		int strong = 0;
		for(int i = 0; i < n; ++i) {
			if (s[i] == '*') {
				int t = k > n - i ? 0 : i + k;
				if (t == 0) {
					break;
				}
				int flag = 1, j;
				for(j = i; j < t; ++j) {
					if (s[j] != '*') {
						flag = 0;
						break;
					}
				}
				i = j;
				if (flag == 1) {
					cout<<"YES\n";
					strong = 1;
					break;
				}
			}
		}
		if (strong == 0) {
			cout<<"NO\n";
		}
	}
	
	return 0;
}
