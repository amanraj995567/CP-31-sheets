#include <bits/stdc++.h>
#define int long long int
using namespace std;

void solve() {
    int n;
    cin>>n;
    vector<int>a(n);
    map<int,int>mp;
    int cnt=0;
    for(auto &i:a){
        cin>>i;
        mp[i]++;
        cnt = max(cnt,mp[i]);
    }
  
    int op=0;
   
    while(cnt<n){
        op++;
       int swapping = min(cnt,n-cnt);
       op+=swapping;
        cnt=cnt+swapping;
    }
    cout<<op<<endl;
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