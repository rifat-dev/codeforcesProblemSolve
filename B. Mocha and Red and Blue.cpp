#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    int st = 0;
    char setValue;

    for(int i=0; i<n; i++)
    {
        if(s[i]== 'B' || s[i]=='R')
        {
            st = i;
            setValue = s[i];
            break;
        }
    }

    if(st)
    {
        for(int i= st-1; i>=0; i--)
        {

            if(setValue=='B')
            {
                s[i] = 'R';
                setValue = 'R';
            }
            else
            {
                s[i] = 'B';
                setValue = 'B';
            }
        }
    }



    for(int i=0; i<n; i++)
    {
        if(s[i] == '?')
        {
            if(s[i-1]=='B')
            {
                s[i] = 'R';
            }
            else
            {
                s[i] = 'B';
            }
        }
    }

    cout << s << endl;

}


int main()
{
    int t;
    cin >> t;

    while(t--)
        solve();

}
