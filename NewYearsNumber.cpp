#include<iostream>
typedef long long ll;
using namespace std;

int main()
{
    ll t;
    cin >> t;

    for(int i = 0; i<t; i++)
    {
        ll n;
        cin >> n;
        int need2021 = n % 2020;
        int need2020 = (n-need2021)/2020 - need2021;
        if(need2020 >= 0 && 2020*need2020 + 2021*need2021 == n){
            cout << "YES" <<endl;
        }else{
             cout << "NO" <<endl;
        }
    }

    return 0;
}
