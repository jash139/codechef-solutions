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
		int a[n], b[n], sumA = 0, sumB = 0, maxA = 0, maxB = 0;
		for(int i = 0; i < n; ++i) {
			cin>>a[i];
			sumA += a[i];
			if (a[i] > maxA) {
				maxA = a[i];
			}
		}
		sumA -= maxA;
		for(int i = 0; i < n; ++i) {
			cin>>b[i];
			sumB += b[i];
			if (b[i] > maxB) {
				maxB = b[i];
			}
		}
		sumB -= maxB;
		if (sumA < sumB) {
			cout<<"Alice\n";
		} else if (sumB < sumA) {
			cout<<"Bob\n";
		} else {
			cout<<"Draw\n";
		}
	}
	
	return 0;
}
