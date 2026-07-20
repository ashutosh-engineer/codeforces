#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        if (!is_sorted(arr.begin(), arr.end())) {
            cout << 0 << '\n';
        } 
        else {
            int minimum_diff = INT_MAX;

            for (int i = 1; i < n; i++) {
                int diff = arr[i] - arr[i - 1];
                minimum_diff = min(minimum_diff, diff);
            }

            cout << minimum_diff / 2 + 1 << '\n';
        }
    }

    return 0;
}