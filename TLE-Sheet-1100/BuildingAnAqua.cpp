#include <bits/stdc++.h>
#define int long long int

using namespace std;

void solve() {
     int n,x;
     cin>>n>>x;
     vector<int>a(n);
     for(auto &i:a)cin>>i;
     
     
     int h=1;
     while(h>0){
         int w = 0;
         for(int i=0;i<n;i++){
              if(a[i]<=h){
                  w+=(h-a[i]);
              }
         }
         if(w>x)break;
         h++;
     }
     cout<<h-1<<endl;
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