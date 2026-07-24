#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    ll sum = 0;
    for (int i = 0; i < k; i++) {
        sum += arr[i];
    }

    ll minsum = sum;
    int ansIndex = 0;

    for (int i = k; i < n; i++) {
        sum += arr[i];
        sum -= arr[i - k];
        if (sum < minsum) {
            minsum = sum;
            ansIndex = i - k + 1;
        }
    }

    cout << ansIndex + 1 << "\n"; // 1-based index
    return 0;
}