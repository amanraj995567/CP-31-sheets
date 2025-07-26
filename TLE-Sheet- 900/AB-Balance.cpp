#include <bits/stdc++.h>
#define int long long int
using namespace std;

void solve() {
    string s;
    cin>>s;
    int n=s.size();
    if(s[0]==s[n-1]){
        cout<<s<<endl;
    }
    else{
        s[n-1]=s[0];
        cout<<s<<endl;
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