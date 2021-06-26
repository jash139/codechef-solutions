#include<bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	int t;
	for (cin>>t; t--;) {
		
		int n;
		cin>>n;
		int arr[n];
		for (int i = 0; i < n; ++i) {
			cin>>arr[i];
		}
		
		vector<int> v1;
	    vector<int> v2;
	 
	    for (int i = 0; i < n; i++)
	        if (arr[i] % 2 == 0)
	            v2.push_back(arr[i]);
	        else
	            v1.push_back(arr[i]);
		
		int a = v1.size();
		int b = v2.size();
		
		for (int i = 0; i < b; ++i) {
			cout<<v2[i]<<" ";
		}
		for (int i = 0; i < a; ++i) {
			cout<<v1[i]<<" ";
		}
		cout<<"\n";
	}
	
	return 0;
}
