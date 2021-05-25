#include<bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	int t;
	for(cin>>t; t--;) {
		int d, c;
		cin>>d>>c;
		
		int a1, a2, a3;
		cin>>a1>>a2>>a3;
		
		int b1, b2, b3;
		cin>>b1>>b2>>b3;
		
		int d1 = a1 + a2 + a3;
		int d2 = b1 + b2 + b3;
		if (d1 >= 150 and d2 >= 150) {
			int with = d1 + d2 + c;
			int without = d1 + d2 + d + d;
			if (without > with) {
				cout<<"YES\n";
			} else {
				cout<<"NO\n";
			}
		} else if ((d1 < 150 and d2 >= 150) or (d1 >= 150 and d2 < 150)) {
			int with = d1 + d2 + d + c;
			int without = d1 + d2 + d + d;
			if (without > with) {
				cout<<"YES\n";
			} else {
				cout<<"NO\n";
			}
		} else {
			cout<<"NO\n";
		}
	}
	
	return 0;
}
