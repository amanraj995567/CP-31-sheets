#include <bits/stdc++.h>
#define int long long int

using namespace std;

void solve() {
     int n;
     cin>>n;
     string s;
     cin>>s;
     int a=0;
     for(auto &i:s){
        if(i=='<')a++;
     }

     int x=n-a,y=n; 
     for(auto &i:s){
        if(i=='>'){
            cout<<x<<" ";
            x++;
        }
        else{
            cout<<y<<" ";
            y--;
        }
     }
     cout<<endl;
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