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
		int c[n], l[n], x[n];
		for(int i = 0; i < n; ++i) {
			cin>>c[i]>>l[i]>>x[i];
		}
		
		int dis1 = 0, city1 = 0, dis2 = 0, city2 = 0, dis3 = 0, city3 = 0;
		for(int i = 0; i < n; ++i) {
			if (l[i] == 1) {
				if (x[i] > dis1) {
					dis1 = x[i];
					city1 = c[i];
				} else if (x[i] == dis1) {
					if (city1 > c[i]) {
						city1 = c[i];
					}
				}
			} else if (l[i] == 2) {
				if (x[i] > dis2) {
					dis2 = x[i];
					city2 = c[i];
				} else if (x[i] == dis2) {
					if (city2 > c[i]) {
						city2 = c[i];
					}
				}
			} else if (l[i] == 3) {
				if (x[i] > dis3) {
					dis3 = x[i];
					city3 = c[i];
				} else if (x[i] == dis3) {
					if (city3 > c[i]) {
						city3 = c[i];
					}
				}
			}
		}
		cout<<dis1<<" "<<city1<<"\n";
		cout<<dis2<<" "<<city2<<"\n";
		cout<<dis3<<" "<<city3<<"\n";
	}
	
	return 0;
}
