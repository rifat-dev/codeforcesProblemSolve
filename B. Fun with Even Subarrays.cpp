#include<bits/stdc++.h>
using namespace std;


int main()
{

    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >>n;

        vector<int> arr(n+1);

        for(int i=1; i<=n; i++)
            cin >> arr[i];

        vector<int> b = arr;
        reverse(b.begin()+1,b.end());

        int ans = 0, x = 1;

        while( x < n )
        {
            if( b[x+1] == b[1] )
            {
                x++;
                continue;
            }
            ans++;
            x *= 2;
        }

        cout << ans << '\n';

    }

}
