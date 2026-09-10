#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int d[n];
        for(int i = 0; i < n; i++) {
            cin >> d[i];
        }
        
        bool isNonDecreasing = true;
        for(int i = 1; i < n; i++) {
            if(d[i] < d[i - 1]) {
                isNonDecreasing = false;
                break;
            }
        }

        if(isNonDecreasing) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }
    return 0;
}