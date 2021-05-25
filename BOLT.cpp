#include<bits/stdc++.h>
using namespace std;

double round(double n) {
    double value = (int)(n * 100 + .5);
    return (double)value / 100;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	int t;
	double rec = 9.58;
	for(cin>>t; t--;) {
		double k1, k2, k3, v;
		cin>>k1>>k2>>k3>>v;
		double time = round(100.0 / (k1 * k2 * k3 * v));
		if (time < rec) {
			cout<<"YES\n";
		} else {
			cout<<"NO\n";
		}
	}
	
	return 0;
}
