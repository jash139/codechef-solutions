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
		string s[n];
		int min = INT_MAX;
		int index = 0;
		for(int i = 0; i < n; ++i) {
			cin>>s[i];
			if (s[i].length() < min) {
				min = s[i].length();
				index = i;
			}
		}
		
		int ans = 0;
		string str = s[index];
		for(int j = 0; j < min; ++j) {
			int flag = 1;
			for(int i = 0; i < n; ++i) {
				cout<<s[i]<<" ";
				if (s[i].find(str[j]) < s[i].length()) {
					continue;
				} else {
					flag = 0;
					break;
				}
			}
			if (flag == 1) {
				ans++;
			}
		}
		cout<<ans<<"\n";
	}
	
	return 0;
}
