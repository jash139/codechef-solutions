#include<bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	int t;
	for(cin>>t; t--;) {
		int w1, w2, x1, x2, m;
		cin>>w1>>w2>>x1>>x2>>m;
		
		int min = x1* m, max = x2 * m;
		
		int dif = w2 - w1;
		if (dif >= min and dif <= max) {
			cout<<"1\n";
		} else {
			cout<<"0\n";
		}
	}
	
	return 0;
}
