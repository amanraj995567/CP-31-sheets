#include <bits/stdc++.h>
#define int long long int

using namespace std;

void solve() {
    int n;
    cin>>n;
    // bus type 4 wheel , 6 wheel
    if(n%2!=0||n<4)cout<<-1<<endl;
    else{
      int maxi = n/4;
      int mini = ceil(n/6.0);
      cout<<mini<<" "<<maxi<<endl;
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