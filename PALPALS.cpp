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
		int a[26] = {0};
		for(int i = 0; i < s.length(); ++i) {
			a[(int)s[i] - 97]++;
		}
		int even = 0, odd = 0;
		for(int i = 0; i < 26; ++i) {
			if (a[i] == 0) {
				continue;
			}
			if (a[i] % 2 == 0) {
				even++;
			} else if (a[i] % 2 != 0) {
				odd++;
			}
		}
	}
	
	return 0;
}
