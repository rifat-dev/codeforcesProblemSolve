#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    string str;

    cin >> n >>k;
    cin >> str;

    int num = int('a');
    int index = 0;

    while(1)
    {

        if(k>0)
        {
            if(int(str[index])== num)
            {
                str.erase(str.begin()+index);
                index = index;
                k--;
            }
            else
            {
                if(index==str.size())
                {
                    num++;
                    index=0;
                }
                else
                    index++;


            }
        }
        else
            break;
    }


    if(str.size()>0)
        cout << str << endl;

    else
        cout << " " << endl;


}
