#include <bits/stdc++.h>
#define int long long int

using namespace std;

void solve() {

    int n,k;
    cin>>n>>k;

    vector<int>a(n*k);
    for(auto &i:a)cin>>i;

    int p=n*k;
    int ans=0;
    while(k--){
        p=p-(n/2+1);
        ans+=a[p];
    }

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