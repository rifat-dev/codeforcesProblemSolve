
#include<bits/stdc++.h>
using namespace std;

void solve()
{

    int n;

    cin >> n;

    vector<int> arr(n);
    for(int i=0; i<n; i++)
        cin >> arr[i];

    vector<vector<int>> ans;

    for(int i=n-1; i>=0; i--)
    {
        int maximum = arr[i];
        int index = i;

        for(int j=i-1; j>=0; j--)
        {
            if(arr[j]> maximum)
            {
                maximum = arr[j];
                index = j;
            }
        }



        for(int k=index+1; k<=i; k++)
            arr[k-1] = arr[k];
        arr[i] = maximum;

        if(i != index)
            ans.push_back({index, i, 1});

    }

//    for(int i=0; i<n; i++) cout << arr[i] << " ";

    cout << ans.size() << endl;
    for(auto v : ans)
        cout << v[0]+1 << " " << v[1]+1 << " " << v[2] << endl;




}

int main()
{

    int t;
    cin >> t;

    while(t--)
        solve();
}

