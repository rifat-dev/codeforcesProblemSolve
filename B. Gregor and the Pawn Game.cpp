#include<bits/stdc++.h>
using namespace std;

void solve()
{

    int n;
    cin >> n;

    string strE, strG;
    cin >> strE;
    cin >> strG;


    int ans = 0;

    if(strG[0] == '1')
    {
        if(strE[0]=='0')
            ans++;
        else if(strE[1] == '1')
        {
            strE[1] = '0';
            ans++;
        }
    }

    if(strG[n-1]=='1')
    {
        if(strE[n-1]=='0')
            ans++;
        else if(strE[n-2]=='1')
        {
            strE[n-2] = '0';
            ans++;
        }
    }

    for(int i=1; i<n-1; i++)
    {
        if(strG[i]=='1')
        {
            if(strE[i]=='0')
                ans++;

            else if(strE[i-1] == '1')
            {
                ans++;
                strE[i-1] = '0';
            }
            else if(strE[i+1]=='1')
            {
                ans++;
                strE[i+1] = '0';
            }
        }
    }



    cout << ans << endl;


}

int main()
{

    int t;
    cin >> t;

    while(t--)
        solve();


}
