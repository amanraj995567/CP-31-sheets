#include <bits/stdc++.h>
#define int long long int

using namespace std;

void solve() {
    int n;
    cin>>n;
    vector<int>a(n);
    for(auto &i:a)cin>>i;
    
    int ans=0,cntZ=0;
    for(int i=0;i<n;i++){
        if(a[i]==0)cntZ++;
        else{
            cntZ=0;
        }
        ans=max(ans,cntZ);

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