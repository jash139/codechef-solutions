#include<bits/stdc++.h>
using namespace std;

int findPos(long long int arr[], long long int n, long long int K) {
    long long int start = 0;
    long long int end = n - 1;

    while (start <= end) {
        int mid = (start + end) / 2;
        if (arr[mid] == K)
            return mid;
 
        else if (arr[mid] < K)
            start = mid + 1;
 
        else
            end = mid - 1;
    }
    return end + 1;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	long long int n, q;
	cin>>n>>q;
	long long int a[n];
	unordered_map<int, int> isPresent;
	for (long long int i = 0; i < n; ++i) {
		cin>>a[i];
		isPresent[a[i]] = 1;
	}
	sort(a, a + n);
	for (long long int i = 0; i < q; ++i) {
		long long int x;
		cin>>x;
		int ans = 1;
		if (isPresent.find(x) != isPresent.end()) {
			ans = 0;
		} else if (findPos(a, n, x) % 2 != 0) {
			ans = -1;
		}
		if (ans == 0) {
			cout<<"0\n";
		} else if (ans == 1) {
			cout<<"POSITIVE\n";
		} else {
			cout<<"NEGATIVE\n";
		}
	}
	
	return 0;
}
