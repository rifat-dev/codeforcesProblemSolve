#include<bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while(t--)
    {
        long long a,b,c,m;
        cin >> a >> b >> c >> m;

        int arr[3] = {a,b,c};
        sort(arr, arr+3);
        if(m > (a+b+c-3))
        {
            cout << "NO" << endl;
        }
        else
        {
          int p = arr[2] - (arr[1]+arr[0]+1);
          if(m >= p && m<= (a+b+c-3)) cout << "YES" << endl;
          else cout << "NO" << endl;
        }
    }

}
