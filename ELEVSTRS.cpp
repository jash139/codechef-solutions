#include<bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	int t;
	for(cin>>t; t--;) {
		double n, v1, v2;
		cin>>n>>v1>>v2;
		double ele = n / v2;
		double stair = (sqrt(2) * n) / (v1 * sqrt(2));
		cout<<ele<<" "<<stair<<"\n";
		if (ele < stair) {
			cout<<"Elevator\n";
		} else {
			cout<<"Stairs\n";
		}
	}
	
	return 0;
}
