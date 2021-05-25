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
		string prev;
		cin>>prev;
		if (n == 1 and prev == "cookie") {
			cout<<"NO\n";
			continue;
		} else if (n == 1 and prev == "milk") {
			cout<<"YES\n";
			continue;
		}
		int flag = 0;
		string cur;
		for(int i = 1; i < n; ++i) {
			cin>>cur;
			if (prev == "cookie" and cur == "cookie") {
				flag = 1;
			}
			prev = cur;
		}
		if (cur == "cookie") {
			cout<<"NO\n";
			continue;
		}
		if (flag == 0) {
			cout<<"YES\n";
		} else {
			cout<<"NO\n";
		}
	}
	
	return 0;
}
