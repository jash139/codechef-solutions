#include<bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	int t;
	for (cin>>t; t--;) {
		string tag;
		cin>>tag;
		
		string success = "Success", error = "Error";
		string res = success;
		int len = tag.length();
		if (len <= 3) {
			cout<<error<<"\n";
			continue;
		}
		if (!(tag[0] == '<' and tag[1] == '/' and tag[len - 1] == '>')) {
			cout<<error<<"\n";
			continue;
		}
		for (int i = 2; i < len - 1; ++i) {
			if (isdigit(tag[i]) or islower(tag[i])) {
				continue;
			}
			res = error;
		}
		
		cout<<res<<"\n";
	}
	
	return 0;
}
