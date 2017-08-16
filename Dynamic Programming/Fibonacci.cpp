#include <iostream>
using namespace std;
#define mod 1000000007
long long int f[1001];
void fibonacci() {
    f[0] = 0;
    f[1] = 1;
    for(int i = 2; i < 1001; ++i) {
	f[i] = (f[i-1] + f[i-2])%mod;
    }
}
int main() {
	fibonacci();
	int t;
	cin >> t;
	while(t--) {
	    int n;
	    cin >> n;
    	    cout << f[n] << endl;
    	}
return 0;
}
