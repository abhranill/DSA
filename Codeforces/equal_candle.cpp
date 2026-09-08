#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        vector<int> a(n);
        int mn = 1000000000;
 
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            mn = min(mn, a[i]);
        }
 
        long long ans = 0;
        for (int i = 0; i < n; i++) {
            ans += (a[i] - mn);
        }
 
        cout << ans << "\n";
    }
 
    return 0;
}
