#include <bits/stdc++.h>
#define int long long int

using namespace std;

void solve() {
    int n;
    cin>>n;
    vector<int>a(n);
    for(auto &i:a)cin>>i;

    vector<int>Psum(n+1,0);
    for(int i=0;i<n;i++){
         Psum[i+1] = Psum[i]+a[i];
    }
    
    int ans=INT_MIN;

    for(int k=1;k<=n;k++){
        for(int k=1; k<=n; k++){
            if(n % k == 0){
                int mini = LLONG_MAX;
                int maxi = LLONG_MIN;
                for(int j = k; j <= n; j += k){
                    int sum = Psum[j] - Psum[j - k];
                    maxi = max(maxi, sum);
                    mini = min(mini, sum);
                }
                ans = max(ans, abs(maxi - mini));
            }
        }
        
    }

    cout<<ans<<endl;
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