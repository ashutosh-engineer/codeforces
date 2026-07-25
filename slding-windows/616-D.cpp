#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    unordered_map<int,int> freq;
    int left = 0;
    int bestL = 0, bestR = 0;
    int maxLen = 0;

    for (int right = 0; right < n; right++) {
        freq[a[right]]++;

        while ((int)freq.size() > k) {
            freq[a[left]]--;
            if (freq[a[left]] == 0) freq.erase(a[left]);
            left++;
        }

        if (right - left + 1 > maxLen) {
            maxLen = right - left + 1;
            bestL = left;
            bestR = right;
        }
    }

    cout << bestL + 1 << " " << bestR + 1 << "\n";
    return 0;
}
