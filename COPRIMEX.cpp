#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n) { 
    if (n <= 1)
		return false;  
    if (n <= 3)
		return true;  
    
    if (n % 2 == 0 || n % 3 == 0)
		return false;  
    
    for (int i = 5; i * i<= n; i = i + 6)  
        if (n % i == 0 || n % (i + 2) == 0)  
           return false;  
    
    return true;  
}

int nextPrime(int n) {
    if (n <= 1) 
        return 2; 
  
    int prime = n; 
    bool found = false; 
  
    while (!found) { 
        prime++; 
  
        if (isPrime(prime)) 
            found = true; 
    } 
  
    return prime; 
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	int t;
	for(cin>>t; t--;) {
		int l, r;
		cin>>l>>r;
		cout<<nextPrime(r)<<"\n";
	}
	
	return 0;
}
