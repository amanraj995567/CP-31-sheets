#include <bits/stdc++.h>
#define int long long int

using namespace std;

void solve() {
     int n;
     cin>>n;
     string s;
     cin>>s;

     int cnt_o = 0;
     for(auto &ch:s ){
          if(ch=='(')cnt_o++;
          else{
               if(cnt_o>0)cnt_o--;
          }
     }
     cout<<cnt_o<<endl;

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