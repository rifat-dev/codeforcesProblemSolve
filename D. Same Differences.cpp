#include<bits/stdc++.h>
using namespace std;


void saive()
{
    int n;
    cin >> n;

    vector<int> a(n+1);
    map<int, int> arr;


    for(int i=1; i<=n; i++)
    {
        cin >> a[i];
        arr[a[i]-i]++;
    }



    long long ans=0;

    for(auto i: arr)
    {
      for(int j=1; j< i.second; j++){
        ans += i.second - j;
      }
    }


    cout << ans << endl;

}

int main()
{

    int t;
    cin >> t;

    while(t--)
        saive();


}
