#include <bits/stdc++.h>
#define int long long int

using namespace std;

void solve() {
     int n;
     cin>>n;
     string s;
     cin>>s;
     set<char>st;
     int ans=0;
     for(int i=0;i<n;i++){
          if(st.count(s[i])==0){
               ans += (n-i);
               st.insert(s[i]);
          }
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