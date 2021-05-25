#include<bits/stdc++.h>
using namespace std;

bool starts(string str) {
	char ch = str[0];
	if (ch == 'E' or ch == 'Q' or ch == 'U' or ch == 'I' or ch == 'N' or ch == 'O' or ch == 'X') {
		return true;
	} else {
		return false;
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	int t;
	for(cin>>t; t--;) {
		long long int n, a, b;
		cin>>n>>a>>b;
		string s[n];
		long long int sarthak = 0, anu = 0;
		for(int i = 0; i < n; ++i) {
			cin>>s[i];
			if (starts(s[i])) {
				sarthak += a;
			} else {
				anu += b;
			}
		}
		
		
		if (sarthak == anu) {
			cout<<"DRAW\n";
		} else {
			if (sarthak < anu) {
				cout<<"ANURADHA\n";
			} else {
				cout<<"SARTHAK\n";
			}
		}
	}
	
	return 0;
}
