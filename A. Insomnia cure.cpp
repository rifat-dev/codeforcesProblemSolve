#include <bits/stdc++.h>

using namespace std;

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int k,l,m,n,d;

    cin >> k >> l >> m >> n >> d;

    int arr[100100];
    int total = 0;

    for(int i=1; i<=d; i++)
    {
        if(i%k ==0)
            total++;
        else if(i%l ==0 )
            total++;
        else if(i%m == 0)
            total++;
        else if(i%n == 0)
            total++;
    }

    cout <<total;

}
