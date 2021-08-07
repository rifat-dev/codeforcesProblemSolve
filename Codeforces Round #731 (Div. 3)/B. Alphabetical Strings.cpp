#include<bits/stdc++.h>
using namespace std;

void saive()
{

    string s;
    cin >> s;

    int value=0;
    int a;

    for(int i=0; i<s.size(); i++)
    {
        if(s[i] == 'a')
        {
            value = s[i];
            a = i;
        }
    }


    if(value == 97)
    {

        int l = (a==0 ? 0 : a-1);
        int r = (a==s.size()-1 ? s.size()-1 : a+1);


        int flag = 0;
        for(int i=0; i<s.size()-1; i++)
        {


            ++value;
            if(s[l] == value)
            {
                if(l != 0)
                    l--;
            }
            else if(s[r] == value)
            {
                if(r < s.size())
                    r++;
            }
            else
            {
                flag=1;
                break;
            }
        }

        if(flag)
            cout << "NO" << '\n';

        else
            cout << "YES" << '\n';
    }
    else
        cout << "NO" << '\n';

}


int main()
{

    int  t;
    cin >> t;

    while(t--)
        saive();

}
