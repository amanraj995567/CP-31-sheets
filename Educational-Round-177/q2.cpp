#include <bits/stdc++.h>
#define int long long int

using namespace std;

void solve() {
    int n, k;
    long long x;
    cin >> n >> k >> x;

    vector<long long> a(n);
    long long T = 0;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        T += a[i];
    }

    
    vector<long long> P(n + 1, 0);
    for (int i = 1; i <= n; i++) {
        P[i] = P[i - 1] + a[i - 1];
    }
    long long X_val = k * T - x;
    long long ans = 0;

    if (X_val < 0) { 
        cout << 0 << "\n";
        return;
    }

    
    for (int r = 0; r < n; r++) {
        if (P[r] > X_val) continue;

        long long max_p = (X_val - P[r]) / T; 

       
        long long count_p = min((long long)k, max_p + 1);
        ans += count_p;
    }

    cout << ans << "\n";
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
