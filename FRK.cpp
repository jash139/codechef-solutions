#include<bits/stdc++.h>
using namespace std;



int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	int t, ans = 0;
	for(cin>>t; t--;) {
		string name;
		cin>>name;
		int len = name.length();
		for(int i = 0; i < len - 1; ++i)  {
			if ((name[i] == 'c' and name[i + 1] == 'h') 
					or (name[i] == 'h' and name[i + 1] == 'e')
					or (name[i] == 'e' and name[i + 1] == 'f')) {
				ans++;
				break;
			}
		}
	}
	cout<<ans;
	
	return 0;
}
