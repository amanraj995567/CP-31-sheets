#include <bits/stdc++.h>
#define int long long int
using namespace std;

void solve() {
    int x, n;
    cin >> x >> n;
     
    int jump = n%4;
    int total_jump = (n/4)*4;
    total_jump++;

    for(int i=1;i<=jump;i++){
        if(x%2==0){
            x=x-total_jump;
        }
        else x=x+total_jump;

        total_jump++;
    }

    cout<<x<<endl;
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
