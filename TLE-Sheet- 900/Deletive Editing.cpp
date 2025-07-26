#include <bits/stdc++.h>
#define int long long int

using namespace std;

void solve() {
    string s,t;
    cin>>s>>t;

    if(s==t){
        cout<<"Yes"<<endl;
        return;
    }

    int n1=s.size(),n2=t.size();
    
    string temp="";
    vector<char>f(26,0);
    for(auto &i:t)f[i-'A']++;

    for(int i=n1-1;i>=0;i--){

        if(f[s[i]-'A']>0){ 
            temp+=s[i];
            f[s[i]-'A']--;
        }
    }
    reverse(begin(temp),end(temp));
    if(t==temp){
        cout<<"Yes"<<endl;
    }
    else cout<<"NO"<<endl;
    


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