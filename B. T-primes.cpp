#include<bits/stdc++.h>
using namespace std;
#define n 1000100

bool a[n];

void saive()
{

    long long int i, j;
    a[0]=a[1]=1;

    for(i=4; i<n ; i+=2)
        a[i] = 1;

    for(i=3; i<=sqrt(n); i+=2)
    {
        for(j=i*i; j<n; j=j+2*i)
            a[j]=1;
    }

}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long r,s,c;
    int m;
    cin >> m;
    saive();
    vector<long long int> arr;

    for(int i=0; i<m; i++)
    {
        cin >> c;
        arr.push_back(c);
    }


    for(int i=0; i<m; i++)
    {

        s = sqrt(arr[i]);

        if(s*s == arr[i])
        {
            if(a[s]==0)
                cout << "YES" << '\n';

            else
                cout << "NO" << '\n';
        }
        else
            cout << "NO" << '\n';


    }

}
