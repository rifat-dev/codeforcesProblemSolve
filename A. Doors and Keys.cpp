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

        int flag = 0;
        int kr = 0;
        int kg = 0;
        int kb = 0;
        for(int i=0; i<s.size(); ++i)
        {
            if(s[i] == 'R')
            {
                if(kr == 0)
                {
                    flag = 1;
                    break;
                }
            }
            else if(s[i] == 'B')
            {
                if(kb == 0)
                {
                    flag = 1;
                    break;
                }
            }
            else if(s[i] == 'G')
            {
                if(kg == 0)
                {
                    flag = 1;
                    break;
                }
            }
            else if(s[i] == 'r')
            {
                kr = 1;
            }
            else if(s[i] == 'b')
            {
                kb = 1;
            }
            else if(s[i] == 'g')
            {
                kg = 1;

            }
        }

        cout << (flag ? "No" : "Yes") << endl;
    }

}
