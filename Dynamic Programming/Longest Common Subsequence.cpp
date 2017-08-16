#include <iostream>
using namespace std;
void longestCommonSubsequence(string a, string b) {
    int temp[a.length() + 1][b.length() + 1];
    int m = -423432;
    for(int i = 0; i < a.length()+1; ++i) {
        for(int j = 0; j < b.length()+1; ++j) {
            if(i == 0 || j == 0) {
                temp[i][j] = 0;
            }
            else {
                if(a[i - 1] == b[j - 1]) {
                    temp[i][j] = temp[i-1][j-1] + 1;
                }
                else {
                    temp[i][j] = max(temp[i-1][j], temp[i][j-1]);
                }
            }
            if(temp[i][j] > m)
                m = temp[i][j];
        }
    }
    cout << m << endl;
}
int main() {
	int t;
	cin >> t;
	while(t--) {
	    int n1, n2;
	    cin >> n1 >> n2;
	    string a, b;
	    cin >> a >> b;
	    longestCommonSubsequence(a, b);
	}
	return 0;
}

