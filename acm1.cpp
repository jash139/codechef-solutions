#include<bits/stdc++.h>
using namespace std;

long long power(unsigned long long x, int y, int p) {
    unsigned long long res = 1;
 
    x = x % p;
 
    while (y > 0) {
        if (y & 1)
            res = (res * x) % p;
        y = y >> 1;
        x = (x * x) % p;
    }
    return res;
}

unsigned long long modInverse(unsigned long long n, int p) {
    return power(n, p - 2, p);
}

unsigned long long nCrModPFermat(unsigned long long n, int r, int p) {
    if (n < r)
        return 0;
    if (r == 0)
        return 1;
    unsigned long long fac[n + 1];
    fac[0] = 1;
    for (int i = 1; i <= n; i++)
        fac[i] = (fac[i - 1] * i) % p;
 
    return (fac[n] * modInverse(fac[r], p) % p * modInverse(fac[n - r], p) % p) % p;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	long long int p = 1000000007;
	int n;
	cin>>n;
	int a[n], c[n];
	for(int i = 0; i < n; ++i) {
		cin>>a[i]>>c[i];
	}
	sort()
	
	cout<<nCrModPFermat(3, 2, p);
	return 0;
}
