#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;
    int i = 0;

    while(i<s.size())
    {
        if(s[i] == 'W')
        {
            if(s[i+1] == 'U' && s[i+2] == 'B')
            {
                i = i+3;
                continue;
            }
            else
            {
                int j = i;
                while(j<s.size())
                {
                    if(s[j]=='W' && s[j+1] == 'U' && s[j+2] == 'B')
                    {
                        j = j+3;
                        break;
                    }
                    else
                    {
                        cout<< s[j];
                        j++;
                    }
                }
                cout<< " ";
                i = j;
            }

        }
        else
        {
            int j = i;
            while(j < s.size())
            {
                if(s[j]=='W' && s[j+1] == 'U' && s[j+2] == 'B')
                {
                    j = j+3;
                    break;
                }
                else
                {
                    cout<< s[j];
                    j++;
                }
            }
            cout<< " ";

            i = j;

        }
    }





    return 0;
}
