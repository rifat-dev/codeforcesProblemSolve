#include<bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while(t--)
    {
        string s;
        char c;
        cin >> s >> c;

        int flag = 0;
        int index = 0;
        for(int i=0; i<s.size(); ++i)
        {
            if(s[i] == c)
            {
                index = i;
                int left = index;
                int right = s.size() - 1 - index;
                if((left%2 == 0) && (right%2 == 0) && s.size() != 1)
                {
                    flag = 1;
                    break;
                }
            }
        }

        if((s[0] == c) && s.size() == 1){
             cout << "YES"  << "\n";
        }else{
         cout << (flag ? "YES" : "NO") << "\n";
         }



    }

}
