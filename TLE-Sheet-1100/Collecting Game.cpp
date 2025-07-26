#include <bits/stdc++.h>
#define int long long int

using namespace std;

void solve() {
     int n;
     cin>>n;
     vector<int>a(n);
     for(auto &i:a)cin>>i;

     vector<int>b = a;
     sort(begin(b),end(b));

     vector<int>Psum;
     Psum[0] = b[0];
     unordered_map<int,int>mp;
     mp[b[n-1]]=n-1;

     for(int i=1;i<n;i++){
         Psum[i] = Psum[i-1]+b[i];
     }

     for(int i=n-2;i>=0;i--){
      
         if(Psum[i]>=b[i+1]){
             mp[b[i]]=mp[b[i+1]];
         }
         else mp[b[i]]= i;

         
     }

     for(int i=0;i<n;i++){
          cout<<mp[a[i]]<<" ";
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