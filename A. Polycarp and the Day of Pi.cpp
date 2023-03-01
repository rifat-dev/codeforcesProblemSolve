#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    string str  = "314159265358979323846264338327";
    int test_case;
    cin >> test_case;
    while(test_case--)
    {
        bool flag = true;
        string str_input = "";
        int cnt = 0;
        cin >> str_input;

        for(int i=0; i<str.size(); i++)
        {
            if(str[i] != str_input[i])
            {
                flag = false;
                break;
            }
            else
            {
                cnt++;
            }
        }
        cout << cnt << endl;
    }
}
