
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);


    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        int x=100000;
        for(int i=0; i<n; i++)
        {
            for(int j=i+1; j<n; j++)x=min(x,__gcd(arr[i], arr[j]));
        }
        if(x>2)cout<<"no"<<endl;
        else cout<<"yes"<<endl;
    }
    return 0;

}


