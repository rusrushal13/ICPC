#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
int main() {      
	int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int v[n];
        for(int i = 0; i < n; ++i) {
            cin >> v[i];
        }
        int current_max = v[0];
        int maxi = v[0];
        for(int i = 1; i < n; ++i) {
            current_max = max(v[i], current_max + v[i]);
            maxi = max(current_max, maxi);
        }
        cout << maxi << endl;
    }
	return 0;
}
