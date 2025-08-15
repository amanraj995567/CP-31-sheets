#include <bits/stdc++.h>
#define int long long int

using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &i : a)
        cin >> i;

    if (n <= 3)
    {
        cout << -1 << endl;
        return;
    }

    int mini=1,maxi=n;
    int i=0,j=n-1;
    int found =0;
    while(i<j){
        if( (a[i]==mini && a[j]==maxi) || (a[i]==maxi && a[j]==mini) ){
             mini++;maxi--;
             i++;j--;
        }
        
        else if(a[j]==maxi){
            j--;
            maxi--;
        }
        else if(a[j]==mini){
            j--;
            mini++;
        }
        else if(a[i]==maxi){
            i++;
            maxi--;
        }
        else if(a[i]==mini){
            i++;
            mini++;
        }
        else{
            found=1;
            break;
        }
    }

    if(found==1){
         cout<<i+1<<" "<<j+1<<endl;
    }
     else  cout << -1 << endl;
}

int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}