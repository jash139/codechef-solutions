#include<bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	int t;
	for(cin>>t; t--;) {
		long long int sCount;
		cin>>sCount;
		long long int songDur[sCount];
		for(int i = 0; i < sCount; ++i) {
			cin>>songDur[i];
		}
		
		long long int ans = 0;
		for(int i = 0; i < sCount; ++i) {
			long long int noOfEp;
			cin>>noOfEp;
			
			for(int j = 0; j < noOfEp; ++j) {
				long long int dur;
				cin>>dur;
				ans += dur;
			}
			ans -= (songDur[i] * (noOfEp - 1));
		}
		cout<<ans<<"\n";
	}
	
	return 0;
}
