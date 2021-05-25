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
		long long int a[n], sum = 0;
		
		int flag = 0;
		for(int i = 0; i < n; ++i) {
			cin>>a[i];
			sum += a[i];
			if (flag == 0) {
				if (fmod(abs(pow(a[i], ceil((double)a[i] / 2 - 1)> 0 ? 0 : ceil((double)a[i] / 2 - 1)) - a[i]), 2) != 0) {
					flag = 1;
					
				}
			}
		}
		if (sum % 2 == 0) {
			cout<<"0\n";
		} else if (flag == 1) {
			cout<<"1\n";
		} else {
			cout<<"-1\n";
		}
	}
	
	return 0;
}
