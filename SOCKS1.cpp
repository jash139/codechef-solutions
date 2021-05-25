#include<bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	int a, b, c;
	cin>>a>>b>>c;
	if (a == b or b == c or a == c) {
		cout<<"YES\n";
	} else {
		cout<<"NO\n";
	}
	
	return 0;
}
