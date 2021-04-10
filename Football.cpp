#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int sum = 1;

    for(int i = 0; i<s.size()-1; i++)
    {
        if(s[i] == s[i+1])
        {
             sum++;
            if(sum == 6)
                break;
        }
        else
            sum = 0;
    }



    if(sum == 6)
        {
        cout << "YES" << endl;
        }

    else
        cout << "NO" << endl;
}
