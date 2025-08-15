#include <bits/stdc++.h>
#define int long long int

using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;

    vector<vector<long long>> v(m, vector<long long>(n));

    for (int j = 0; j < n; j++)
    {
        for (int i = 0; i < m; i++)
        {
            cin >> v[i][j];
        }
    }

    for (int i = 0; i < m; i++)
    {
        sort(v[i].begin(), v[i].end());
    } //? O(m * (n log n))

    long long ans = 0;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            ans -= (v[i][j] * (n - j - 1));
            ans += (v[i][j] * j);
        }
    } //? O(n * m)

    cout << ans << "\n";
}

int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}