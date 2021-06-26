#include<bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	int t;
	for (cin>>t; t--;) {
		
		string num;
		cin>>num;
		int n = num[0];
		if (n == '1') {
			cout<<num[0]<<"0"<<num.substr(1, num.length())<<"\n";
		} else {
			cout<<'1'<<num<<"\n";
		}
		
	}
	
	return 0;
}
