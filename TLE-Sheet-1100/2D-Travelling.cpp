#include <bits/stdc++.h>
#define int long long

using namespace std;

void solve() {
    int n,k,a,b;
    cin>>n>>k>>a>>b;
    
    vector<int>x(n+1),y(n+1);
    for(int i=1;i<=n;i++)cin>>x[i]>>y[i];

    int mini_a = INT_MAX,mini_b = INT_MAX;
    int ans = abs(x[a]-x[b]) + abs(y[a]-y[b]);
    for(int i=1;i<=k;i++){
        mini_a = min(mini_a , abs(x[i]-x[a]) + abs(y[i]-y[a]) );
        mini_b = min(mini_b,abs(x[i]-x[b]) + abs(y[i]-y[b]) );
    }
    ans = min(ans,mini_a+mini_b);

    cout<<ans<<endl;
    

    
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