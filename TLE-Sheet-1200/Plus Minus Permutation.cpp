#include <bits/stdc++.h>
#define int long long int

using namespace std;

int sumNth(int n){
    return n*(n+1)/2;
}

void solve() {
    int n, x, y;
    cin >> n >> x >> y;

    int pdiv_x = n / x;
    int pdiv_y = n / y;
    int lcm_xy = (x * y) / __gcd(x, y);
    int commonP = n / lcm_xy;

    int a = pdiv_x - commonP; // numbers divisible by x only
    int b = pdiv_y - commonP; // numbers divisible by y only

    // sum of a largest numbers from 1 to n
    int a_sum = sumNth(n) - sumNth(n - a);
    
    // sum of b smallest numbers from 1 to n
    int b_sum = sumNth(b);

    cout << a_sum - b_sum << endl;
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
