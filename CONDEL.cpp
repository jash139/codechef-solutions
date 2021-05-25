#include<bits/stdc++.h>
using namespace std;

int* findLongestZeros(int a[], int n, int k) {
	int max = 0, index = 0;
	for(int i = 0; i < n - k; ++i) {
		int temp = 0, tempCost = 0;
		for(int j = i; j < i + k; ++j) {
			if (a[j] == 0) {
				temp++;
			}
		}
		if (temp >= max) {
			max = temp;
			index = i;
		}
	}
	static int ans[2];
	ans[0] = index;
	ans[1] = k - max;
	return ans;
}

int findCost(int a[], int start, int end) {
	int cost = 0;
	for(int i = start; i < end; ++i) {
		if (a[i] == 1) {
			cost++;
		}
	}
	return cost;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	int t;
	for(cin>>t; t--;) {
		int n, k;
		cin>>n>>k;
		int a[n];
		for(int i = 0; i < n; ++i) {
			cin>>a[i];
		}
		int* res = findLongestZeros(a, n, k);
		
		cout<<res[0]<<" "<<res[1]<<"\n";
//		int cost = 0;
//		int tempCost = findCost(a, index, index + k);
//		for(int i = index; i >= 0; --i) {
//			
//		}
	}
	
	return 0;
}
