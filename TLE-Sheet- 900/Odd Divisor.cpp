#include <bits/stdc++.h>
#define int long long int

using namespace std;

void solve() {
    int n;
    cin>>n;
    while(n%2==0){
        n=n/2;
    }
    if(n>1){
        cout<<"Yes"<<endl;
        return;
    }
    else cout<<"No"<<endl;

    
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