#include<bits/stdc++.h>
using namespace std;

struct Ev {
	int t;
	int type;
};

Ev* newEv(int t, int type) {
	Ev* temp = new Ev();
	temp->t = t;
	temp->type = type;
	return temp;
}

bool comp(Ev* a, Ev* b) {
    return a->t < b->t;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	int t;
	
	for(cin>>t; t--;) {
		int n, m;
		cin>>n>>m;
		vector<Ev *> events;
		int f[n], c[m];
		for(int i = 0; i < n; ++i) {
			cin>>f[i];
			events.push_back(newEv(f[i], 0));
		}
		for(int i = 0; i < m; ++i) {
			cin>>c[i];
			events.push_back(newEv(c[i], 1));
		}
		
		sort(events.begin(), events.end(), comp);
		
		int ans = 0;
		int prev = 0;
		for(int i = 0; i < n + m; ++i) {
			if (events[i]->type != prev) {
				ans++;
				prev = events[i]->type;
			}
		}
		cout<<ans<<"\n";
	}
	
	return 0;
}
