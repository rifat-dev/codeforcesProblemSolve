#include<bits/stdc++.h>
using namespace std;

void solve()
{

    int x,y;
    cin >> x >> y;

    int n = abs(x-y)*2;

    cout << n << endl;
    for(int i=y; i<=x; i++)
    {
        cout << i << " ";
    }
    for(int i=x-1; i>=y+1; i--)
    {
        cout << i << " ";
    }
    cout << endl;

}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while(t--)
    {
        solve();
    }
}
