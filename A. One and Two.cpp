#include<bits/stdc++.h>
using namespace std;


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;
        int arr[3] = {0,0,0};
        vector<int> res(n,0);

        for(int i=0; i<n; i++)
        {

            cin  >> res[i];
            arr[res[i]]++;
        }

        if(arr[2] % 2 != 0)
        {
            cout << -1 << endl;
        }
        else if(arr[1] == n)
        {
            cout << 1 << endl;
        }
        else
        {
            int cnt = arr[2]/2;
            for(int i=0; i<n; i++)
            {
                if(res[i] == 2)
                {
                    cnt--;
                    if(cnt == 0)
                    {
                        cout << i+1 << endl;
                        break;
                    }
                }
            }
        }
    }
}
