#include <bits/stdc++.h>
#define int long long int

using namespace std;

bool check(int n){
    if(n<2)return false;

    for(int i=2;i*i<=n;i++){
        if(n%i==0)return false;
    }
    return true;
}


void solve() {

    int x,k;
    cin>>x>>k;
    
    if(k==1){    
        if(check(x)){  
            cout<<"Yes"<<endl;
        }
        else cout<<"No"<<endl;
    }
    else{
        if(x==1&&k==2)cout<<"Yes"<<endl;
        else cout<<"No"<<endl;     
    }
    

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