#include<bits/stdc++.h>
using namespace std;

#define ll long long

#define n 1000100

int arr[n];

void prime()
{
    int i,j;

    arr[0] = arr[1] = 1;

    for(i=4; i<n; i+=2)
        arr[i]=1;

    for(i=3; i*i <= n; i+=2)
    {
        for(j=i*i; j<n; j=j+2*i)
            arr[j] = 1;
    }

}

void saive()
{
    int d;
    cin >> d;

    int p, q;

    for(int i = d+1; i<n; i++)
    {
        if(arr[i]==0)
        {
            p = i;
            break;
        }
    }

    for(int i = p+d; i<n; i++)
    {
        if(arr[i]==0)
        {
            q = i;
            break;
        }
    }
    cout << p*q << '\n';

}


int main()
{

    prime();
    int t;
    cin >> t;

    while(t--)
        saive();

}
