#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<char> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    // Total distinct characters in whole string
    unordered_set<char> st;
    for (char c : arr)
        st.insert(c);

    int totalDistinct = st.size();

    unordered_map<char, int> freq;

    int left = 0;
    int ans = INT_MAX;

    for (int right = 0; right < n; right++) {

        freq[arr[right]]++;

        while (freq.size() == totalDistinct) {

            ans = min(ans, right - left + 1);

            freq[arr[left]]--;

            if (freq[arr[left]] == 0)
                freq.erase(arr[left]);

            left++;
        }
    }

    cout << ans << '\n';

    return 0;
}