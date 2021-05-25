#include<bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	int t;
	for(cin>>t; t--;) {
		int n;
		cin>>n;
		int a[n];
		for(int i = 0; i < n; ++i) {
			cin>>a[i];
		}
		
		sort(a, a + n);
		
		int count = 0;
		for(int i = 0; i < n; ++i) {
			if (a[i] <= count or a[i] == 0) {
				count++;
			}
		}
		cout<<count<<"\n";
		
	}
	
	return 0;
}
