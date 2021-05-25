#include<bits/stdc++.h>
using namespace std;

int checkFront(int *l, int *g, int n) {
	for(int i = 0; i < n; ++i) {
		if (l[i] > g[i]) {
			return 0;
		}
	}
	return 1;
}

int checkBack(int *l, int *g, int n) {
	int j = 0;
	for(int i = n - 1; i >= 0; --i) {
		if (l[j] > g[i]) {
			return 0;
		}
		j++;
	}
	return 1;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	int t;
	for(cin>>t; t--;) {
		int n;
		cin>>n;
		int l[n], g[n];
		for(int i = 0; i < n; ++i) {
			cin>>l[i];
		}
		for(int i = 0; i < n; ++i) {
			cin>>g[i];
		}
		int front = checkFront(l, g, n);
		int back = checkBack(l, g, n);
		if (front and back) {
			cout<<"both\n";
		} else if (front and !back) {
			cout<<"front\n";
		} else if (!front and back) {
			cout<<"back\n";
		} else {
			cout<<"none\n";
		}
	}
	
	return 0;
}
