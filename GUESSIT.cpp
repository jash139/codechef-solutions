#include<bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	int t;
	int check = 0;
	for(cin>>t; t--;) {
		if (check == 1) {
			break;
		}
		int i = 1;
		while(true) {
			cout<<i * i<<endl;
			int res;
			cin>>res;
			if (res == 0) {
				i++;
				continue;
			} else if (res == 1) {
				i = 1;
				break;
			} else if (res == -1) {
				check = 1;
				break;
			}
		}
	}
	
	return 0;
}
