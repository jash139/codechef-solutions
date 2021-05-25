#include<bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	long long int r, o, c;
	cin>>r>>o>>c;
	long long int rem = (20 - o) * 6 * 6;
	
	if ((r - c) < rem) {
		cout<<"Yes\n";
	} else {
		cout<<"No\n";
	}
	
	return 0;
}
