#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--) {
        int n, k, x;
        cin >> n >> k >> x;

        // Special case: if x != 1, we can always use 1's
        if(x != 1) {
            cout << "YES\n";
            cout << n << "\n";
            for(int i = 0; i < n; i++) cout << 1 << " ";
            cout << "\n";
        } else {
            // If x == 1, we must use 2's and 3's
            if(k == 1) {
                cout << "NO\n";
            } else if(n % 2 == 0) {
                cout << "YES\n";
                cout << n/2 << "\n";
                for(int i = 0; i < n/2; i++) cout << 2 << " ";
                cout << "\n";
            } else if(k >= 3) {
                cout << "YES\n";
                cout << (n-3)/2 + 1 << "\n";
                cout << 3 << " ";
                for(int i = 0; i < (n-3)/2; i++) cout << 2 << " ";
                cout << "\n";
            } else {
                cout << "NO\n";
            }
        }
    }
    return 0;
}
