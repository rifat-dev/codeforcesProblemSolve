#include<bits/stdc++.h>
using namespace std;

void solve()
{

    long long n;

    cin >> n;

    if(n%2==0)
    {
        for(int i=0; i<n/2; i++)
            cout << 1;

        cout << endl;
    }
    else
    {

        int k = (n-3) / 2;
        cout << 7;
        for(int i=0; i< k; i++)
            cout << 1;
        cout << endl;

    }


}


int main()
{

    int t;
    cin >> t;

    while(t--)
        solve();


}
