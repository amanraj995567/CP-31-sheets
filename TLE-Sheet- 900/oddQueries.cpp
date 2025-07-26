
#include <bits/stdc++.h>
#define int long long int

using namespace std;
void solve(){
     int n,q;
     cin>>n>>q;

     int t_sum=0;
     vector<int>a(n),pSum(n+1,0);
     for(int i=0;i<n;i++){
         cin>>a[i];
         t_sum+=a[i];
         pSum[i+1] = a[i]+pSum[i];
         
     }
     
     
     
     while(q--){

        int l,r,k;
        cin>>l>>r>>k;
       
        int sumToadd = (r-l+1)*k;
        
        
        int sumToRemove = pSum[r]-pSum[l-1];
    
        int ans = sumToadd + (t_sum-sumToRemove);

        if(ans%2==1){
            cout<<"Yes"<<endl;
            continue;
        } 
        else cout<<"No"<<endl;  
                 
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