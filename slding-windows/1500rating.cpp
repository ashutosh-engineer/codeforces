#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;

    vector<int> a(n);

    for (int i = 0; i < n; i++)
        cin >> a[i];

    unordered_map<int, int> freq;
    int distinct = 0;
    int left = 0;

    for (int right = 0; right < n; right++) {

        // Add current element
        if (freq[a[right]] == 0)
            distinct++;
        freq[a[right]]++;

        // Too many distinct -> shrink
        while (distinct > k) {
            freq[a[left]]--;
            if (freq[a[left]] == 0) {
                freq.erase(a[left]);
                distinct--;
            }
            left++;
        }

        // Exactly k distinct
        if (distinct == k) {

            // Remove unnecessary duplicates
            while (freq[a[left]] > 1) {
                freq[a[left]]--;
                left++;
            }

            cout << left + 1 << " " << right + 1 << "\n";
            return 0;
        }
    }

    cout << "-1 -1\n";
    return 0;
}