#include<bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	int t;
	for(cin>>t; t--;) {
		string s;
		cin>>s;
		int n = s.length();
		int t = 0, ans = 0;
		for(int i = 0; i < n; ++i) {
			if (s[i] == '0') {
				t = 0;
			} else {
				if (t == 0) {
					ans++;
					t = 1;
				}
			}
		}
		cout<<ans<<"\n";
	}
	
	return 0;
}
