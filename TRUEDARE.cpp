#include<bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	int t;
	for(cin>>t; t--;) {
		int t1;
		cin>>t1;
		int tr[t1];
		int tram[100] = {0};
		for(int i = 0; i < t1; ++i) {
			cin>>tr[i];
			tram[tr[i]]++;
		}
		int d1;
		cin>>d1;
		int dr[d1];
		int dram[100] = {0};
		for(int i = 0; i < d1; ++i) {
			cin>>dr[i];
			dram[dr[i]]++;
		}
		int truths = 0, dares = 0;
		int t2;
		cin>>t2;
		int ts[t2];
		for(int i = 0; i < t2; ++i) {
			cin>>ts[i];
			if (tram[ts[i]] == 0) {
				truths = 1;
			}
		}
		int d2;
		cin>>d2;
		int ds[d2];
		for(int i = 0; i < d2; ++i) {
			cin>>ds[i];
			if (dram[ds[i]] == 0) {
				dares = 1;
			}
		}
		
		if (truths == 1 or dares == 1) {
			cout<<"no\n";
		} else {
			cout<<"yes\n";
		}
	}
	
	return 0;
}
