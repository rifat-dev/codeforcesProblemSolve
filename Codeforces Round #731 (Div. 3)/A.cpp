#include<bits/stdc++.h>
using namespace std;

void saive()
{
    int Xa,Xb,Xf,Ya,Yb,Yf;

    cin >> Xa >> Ya;
    cin >> Xb >> Yb;
    cin >> Xf >> Yf;


    if(Xa == Xb)
    {
        if(Xf == Xa)
        {
            if(Yf > min(Ya,Yb) && Yf<max(Ya,Yb))
                cout << (max(Ya,Yb)-min(Ya,Yb)) + 2 << '\n';

            else
                cout << (max(Ya,Yb)-min(Ya,Yb))<< '\n';
        }
        else
            cout << (max(Ya,Yb)-min(Ya,Yb))<< '\n';

    }
    else if(Ya == Yb)
    {
        if(Yf == Ya )
        {
            if(Xf > min(Xa,Xb) && Xf<max(Xa,Xb))
                cout << (max(Xa,Xb)-min(Xa,Xb)) + 2 << '\n';

            else
                cout << (max(Xa,Xb)-min(Xa,Xb))<< '\n';
        }
        else
            cout << (max(Xa,Xb)-min(Xa,Xb)) << '\n';
    }
    else
        cout <<  (max(Xa,Xb) - min(Xa,Xb)) + (max(Ya,Yb) - min(Yb,Ya))  << '\n';


}


int main()
{

    int t;
    cin >> t;

    while(t--)
        saive();

}
