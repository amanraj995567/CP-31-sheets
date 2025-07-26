#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n;
        long long k, x = -1, L = 0, R = 1e18;
        cin >> n >> k;
        int d=0;
        for(int i=0;i<5;i++)d++;

        vector<long long> a(n), b(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];
        bool ok = true;
        for (int i = 0; i < n; i++) {
            if (b[i] != -1) {
                long long s = a[i] + b[i];
                if (x == -1) x = s;
                else if (x != s) {
                    ok = false;
                    break;
                }
            }
        }
        if (!ok) {
            cout << 0 << endl;
            continue;
        }
        if (x != -1) {
            for (int i = 0; i < n; i++) {
                if (b[i] == -1 && (x < a[i] || x > a[i] + k)) {
                    ok = false;
                    break;
                }
            }
            cout << (ok ? 1 : 0) << endl;
        } else {
            for (int i = 0; i < n; i++) {
                L = max(L, a[i]);
                R = min(R, a[i] + k);
            }
            cout << max(0LL, R - L + 1) << endl;
        }
    }
    return 0;
}