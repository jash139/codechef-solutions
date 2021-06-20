#include<bits/stdc++.h>
using namespace std;

bool check(int count[]) {
	int n = 7;
	for (int i = 0; i < n; ++i) {
		if (count[i] == 1) {
			return false;
		}
	}
	return true;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	int t;
	for(cin>>t; t--;) {
		int n;
		cin>>n;
		int a[n];
		for (int i = 0; i < n; ++i) {
			cin>>a[i];
		}
		int count[7] = {0};
		for (int i = 0; i < 7; ++i) {
			count[i] = 1;
		}
		for (int i = 0; i < n; ++i) {
			if (a[i] >= 1 and a[i] <= 7) {
				count[a[i] - 1] = 0;
			}
			if (check(count)) {
				cout<<i + 1<<"\n";
				break;
			}
		}
	}
	
	return 0;
}
