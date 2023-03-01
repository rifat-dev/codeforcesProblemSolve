
#include<bits/stdc++.h>
using namespace std;


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;
        int x = 0;
        int y = 0;

        if(n%2 == 0)
        {
            x = y = n/2;
            cout << x << " " << y << endl;
        }
        else
        {
            if(n%10 == 9)
            {
                string str = to_string(n);
                string one = "";
                string two = "";

                int flag = 0;
                for(int i=0; i<str.size(); i++)
                {
                    int value = str[i] - '0';

                    if(value%2 == 0)
                    {
                        one += to_string(value/2);
                        two += to_string(value/2);
                    }
                    else if(value == 1)
                    {
                        one += to_string(1);
                    }
                    else
                    {
                        if(flag == 0)
                        {
                            one += to_string(value/2);
                            two += to_string(value/2+1);
                            flag = 1;
                        }
                        else
                        {
                            one += to_string(value/2 + 1);
                            two += to_string(value/2);
                            flag = 0;
                        }
                    }
                }

                cout << one << " " << two << endl;
            }
            else
            {
                x = n/2;
                y = n/2 + 1;
                cout << x << " " << y << endl;
            }

        }


    }
}
