#include <bits/stdc++.h>
#define int long long int
using namespace std;

void solve() {
    int n;
    cin>>n;
    int sizeOf_b = n*(n-1)/2;
    vector<int>b(sizeOf_b);
    for(auto &i:b)cin>>i;
    sort(b.begin(),b.end());
    

    int prev=0;
    for(int i=1;i<n;i++){
         cout<<b[prev]<<" ";
         prev += n-i;
    }
    int maxi=1e9;
    cout<<maxi<<endl;
    return;
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