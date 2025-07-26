#include <bits/stdc++.h>
#define int long long int

using namespace std;

void solve() {
     int n,x;
     vector<int>a(n);
     int k=0;
     for(int j=0;j<3;j++){

        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        for(int i=0;i<n;i++){
            if(x|a[i]!=x)break;
            k = k|a[i];
        }
        
     }

     if(k==x)cout<<"Yes"<<endl;
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