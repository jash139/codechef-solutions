#include<bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	int t;
	for(cin>>t; t--;) {
		int a[10], k, n = 10;
		for(int i = 0; i < n; ++i) {
			cin>>a[i];
		}
		cin>>k;
		int i;
		for(i = n - 1; i >= 0; --i) {
			if(k == 0) {
				break;
			}
			if (k < a[i]) {
				break;
			} else {
				k -= a[i];
			}
		}
		while(true) {
			if (a[i] == 0) {
				i--;
			} else {
				cout<<i + 1<<"\n";
				break;
			}
		}
	}
	
	return 0;
}
