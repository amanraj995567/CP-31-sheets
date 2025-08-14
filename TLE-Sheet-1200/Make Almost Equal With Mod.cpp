#include <bits/stdc++.h>
#define int long long int

using namespace std;

void solve() {
    int n;
    cin>>n;
    vector<int>a(n);
    for(auto &i:a)cin>>i;
    
    int ans=2;
    while(1){
        set<int>s;
        for(auto i:a){
            s.insert(i%ans);
        }

        if(s.size()==2){
            cout<<ans<<endl;
            return;
        }

        ans=ans*2;
    }

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