#include <bits/stdc++.h>
#define int long long int
using namespace std;

int getMin(string target,string s){
    
    int operation=0;
    int idx = target.size()-1;

    for(int i=s.size()-1;i>=0;i--){
          if(s[i]==target[idx]){
               idx--;

               if(idx<0)break;
          }
          else operation++;
    }

    if(idx>0){
        operation=INT_MAX;
    }
    return operation;

}

int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--) {
        string n;
        cin>>n;
        int ans = INT_MAX;
        vector<string>target={"00","25","50","75"};
        for(auto &i:target){
            ans= min(ans,getMin(i,n));
        }
        cout<<ans<<endl;
    }
    

    return 0;
}