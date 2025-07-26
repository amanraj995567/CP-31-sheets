#include <bits/stdc++.h>
#define int long long int

using namespace std;

void solve() {
     int n;
     cin>>n;
     vector<int>a(n);
     for(auto &i:a)cin>>i;
     
     for(int i=1;i<n-1;i++){
          if(a[i]>a[i-1] && a[i]>a[i+1]){
              cout<<"Yes"<<endl;
              cout<<i<<" "<<i+1<<" "<<i+2<<endl;
              return;
          }
          else continue;
     }

     cout<<"No"<<endl;


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