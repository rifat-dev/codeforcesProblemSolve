#include<bits/stdc++.h>
using namespace std;

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    for(int i=0; i<t; i++)
    {
        int n;
        string s;

        cin >> n;
        cin >> s;

        int flag = 0;
        for(int j=0; j<s.size()-1; j++)
        {
            if(s[j]!=s[j+1])
            {
                for(int k=j+1; k<s.size(); k++)
                {
                    if(s[j]==s[k])
                    {
                        flag = 1;
                        break;

                    }

                }
            }

            if(flag){
                break;
            }

        }

        if(flag){
            cout << "NO" << '\n';
        }else{
            cout << "YES" << '\n';
        }
    }

}
