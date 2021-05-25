#include<bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	int t;
	for(cin>>t; t--;) {
		int len;
		cin>>len;
		string s;
		cin>>s;
		
		int good = 0, bad = 0;
		int flag = 0;
		for(int i = 0; i < len; ++i) {
			if (s[i] == '0') {
				bad++;
			} else {
				good++;
			}
			if (good >= bad) {
				flag = 1;
				cout<<"YES\n";
				break;
			}
		}
		if (flag == 0) {
			if (good >= bad) {
				cout<<"YES\n";
			} else {
				cout<<"NO\n";
			}
		}
	}
	
	return 0;
}
