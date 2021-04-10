#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >>n;

    vector<int> N;

    for(int i=0; i<n; i++){
        int a;
        cin >>a;
        N.push_back(a);
    }

    sort(N.begin(), N.end());

    for(int c:N){
        cout << c << " ";
    }

    return 0;
}
