#include<bits/stdc++.h>
#define ll long long
using namespace std;
map<int, ll> m;

void saive()
{
    m.insert(make_pair(1,2));
    m.insert(make_pair(2,11));
    m.insert(make_pair(3,113));
    m.insert(make_pair(4,1151));
    m.insert(make_pair(5,12553));
    m.insert(make_pair(6,104729));
    m.insert(make_pair(7,1299709));
    m.insert(make_pair(8,15485863));
    m.insert(make_pair(9,179424673));

}

int main()
{
    saive();
    int t;
    cin >>t;

    for(int i=0; i<t; i++)
    {
        int a, b, c;
        cin >> a >> b >>c;

        auto it = m.find(c);
        ll z = it->second;
        ll x = it->second;
        while(a != std::to_string(x).length())
            x = x*2;

        ll y = it->second;
        while(b != std::to_string(y).length()){
            y = y*3;
        }
        cout << x << " " << y << "\n" ;
    }

}
