#include<bits/stdc++.h>
using namespace std;
#define fr(i,a,n) (i=a; i<n; i++)

typedef long long ll;


void saive()
{

    ll n;
    cin >> n;

    vector<ll> arr(n);
    vector<int>::iterator it;

    for(int i=0; i<n; i++)
        cin >> arr[i];

    sort(arr.begin(), arr.end());


    cout << ( arr.front() == arr.back() ? n : 1) << endl;

}

int main()
{

    int t;
    cin >> t;

    while(t--)
        saive();


}
