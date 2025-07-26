
#include <bits/stdc++.h>
#define int long long int
using namespace std;

void solve() {
    int n;
    cin>>n;
    vector<int>a(n);
    int zero=0,one=0,total_sum=0;
    for(auto &i:a){
        cin>>i;
        if(i==0)zero++;
        if(i==1)one++;
        total_sum+=i;
    }
    int ans = one * (1ll<<zero);
    cout<< ans <<endl;


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