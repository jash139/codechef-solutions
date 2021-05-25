#include<bits/stdc++.h>
using namespace std;

int removeDuplicates(long long int arr[], int n) {
    if (n==0 || n==1)
        return n;
  
    int temp[n];
  
    int j = 0;
    for (int i=0; i<n-1; i++)
  
        if (arr[i] != arr[i+1])
            temp[j++] = arr[i];
  
    temp[j++] = arr[n-1];
  
    for (int i=0; i<j; i++)
        arr[i] = temp[i];
  
    return j;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	int t;
	for(cin>>t; t--;) {
		int n, req, rod;
		cin>>n>>req>>rod;
		long long int w[n];
		long long int max = 0;
		for(int i = 0; i < n; ++i) {
			cin>>w[i];
			if (w[i] >= max) {
				max = w[i];
			}
		}
		long long int weights[max + 2] = {0};
		
		for(int i = 0; i < n; ++i) {
			weights[w[i]]++;
		}
		
		sort(w, w + n);
		n = removeDuplicates(w, n);
		
		long long int added = rod;
		for(int i = 0; i < n; ++i) {
			if (weights[w[i]] > 1) {
				long long int t = weights[w[i]] / 2;
				int tem = weights[w[i]];
				if (weights[w[i]] % 2 != 0) {
					tem--;
				} 
				added += tem * w[i];
			}
		}
		
		if (added >= req) {
			cout<<"YES\n";
		} else {
			cout<<"NO\n";
		}
	}
	
	return 0;
}
