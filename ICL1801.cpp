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
		int len = n * m;
		int a[len];
		for(int i = 0; i < len; ++i) {
			cin>>a[i];
		}
		sort(a, a + len, greater<int>());
		int cyborg = 0, geno = 0;
		for(int i = 0; i < len; ++i) {
			if (i % 2 == 0) {
				cyborg += a[i];
			} else {
				geno += a[i];
			}
		}
		if (cyborg == geno) {
			cout<<"Draw\n";
		} else {
			if (cyborg > geno) {
				cout<<"Cyborg\n";
			} else {
				cout<<"Geno\n";
			}
		}
	}
	
	return 0;
}
