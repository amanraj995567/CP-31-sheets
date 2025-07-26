#include <bits/stdc++.h>
using namespace std;

bool isItFair(long long n){
    long long x=n;
    while(x){
        int a = x % 10;
        if (a != 0 && n % a != 0) return false;
        x /= 10;
    }
    return true;
}

void solve() {
    long long n;
    cin >> n;
    while (!isItFair(n)) {
        n++;
    }
    cout << n << '\n';
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
