#include<bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	int t;
	for(cin>>t; t--;) {
		long long int n, k;
		cin>>n>>k;
		if (k == 0) {
			cout<<0<<" "<<n<<"\n";
			continue;
		}
		cout<<n / k<<" "<<n % k<<"\n";
	}
	
	return 0;
}
