#include <bits/stdc++.h>
#define int long long int

using namespace std;

void solve() {
    int n, x;
    cin >> n >> x;

    // Case x == n: only one prefix (the full one) has MEX = n.
    if (x == n) {
        for (int i = 0; i < n; i++) {
            cout << i << (i + 1 < n ? ' ' : '\n');
        }
        return;
    }

    // Otherwise, print 0..x-1
    for (int i = 0; i < x; i++) {
        cout << i << " ";
    }
    // Then print x+1..n-1
    for (int i = x + 1; i < n; i++) {
        cout << i << " ";
    }
    // Finally, put x at the end
    cout << x << '\n';
}

int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}