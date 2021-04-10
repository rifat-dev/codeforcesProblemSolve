#include<iostream>
//#define long long ll;
typedef long long ll;

int main()
{
    int t;
    cin>>t;

    for(int i = 0; i<t; i++)
    {
        ll n;
        if(2020 + 2020 >= n)
        {
            while(n>0)
            {
                if(n == 2020+2020)
                    cout << "YES" << endl;
                break;

                else if(n == 2020+2021)
                    cout << "YES" << endl;
                else if(n== 2021 + 2021)
                    cout << "YES" << endl;

                else
                {
                    if(n/2 == 0)
                        n = n - 2021;

                    else
                        n = n - 2020;
                }
            }
            if(n<0)
                cout << "NO" << endl;
        }
        else
            cout << "NO" << endl;
    }

    return 0;
}
