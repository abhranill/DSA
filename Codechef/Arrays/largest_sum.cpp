#include <bits/stdc++.h>
using namespace std;

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int firstMax = INT_MIN;
        int secondMax = INT_MIN;

        for (int i = 0; i < n; i++) {
            if (a[i] > firstMax) {
                secondMax = firstMax;
                firstMax = a[i];
            } else if (a[i] > secondMax && a[i] != firstMax) {
                secondMax = a[i];
            }
        }

        cout << (firstMax + secondMax) << "\n";
    }
    return 0;
}