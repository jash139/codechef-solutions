#include<bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	int t;
	for(cin>>t; t--;) {
		int p1, p2, k;
		cin>>p1>>p2>>k;
		int total = p1 + p2;
		if ((total / k) % 2 == 0) {
			cout<<"CHEF\n";
		} else {
			cout<<"COOK\n";
		}
	}
	
	return 0;
}
