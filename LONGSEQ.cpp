#include<bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	int t;
	for(cin>>t; t--;) {
		string n;
		cin>>n;
		int len = n.length();
		int z = 0, o = 0;
		for(int i = 0; i < len; ++i) {
			if (n[i] == '0') {
				z++;
			} else {
				o++;
			}
		}
		z--;
		o--;
		if (z == 0 or o == 0) {
			cout<<"Yes\n";
		} else {
			cout<<"No\n";
		}
	}
	
	return 0;
}
