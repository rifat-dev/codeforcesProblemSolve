#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void f(vector<int>&arr, int i)
{
    if(arr[i]>arr[i+1])
        swap(arr[i],arr[i+1]);

}


void solve()
{
    int n;
    cin >> n;



    vector<int> arr(n+1);
    arr[0] = -1;
    for(int i=1; i<=n; i++)
        cin >> arr[i];

    vector<int> c = arr;
    sort(c.begin(), c.end());

    int ans = 0;
    int a = 0;

    for(int i=1; c!=arr; i++)
    {
        for(int i=1; i<n; i++)
        {

            if(arr[i] > arr[i+1] )
                break;

        }

        ans++;
        if(i%2 == 0)
        {
            for(int j = 2; j<=n-1; j = j+2)
            {
                if(arr[j]>arr[j+1])
                    swap(arr[j],arr[j+1]);
            }


        }
        else
        {
            for(int j=1; j<=n-2; j+=2)
            {
                if(arr[j]>arr[j+1])
                    swap(arr[j],arr[j+1]);
            }

        }

    }

    cout << ans << endl;
}


int main()
{

    int t;
    cin >> t;

    while(t--)
        solve();

}
