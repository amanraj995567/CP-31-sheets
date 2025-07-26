#include <bits/stdc++.h>
#define int long long int

using namespace std;

void solve() {
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int opr = 0;
    if(b>d){
        cout<<-1<<endl;
        return;
    }
    else{
       opr+=(d-b);
       a+=opr;
       if(c>a){
          cout<<-1<<endl;
          return;
       }
       else opr+=(a-c);
    }

    cout<<opr<<endl;
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