#include <bits/stdc++.h>
#define int long long int

using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);

    map<int, int> mp;
    for (auto &i : a)
    {
        cin >> i;
        mp[i]++;
    }
    sort(begin(a),end(a));

    if(mp.size()==1){
        cout<<n<<endl;
        return;
    }

    int grp = 0;
    for (int i = 0; i < n; i++)
    {
        if (mp[a[i]] > 0)
        {
            mp[a[i]]--;

            int num = a[i] + 1;

            if (mp.count(num) > 0)
            {
                while (mp[num] > 0)
                {
                    mp[num]--;
                    if (mp.count(num) == 0)
                        mp.erase(num);
                    num++;
                }
                grp++;

                
            }
            else grp++;
            
        }
        //else continue;
    }
    cout << grp << endl;
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