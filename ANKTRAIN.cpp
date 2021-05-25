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
		int bn = n % 8;
		string ber;
		int pbn;
		if (bn == 1 or bn == 4)
			ber = "LB";
		else if (bn == 2 or bn == 5) 
			ber = "MB";
		else if (bn == 3 or bn == 6)
			ber = "UB";
		else if (bn == 7)
			ber = "SU";
		else if (bn == 0)
			ber = "SL";
			
		if (bn == 1 or bn == 2 or bn == 3) {
			pbn = n + 3;
		} else if (bn == 4 or bn == 5 or bn == 6) {
			pbn = n - 3;
		} else {
			if (bn == 7)
				pbn = n + 1;
			else 
				pbn = n - 1;
		}
		cout<<pbn<<ber<<"\n";
	}
	
	return 0;
}
