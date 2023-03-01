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
        int n;
        cin >> n;
        vector<int> arr;
        while(n--)
        {
            vector<int> sub;
            int input_value;
            for(int i=1; i<n; i++)
            {
                cin >> input_value;
                sub.push_back(input_value);
            }
            arr.push_back(sub);
            sub.clear();
        }


    }
}
