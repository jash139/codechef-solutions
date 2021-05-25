#include<bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	int t;
	for(cin>>t; t--;) {
		int a, b;
		cin>>a>>b;
		int i = 1, aSum = 0, bSum = 0;
		while(true) {
			if (i % 2 == 0) {
				if (bSum + i > b) {
					cout<<"Limak\n";
					break;
				} else {
					bSum += i;
				}
			} else {
				if (aSum + i > a) {
					cout<<"Bob\n";
					break;
				} else {
					aSum += i;
				}
			}
			i++;
		}
	}
	
	return 0;
}
