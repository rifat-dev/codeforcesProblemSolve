#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll a;
ll b;
ll n;


int main()
{

    int t;
    cin >> t;

    while(t--)
    {
        cin >> n >> a >> b;

        if(a==1)
        {
            if((n-1)%b == 0)
                cout << "YES" << endl;

            else
                cout << "NO" << endl;
        }
        else
        {

            ll num = 1;
            int flag = 0;
            while(num<=n)
            {
                if(num%b == n%b)
                {

                    flag = 1;
                    break;
                }

                num = num*a;
            }

            if(flag)
                cout << "YES" << endl;

            else
                cout << "NO" << endl;

        }



    }


}
