#include <bits/stdc++.h>
#define int long long int
using namespace std;



void solve() {
     int n;
     cin>>n;
     vector<int>a(n);
     int curr_sum=0;
     set<int>s;
     for(auto &i:a){
          cin>>i;
          s.insert(i);
     }
     
     if(a[0]==a[n-1]){
        cout<<"No"<<endl;
     }
     else{
          cout<<"Yes"<<endl;
         cout<<a[n-1]<<" "<<a[0]<<" ";
         for(int i=1;i<n-1;i++)cout<<a[i]<<" "; 
         cout<<endl; 
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