
#include <bits/stdc++.h>
#define int long long int

using namespace std;

void solve() {
     string s;
     cin>>s;

     unordered_map<char,int>mp;
     for(auto &i:s)mp[i]++;

     if(mp.size()==1){
        cout<<"NET"<<endl;
        return;
     }

     int zero = mp['0'];
     int one = mp['1'];

     if(zero==one){
         if(zero%2!=0 && one%2!=0){
            cout<<"DA"<<endl;        // alice win
         }
         else cout<<"NET"<<endl;     // bob win

         return;
     }

     else{

            int mini = min(zero,one);
            if(mini%2==0)cout<<"NET"<<endl;
            else cout<<"DA"<<endl;

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