#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{

    ll n;
    cin >> n;
    set<ll> s;

    while(s.find(n) == s.end()){
        s.insert(n);
        n++;

        while(n%10 == 0)
            n /=10;
    }

  cout << s.size() << endl;


}
