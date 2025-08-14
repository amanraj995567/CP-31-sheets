#include <bits/stdc++.h>
#define int long long int

using namespace std;

void solve() {
     int n,q;
     cin>>n>>q;
     vector<int>a(n),x(n);
     for(auto &i:a)cin>>i;
     for(auto &i:x)cin>>i;
     
     vector<pair<int,int>>p;
     for(int i=0;i<n;i++){
         p.push_back({a[i],i});
     }
     sort(p.begin(),p.end());

     for(auto i:x){
        int divi = pow(2,i);
        int toAdd = pow(2,i-1);

        for(int i=0;i<p.size();i++){
         int num = p[i].first;
         int idx = p[i].second;
         
         if(num%divi==0){
             num=num+toAdd;
             p[i].first=num;
         }
          
     }
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