#include<bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	int t;
	for(cin>>t; t--;) {
		double x, y, xr, yr, d;
		cin>>x>>y>>xr>>yr>>d;
		double food = x / xr;
		double wat = y / yr;
		double min = food < wat ? food : wat;
		if (min >= d) {
			cout<<"YES\n";
		} else {
			cout<<"NO\n";
		}
	}
	
	return 0;
}
