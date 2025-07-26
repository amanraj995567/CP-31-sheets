
#include <bits/stdc++.h>
#define int long long int

using namespace std;
void solve(){
      int n;
      cin>>n;
      vector<int>a(n);
      for(int i=0;i<n;i++){
           cin>>a[i];
           if(a[i]==1){
              a[i]++;
           }
      }

      for(int i=0;i<n-1;i++){
           if(a[i+1]%a[i]==0){
               a[i+1]++;
           } 
      }

     

      for(auto i:a){
          cout<<i<<" ";
      }
      cout<<endl;
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