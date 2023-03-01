#include<bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        vector<int> arr(n+1);

        for(int i=1; i<=n; ++i) cin >> arr[i];


        for(int i=1; i<=n; ++i)
        {
            if(arr[i] != i)
            {
                int l = 0;
                for(int j=i; j<=n; ++j){
                    if(arr[j] == i){
                        l = j;
                        break;
                    }
                }

                reverse(arr.begin()+i, arr.begin()+l+1);
                break;
            }
        }

        for(int i=1; i<=n; ++i)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
}
