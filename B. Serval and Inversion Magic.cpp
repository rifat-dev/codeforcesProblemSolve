#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    bool flag = false;
    bool odd = false;
    for(int i=0; i<n/2; i++)
    {
        if(s[i] != s[n-i-1])
        {
            odd = true;
            if(flag)
            {
                cout << "NO" << endl;
                return;
            }
        }
        else
        {
            if(odd)
            {
                flag = true;
            }
        }

    }
    cout << "YES" << endl;
}
int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        solve();

    }
}
