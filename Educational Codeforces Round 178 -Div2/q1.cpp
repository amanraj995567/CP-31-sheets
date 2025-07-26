#include <bits/stdc++.h>
#define int long long int

using namespace std;

void solve() {
    int a,b,c;
    cin>>a>>b>>c;
    if((a+b+c)%3==0 && a+c>=2*b){
        cout<<"Yes"<<endl;
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