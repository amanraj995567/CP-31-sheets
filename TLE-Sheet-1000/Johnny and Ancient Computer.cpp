#include <bits/stdc++.h>
#define int long long int
using namespace std;

void solve() {
     int a,b;
     cin>>a>>b;
     int ans=0;
     if(a==b){
        cout<<"0"<<endl;
        return;
     }else{
          if(a<b)swap(a,b);
          ans=0;

          while(a>b){
              if(a/8 >= b && a%8==0){
                  ans++;
                  a=a/8;
              }
              else if(a/4 >= b && a%4==0){
                  ans++;
                  a=a/4;
              }
             else  if(a/2 >= b && a%2==0){
                  ans++;
                  a=a/2;
              }else break;
          }
     }

     if(a==b){
        cout<<ans<<endl;
     }else cout<<"-1"<<endl;
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