#include <bits/stdc++.h>
using namespace std;

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> frames(n);

        for (int i = 0; i < n; i++) {
            cin >> frames[i];
        }

        int minFrames = n;
      r
        for (int i = 0; i < n - 1; i++) {
            if (frames[i] == frames[i + 1]) {
                minFrames--;
            }
        }

        cout << minFrames << "\n";
    }

    return 0;
}