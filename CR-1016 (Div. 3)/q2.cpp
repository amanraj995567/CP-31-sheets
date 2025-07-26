#include <bits/stdc++.h>
#define int long long int

using namespace std;

void solve() {
    string n;
    cin>>n;

    int z=0, b=0;
    for(auto &i:n){
        if(i=='0')z++;

        else b = max(b,z+1);
    }

    cout<<n.size()-b<<endl;

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