#include <bits/stdc++.h>
#define int long long int

using namespace std;

void solve() {
     int n;
     cin>>n;

     int cnt2=0,cnt3=0;
     while(n%2==0){
         n=n/2;
         cnt2++;
     }

     
     while(n%3==0){
         n=n/3;
         cnt3++;
     }
     
     if(n!=1){
        cout<<-1<<endl;
        return;
     }

     if(cnt2<=cnt3){
         cout<<(cnt3-cnt2)+cnt3<<endl;
     }
     else cout<<-1<<endl;


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