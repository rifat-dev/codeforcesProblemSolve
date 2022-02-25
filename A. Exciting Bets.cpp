
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{

    int t;
    cin >> t;

    while(t--)
    {
        ll a,b;
        cin >> a >> b;

        if(a==b)
            cout << 0 << " " << 0 << endl;
        else
        {
            ll k = abs(a-b);
            cout << k << " " << min(a%k,k-a%k) << endl;
        }
    }


}
