#include<bits/stdc++.h>
using namespace std;

int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    for(int i=0; i<t; i++)
    {
        int n;
        cin >>n;
        string s;
        cin >> s;

        if(n%3==0)
        {
            int t = 0;
            int m = 0;

            for(int j=0; j<s.size(); j++)
            {
                if(s[j] == 'T'){
                    t++;
                    if(t-m>n/3){
                       m=0;
                       break;
                    }
                }
                else
                {
                    m++;
                    if(m>t){
                        m = 0;
                        break;
                    }else if(j==s.size()-1 && s[j]=='M'){
                        m = 0;
                    }

                }
            }

            if(n/3 != m)
                cout << "NO" << "\n" ;

            else
                cout << "YES" << "\n" ;

        }
        else
            cout << "NO" << "\n" ;
    }

}
