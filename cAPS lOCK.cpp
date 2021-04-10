#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >>s;
    int a = int(s[0]);
    if(a>90)
    {
        int flag = 0;
        for(int i=1; i<s.size(); i++)
        {
            if(int(s[i]) >90 )
            {
                flag = 1;
                break;
            }
        }
        if(!flag)
        {
            transform(s.begin(), s.end(), s.begin(), ::tolower);
            s[0] = int(s[0]) - 32;
            cout << s;
        }else{
            cout << s;
        }
    }else{
        int flag = 0;
       for(int i=1; i<s.size(); i++)
        {
            if(int(s[i])>90 )
            {
                flag = 1;
                break;
            }
        }

         if(!flag)
        {
            transform(s.begin(), s.end(), s.begin(), ::tolower);
            cout << s;
        }else{
            cout << s;
        }
    }

    return 0;
}
