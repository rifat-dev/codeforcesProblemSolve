#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    cin >>a;

    int d = a;
    int flag = 0;
    while (d>0)
    {
        int b = d%10;
        if(b != 4 && b != 7 )
        {

            flag = 1;
            break;
        }
        d = d/10;
    }



    if(flag)
    {

        if(a%4 == 0 || a%7==0 || a%47==0 || a%74==0 || a%44==0 || a%77==0 )
            cout << "YES" << endl;

        else
            cout << "NO" << endl;

    }
    else
        cout << "YES" << endl;
}
