#include <iostream>
using namespace std;

int main() {
    int k, w;
    long long n;
    cin >> k >> n >> w;
    long long total = k * 1LL * w * (w + 1) / 2;
    cout << max(0LL, total - n);
    return 0;
}
