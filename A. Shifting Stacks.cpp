#include<bits/stdc++.h>
using namespace std;

#define ll long long


void saive()
{

    int n;
    cin >> n;

    vector<ll> arr;
    for(int i=0; i<n; i++)
    {
        int a;
        cin >> a;
        arr.push_back(a);
    }


    int flag = 0;
    ll sum = 0;
    sum = 0;
    for(int i=0; i<=n-1; i++)
    {
       sum = sum+arr[i];
       if(sum>=i){
         sum -= i;
       }else{
           flag = 1;
           break;
       }
    }

    if(flag){
        cout << "NO" << endl;
    }else{
        cout << "YES" << endl;
    }




}


int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--)
        saive();

}
