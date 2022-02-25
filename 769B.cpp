
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin  >> t;

    while(t--)
    {
        int n;
        cin >> n;
        n--;

        if(n%2 == 0)
        {
            for(int i=n-1; i>=0; i--)
                cout << i << " ";
            cout << n << endl;
        }
        else
        {
            for(int i=n-2; i>=0; i--)
                cout << i << " ";
            cout << n-1 << " " << n << endl;
        }

    }
}
