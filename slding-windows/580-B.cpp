#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    ll d;
    cin >> n >> d;

    vector<pair<ll,ll>> friends(n);
    for(int i=0; i<n; i++) {
        cin >> friends[i].first >> friends[i].second; 
        // first = money, second = friendship factor
    }

    sort(friends.begin(), friends.end()); // sort by money

    ll ans = 0, sum = 0;
    int l = 0;
    for(int r=0; r<n; r++) {
        sum += friends[r].second;
        while(friends[r].first - friends[l].first >= d) {
            sum -= friends[l].second;
            l++;
        }
        ans = max(ans, sum);
    }

    cout << ans << "\n";
    return 0;
};

// Got issue that not bale to understand the statement only.
//As language is very verbose to understand else implementation was simple;