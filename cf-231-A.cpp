#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;              // read the first number

    int count = 0;          // to keep track of solved problems

    for (int i = 0; i < n; i++) {
        int a, b, c;
        cin >> a >> b >> c;   // read the 3 numbers on this line

        int ones = a + b + c;
        if (ones >= 2) {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}