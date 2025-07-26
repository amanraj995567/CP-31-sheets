#include <bits/stdc++.h>
#define int long long int

using namespace std;

void solve() {
     int n;
     cin>>n;
     string s;
     cin>>s;
     int i=0,j=n-1;
    
   
    while((i<j) && (s[i]=='0'&&s[j]=='1')||(s[i]=='1'&&s[j]=='0') ){
         i++;j--;
    }

    if(i<=j){
        cout<<(j-i+1)<<endl;
    }
    else cout<<0<<endl;           
     
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
