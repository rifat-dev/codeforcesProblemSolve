#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int test_case;
    cin >> test_case;
    while(test_case--)
    {
        int n,s,r;
        cin >> n >> s >> r;
        int value = r;
        int arr[n+1];

        for(int i=1; i<=n; i++)
        {
            arr[i] = 0;
        }

        int i=1;
        while(r > 0)
        {
            arr[i]++;
            i++;
            r--;
            if(i == n)
            {
                i=1;
            }
        }
        arr[n] = s-value;
        for(int i=1; i<=n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
        for(int i=1; i<=n; i++)
        {
            arr[i] = 0;
        }
    }
}
