#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void saive()
{

    int n;
    cin >>n;

    vector<ll> arr(n);

    for(int i=0; i<n; i++)
        cin >> arr[i];

    sort(arr.begin(), arr.end());

    ll l = 0;
    ll r = n-1;

    while(arr[0] != arr[n-1])
    {
        for(int i=0; i<=r-l; i++){
             arr[l+i] = arr[l+i]& arr[r-i];
            sort(arr.begin(), arr.end());
        }

    }

    cout << arr[0] << endl;



}

int main()
{

    int t;
    cin >> t;
    while(t--)
        saive();


}
