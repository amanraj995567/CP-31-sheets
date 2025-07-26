#include <bits/stdc++.h>
#define int long long int
using namespace std;


void solve() {
    int n;
    cin>>n;
    vector<int>a(n);
    for(auto &i:a)cin>>i;
    if(n==1){
        cout<<0<<endl;
        return;
    }

    int operation =0;
    for(int i=n-2;i>=0;i--){
        while(a[i]>=a[i+1] && a[i+1]>0){
             operation++;
             a[i]/=2;
        }
        if(a[i+1]==0){
            cout<<-1<<endl;
            return;
        }
    }

    cout<<operation<<endl;

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