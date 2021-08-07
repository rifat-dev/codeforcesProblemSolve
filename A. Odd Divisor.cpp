#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{

    ll t;
    cin >>t;

    for(ll i=0; i<t; i++)
    {
        ll n;
        cin >> n;

        int flag = 0;
        while(n>1){
            if(n%2 !=0){
                flag=1;
                break;
            }
            n = n/2;
        }

        if(flag){
            cout << "YES" << '\n';
        }else{
            cout << "NO" << '\n';
        }

    }

}
