#include <bits/stdc++.h>
#define int long long int

using namespace std;

void solve() {
    int n,k,x;
    cin>>n>>k>>x;
    
    if((x==1&&k==1) || (x==1 && n%2!=0 && k==2)){
        cout<<"No"<<endl;
        return;
    }

    if(x!=1){
       cout<<"Yes"<<endl;
       cout<<n<<endl;
       for(int i=1;i<=n;i++){
        cout<<1<<" ";
       }
       cout<<endl;
    }

    else{

         if(n%2==0){
            cout<<"Yes"<<endl;
            cout<<n/2<<endl;
            for(int i=1;i<=(n/2);i++){
                cout<<2<<" ";
            }
            cout<<endl;
         }

         else{
             if(k>=3){
                cout<<"Yes"<<endl;
                cout<<n/2<<endl;
            for(int i=1;i<=(n/2-1);i++){
                cout<<2<<" ";
            }
            cout<<3;
            cout<<endl;
             }
             else{
                cout<<"No"<<endl;
             }
         }
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