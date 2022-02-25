#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


int main()
{

    ll a,b,c;

    cin >> a >> b >> c;

    if(a+1<b)
        cout << a+a+1+(c*2)<<endl;

    else if(b+1<a)
        cout << b+b+1+(c*2)<<endl;

    else
        cout << a+b+(c*2)<<endl;

}


