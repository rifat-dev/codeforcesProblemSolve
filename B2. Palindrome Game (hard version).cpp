#include<bits/stdc++.h>
using namespace std;




void saive()
{

    int n;
    cin >>n;

    string s;
    cin >> s;

    string revs = s;

    reverse(revs.begin(), revs.end());

    if(revs == s)
    {
        int zero = 0;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='0')
                zero++;
        }

        if(zero==1)
            cout << "BOB" << '\n';

        else if(zero%2 == 0)
            cout << "BOB" << '\n';

        else
            cout << "ALICE" << '\n';
    }
    else
    {
        int zero = 0;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='0')
                zero++;
        }

        if(zero==2 && n%2 != 0 && s[n/2]=='0')
            cout << "DRAW" << '\n';
        else
            cout << "ALICE" << '\n';
    }


}

int main()
{

    int t;
    cin >> t;

    while(t--)
        saive();

}
