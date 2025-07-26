#include <bits/stdc++.h>
#define int long long int

using namespace std;

void solve() {
     string s;
     cin>>s;
     bool flag = false;
     int fac=0;
     for(int i=0;i<s.size();i++){
          if(s[i]=='(')fac++;
          else fac--;

          if(i>0 && i<s.size()-1 && fac==0)flag=true;
     }
     if(flag){
        cout<<"Yes"<<endl;
     }
     else{
        cout<<"No"<<endl;
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