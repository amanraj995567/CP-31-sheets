#include <bits/stdc++.h>
using namespace std;

vector<long long> pm(const vector<long long>& a) {
    int n = a.size();
    vector<long long> pmax(n);
    pmax[0] = a[0];
    for (int i = 1; i < n; ++i) pmax[i] = max(pmax[i-1], a[i]);
    return pmax;
}

vector<long long> ssum(const vector<long long>& a) {
    int n = a.size();
    vector<long long> suf(n+1);
    for (int i = n-1; i >= 0; --i) suf[i] = suf[i+1] + a[i];
    return suf;
}

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; ++i) cin >> a[i];
        vector<long long> pmax = pm(a);
        vector<long long> suf = ssum(a);
        for (int k = 1; k <= n; ++k) {
            int idx = n - k;
            long long v1 = suf[idx];
            long long v2 = suf[idx+1] + pmax[idx];
            cout << max(v1, v2) << " ";
        }
        cout << "\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}