
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test_case;
    cin >> test_case;

    while(test_case--)
    {
        int n;
        cin >> n;
        int odd = 0,even = 0;
        vector<int> arr(n,0);
        for(int i=0; i<n; i++)
        {
            cin >> arr[i];
            if(arr[i] % 2 == 0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }

        if(odd >= 3)
        {
            cout << "YES" << endl;
            odd = 3;
            for(int i=0; i<n; i++)
            {
                if(arr[i] % 2 != 0 && odd != 0)
                {
                    cout << i+1 << " ";
                    odd--;
                }
            }

            cout << endl;
        }
        else if(odd >= 1 && even >= 2)
        {
            int a = 1;
            int b = 2;
            cout << "YES" << endl;
            for(int i=0; i<n; i++)
            {
                if(arr[i] % 2 != 0 && a != 0)
                {
                    cout << i+1 << " ";
                    a--;
                }
                else if(arr[i] % 2 == 0 && b != 0)
                {
                    cout << i+1 << " ";
                    b--;
                }
            }
            cout << endl;
        }
        else
        {
            cout << "NO" << endl;
        }

        arr.clear();


    }
}
