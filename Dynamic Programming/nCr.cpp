#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ll long long int
void nCr(long long int n, long long int r) {
    long long int C[r+1];
    memset(C, 0, sizeof(C));
    C[0] = 1;
    for(ll i = 1; i <= n; ++i){
        for(ll j = min(i, r); j > 0; j--) {
            C[j] = (C[j] + C[j-1])%mod;
        }
    }
    cout << C[r] << endl;
}
int main() {
	//code
	int t;
	cin >> t;
	while(t--) {
	    int n, r;
	    cin >> n >> r;
	    nCr(n, r);
	}
	return 0;
}

