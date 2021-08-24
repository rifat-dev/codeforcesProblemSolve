#include<bits/stdc++.h>
using namespace std;

typedef long long ll;


void solve()
{

    int n;
    cin >> n;

    vector<int> arr(n);

    for(int i=0; i<n; i++)
        cin >> arr[i];

    sort(arr.begin(), arr.end());


    double a=0, b=0;

    for(int i=0; i<n-1; i++)
        a += arr[i];

    b = arr[n-1];

    int k = n-1;
    a = a/k;

    cout << setprecision (15) << a+b << endl;

}


int main()
{

    int t;
    cin >> t;

    while(t--)
        solve();


}
