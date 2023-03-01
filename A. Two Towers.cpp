#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while(t--)
    {
        int n,m;
        string s,t;
        cin >> n >> m;
        cin >> s >> t;

        int cnt = 0;
        for(int i=t.size()-1; i>=0; i--)
        {
            s += t[i];
        }

        for(int i=0; i<s.size()-1; i++)
        {
            if(s[i] == s[i+1])
            {
                cnt++;
            }
        }


        if(cnt >= 2)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }

}
