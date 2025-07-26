#include <bits/stdc++.h>
#define int long long int

using namespace std;

void solve() {
    int n;
    cin>>n;
    vector<int>a(n);
    int neg=0,pos=0;
    for(auto &i:a){
        cin>>i;
        if(i<0)neg++;
        else if(i>0)pos++;
    }

    int ans=0;
    while(neg>pos || neg%2==1){
        ans++;
        pos++;
        neg--;
    }
    
    cout<<ans<<endl;
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