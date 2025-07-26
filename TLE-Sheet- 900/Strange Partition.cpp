#include <bits/stdc++.h>
#define int long long int

using namespace std;

void solve() {
    int n,x;
    cin>>n>>x;
    vector<int>a(n);
    int tsum=0;
    for(auto &i:a){
        cin>>i;
       tsum+=i;
    }
    int mini = tsum/x;
    int maxi = 0;
    for(auto i:a){
        int y = (i+x-1)/x;
        maxi+=y;
    }
    cout<<mini<<" "<<maxi<<endl;
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