#include <bits/stdc++.h>
#define int long long int

using namespace std;

void solve() {
     string s;
     cin>>s;
     int one =0;
     for(auto &i:s){
        if(i=='1')one++;
     }
     cout<<one<<endl;
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