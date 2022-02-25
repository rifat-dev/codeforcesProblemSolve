#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{

    ll t;
    cin >> t;

    while(t--)
    {
        ll n, x, y;
        cin >> n >> x >> y;
        vector<ll> arr(n);
        for(int i=0; i<n; i++)
        {
            cin >> arr[i];
        }

        int sum = 0;

        for(int i=0; i<n; i++)
        {
            sum += arr[i];
        }

        if(y&1)
        {
            if((x&1) != 0 && (sum&1) == 0)
            {
                cout << "Alice" << endl;
            }
            else if((x&1) == 0 && (sum&1) != 0)
            {
                cout << "Alice" << endl;
            }
            else
            {
                cout << "Bob" << endl;
            }
        }
        else
        {
            if((x&1) != 0 && (sum&1) != 0)
            {
                cout << "Alice" << endl;
            }
            else if((x&1) == 0 && (sum&1) == 0)
            {
                cout << "Alice" << endl;
            }
            else
            {
                cout << "Bob" << endl;
            }
        }

    }

}
