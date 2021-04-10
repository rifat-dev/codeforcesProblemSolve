#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >>t;

    for(int i=0; i<t ; i++ )
    {

        string str;
        cin >> str;



        if(count(str.begin(),str.end(), 'a') == str.size())
            cout << "NO" <<endl;
        else
        {

            if(str[0] != 'a')
            {
                cout << "YES" <<endl;
                cout <<str<<'a'<<endl;

            }

            else if(str[str.size()-1]!='a')
            {
                cout << "YES" <<endl;
                cout <<'a'<<str<<endl;
            }
            else
            {
                int flag = 0;
                int k;
                for(k = 0; k<str.size(); k++)
                {
                    if(str[k] != str[str.size()-k-1])
                    {
                        flag = 1;
                        break;
                    }

                }

                if(flag)
                {
                    if(str[k] == 'a')
                    {
                        cout << "YES" << '\n';
                        cout <<'a'<< str << endl;
                    }else{
                         cout << "YES" << '\n';
                        cout << str << 'a' << endl;
                    }
                }else{
                   cout << "YES" << '\n';
                   cout <<'a'<< str << endl;
                }

            }



        }

    }

}








