#include <iostream>
#include <stdint.h>
typedef unsigned long long int ll;
using namespace std;

void saive()
{
    ll n,m,x;
    cin >> n >> m >> x;
    ll num[n][m];
    int64_t value = 1;


        for(ll i = 0; i<n ; i++)
        {
            for(ll j = 0; j<m; j++)
            {
                num[i][j] = value;
                value++;
            }
        }

        ll counte = 0;
        for(ll i = 0; i<m ; i++)
        {
            for(ll j = 0; j<n; j++)
            {
                counte++;
                if(counte == x)
                {
                    cout << num[j][i] <<endl;
                    break;
                }

            }
        }



}


int main()
{
    int t;
    cin >>t;

    for(int k = 0; k < t ; k++)
        saive();


    return 0;
}
