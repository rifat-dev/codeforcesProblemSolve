#include<bits/stdc++.h>
using namespace std;
int arr[100001][2];

void solve()
{

    int n;
    cin >> n;

    vector<int> arrA(n);


    for(int i=0; i<n; i++)
    {
        cin >> arrA[i];
        ++arr[arrA[i]][i%2];
    }

    sort(arrA.begin(), arrA.end());

    int flag = 0;
    for(int i=0; i<n; i++)
        --arr[arrA[i]][i%2];

    for(int i=0; i<n; i++)
    {
        if(arr[arrA[i]][0] != 0 || arr[arrA[i]][1] != 0)
        {
            flag = 1;
            break;
        }
    }



    if(flag)
        cout << "NO" << endl;

    else
        cout << "YES" << endl;


    arrA.clear();
    for(int i=0; i<n; i++)
        arr[arrA[i]][0]= 0, arr[arrA[i]][1] = 0;



}


int main()
{
    int t;
    cin >> t;

    while(t--)
        solve();
}
