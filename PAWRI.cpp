#include<bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	int t;
	for(cin>>t; t--;) {
		string s;
		cin>>s;
		int size = s.length();
		if (size >= 5) {
			int i;
			for(i= 0; i < size; ++i) {
				if (s.substr(i, 5) == "party") {
					cout<<"pawri";
					i += 4;
				} else {
					cout<<s[i];
				}
			}
			if (i < size) {
				cout<<s.substr(i, size);
			}
			cout<<"\n";
		} else {
			cout<<s<<"\n";
		}
	}
	
	return 0;
}
