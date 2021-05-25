#include<bits/stdc++.h>
using namespace std;
 
int removeDuplicates(int arr[], int n) {
    if (n==0 or n==1)
        return n;
  
    int temp[n];
  
    int j = 0;
    for (int i=0; i<n-1; i++) {
    	if (arr[i] != arr[i+1])
            temp[j++] = arr[i];
	}
        
  
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
		int n, x;
		cin>>n>>x;
		int a[n];
		for(int i = 0; i < n; ++i) {
			cin>>a[i];
		}
		int ans = 0;
		sort(a, a + n);
		int size = removeDuplicates(a, n);
		for(int i = 0; i < size; ++i) {
			if (n - ans > x) {
				ans++;
			}
		}
		cout<<ans<<"\n";
		
	}
	
	return 0;
}
