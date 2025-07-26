#include <bits/stdc++.h>
#define int long long int

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n + 1);
    a[0] = 0;
    for (int i = 1; i < a.size(); i++) {
        cin >> a[i];
    }
    
    int group = 0;
    for (int i = 1; i < a.size(); i++) {
        if (a[i] > 0 && a[i - 1] == 0) {
            group++;
        }
    }

    cout << min(2LL, group) << endl;  // Ensure correct type for min
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
