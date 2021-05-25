#include<bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	long long int n;
	cin>>n;
	long long int a[n], sum = 0;
	
	for(int i = 0; i < n; ++i) {
		cin>>a[i];
		sum += a[i];
	}
	
	long long int q;
	cin>>q;
	long long int x[q];
	for(int i = 0; i < q; ++i) {
		cin>>x[i];
	}
	
	const unsigned int M = 1000000007;
	long long int ctr = 2;
	for(int i = 0; i < q; ++i) {
		cout<<((sum * ctr) % M)<<"\n";
		ctr *= 2;
	}
	
	return 0;
}
