#include<bits/stdc++.h>
using namespace std;


int main()
{

    int t;
    cin >> t;

    while(t--)
    {
        string s;
        cin >> s;

        if(s.length()%2 != 0)
            cout << "NO" << endl;

        else
        {

            int l = s.length()/2;
            int flag = 0;
            for(int i=0; i<l; i++)
            {

                if(s[i] != s[l+i])
                {
                    flag = 1;
                    break;
                }
            }

            cout << (flag ? "NO" : "YES") << endl;

        }
    }

}
