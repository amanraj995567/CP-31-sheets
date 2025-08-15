#include <bits/stdc++.h>
#define int long long int
using namespace std;
void solve() {
    int n;
    cin>>n;
    vector<int>a(n);
    for(auto &i:a)cin>>i;

    if(n==1){
        cout<<1<<endl;
        return;
    }
    int state=0; // decreasing;
    int cnt=0;
    for(int i=1;i<n;i++){
         if(a[i-1]>a[i] && state!=1){
            state=1;
            cnt++;
         }
         else if(a[i-1]<a[i] && state!=-1){
            state=-1;
            cnt++;
         }
    }
    cout<<cnt+1<<endl;



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