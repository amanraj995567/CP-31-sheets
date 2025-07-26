#include <bits/stdc++.h>
#define int long long int

using namespace std;

void solve() {
     int n;
     cin>>n;
     string s;
     cin>>s;
     int ans=0,ones=0;
     for(auto &i:s){
        if(i=='1')ones++;
     }

     for(auto &i:s){
         if(i=='1')ans+=(ones-1);
         else ans+=(ones+1);
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