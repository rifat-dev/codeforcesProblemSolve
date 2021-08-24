#include<bits/stdc++.h>
using namespace std;
typedef long long ll;



int main()
{

    int n, m, a, b;

    cin >> n >> m >> a >> b;
    if (m * a <= b)
        cout << n * a << "\n";
    else
        cout << (n/m) * b + min((n%m) * a, b) << "\n";

}
