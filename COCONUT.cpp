#include<bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	int t;
	for(cin>>t; t--;) {
		double xa, xb, a, b;
		cin>>xa>>xb>>a>>b;
		
		int typea = ceil(a / xa);
		int typeb = ceil(b / xb);
		
		int total = typea + typeb;
		cout<<total<<"\n";
		
	}
	
	return 0;
}
