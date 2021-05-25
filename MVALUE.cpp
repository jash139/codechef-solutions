#include<bits/stdc++.h>
using namespace std;

long long int solve(long long int a, long long int b) {
	return a * b + (a - b);
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	int t;
	for(cin>>t; t--;) {
		int n;
		cin>>n;
		long long int a[n];
		for(int i = 0; i < n; ++i) {
			cin>>a[i];
		}
		sort(a, a + n);
		long long int maximum = 0;
		
		int j = n - 1;
		for(int i = 0; i < n; ++i) {
			if (solve(a[j], a[i]) >= maximum) {
				maximum = solve(a[j], a[i]);
			}
			j--;
		}
		
		cout<<maximum<<"\n";
		
	}
	
	return 0;
}
