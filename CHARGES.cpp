#include<bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	int t;
	for(cin>>t; t--;) {
		int n, k;
		cin>>n>>k;
		string s;
		cin>>s;
		int q[k];
		for(int i = 0; i < k; ++i) {
			cin>>q[i];
		}
		if (n == 1) {
			cout<<"0\n";
			continue;
		}
		int totalDistance = 0;
		for(int i = 1; i < n; ++i) {
			if (s[i - 1] != s[i]) {
				totalDistance++;
			} else {
				totalDistance += 2;
			}
		}
		for(int i = 0; i < k; ++i) {
			int pos = q[i] - 1;
			if (pos == 0 && n > 1) {
				if (s[pos] != s[pos + 1]) {
					totalDistance++;
				} else {
					totalDistance--;
				}
				cout<<totalDistance<<"\n";
				if (s[pos] == '0') {
					s[pos] = '1';
				} else {
					s[pos] = '0';
				}
				continue;
			}
			if (pos == n - 1 && n > 1) {
				if (s[pos] != s[pos - 1]) {
					totalDistance++;
				} else {
					totalDistance--;
				}
				cout<<totalDistance<<"\n";
				if (s[pos] == '0') {
					s[pos] = '1';
				} else {
					s[pos] = '0';
				}
				continue;
			}
			if (s[pos] != s[pos + 1]) {
				totalDistance++;
			} else {
				totalDistance--;
			}
			if (s[pos] != s[pos - 1]) {
				totalDistance++;
			} else {
				totalDistance--;
			}
			if (s[pos] == '0') {
				s[pos] = '1';
			} else {
				s[pos] = '0';
			}
			cout<<totalDistance<<"\n";
		}
	}
	
	return 0;
}
