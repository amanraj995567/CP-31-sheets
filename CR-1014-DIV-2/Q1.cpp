
#include <bits/stdc++.h>

using namespace std;
void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;

    int ans =0;
    for(int i=0;i<n;i++){
        int len =0;
        char c = s[i];
        while(i<n && s[i]==c){
            len++;
            i++;
        }
        i--;
        ans = max(ans,len);
    }

    cout<<ans+1<<endl;
    

}


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    
    while (t--) {
        solve();
    }

    return 0;
}