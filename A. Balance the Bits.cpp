#include<bits/stdc++.h>

using namespace std;

void saive()
{

    char open = '(';
    char close = ')';

    int n;
    cin >> n;

    string s;
    cin >> s;

    int one = 0;
    int zero = 0;

    vector<char>a;
    vector<char>b;

    for(int i=0; i<n; i++)
    {
        if(s[i]=='1')
            one++;

        else
            zero++;

    }



    if(one%2 !=0 || zero%2 !=0)
        cout << "NO" << endl;

    else if(s[0]=='0' || s[n-1] =='0' )
        cout << "NO" << endl;

    else
    {


        int half_one = one/2;
        for(int i=0; i<n; i++)
        {
            if(s[i]=='1')
            {
                if(one>half_one)
                {
                    a.push_back(open);
                    b.push_back(open);
                    one--;
                }
                else
                {
                    a.push_back(close);
                    b.push_back(close);
                    one--;
                }
            }
            else
            {
                if(zero%2!=0)
                {
                    a.push_back(open);
                    b.push_back(close);
                    zero--;
                }
                else
                {
                    a.push_back(close);
                    b.push_back(open);
                    zero--;
                }

            }
        }


        cout << "YES" << endl;
        for(int i=0; i<n; i++){
            cout << a[i];
        }
        cout << endl;
        for(int i=0; i<n; i++){
            cout << b[i];
        }
        cout << endl;
    }




}

int main()
{

    int t;
    cin >> t;

    while(t--)
        saive();

}
