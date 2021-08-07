#include<bits/stdc++.h>
using namespace std;

void match(string str, string pat, int n)
{

    string s = pat;

    for(int i=0; i<n-1 ; i++)
        s = s+pat;

    if(str == s)
        cout << s << '\n';

    else
        cout << -1 << '\n';

}

void saive()
{

    string s,t;
    cin >> s >> t;

    int  ls = s.size();
    int lt = t.size();

    if(ls>lt)
    {
        if(ls%lt == 0)
            match(s,t,ls/lt);
        else
        {
            string str = s;
            int n = ls;
            while(ls%lt != 0)
            {
                str = str+s;
                ls = ls+n;

            }
            match(str,t,ls/lt);

        }
    }else{
        if(lt%ls == 0)
            match(t,s,lt/ls);
        else
        {
            string str = t;
            int n = lt;
            while(lt%ls != 0)
            {
                str = str+t;
                lt = lt+n;

            }
            match(str,s,lt/ls);
        }
    }

}


int main()
{

    int t;
    cin >> t;

    while(t--)
        saive();


}
