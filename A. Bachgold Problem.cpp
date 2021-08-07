#include<bits/stdc++.h>
using namespace std;

//#define m 100100
//bool a[m];
//
//void saive()
//{
//    int i, j;
//    a[0]=a[1]=1;
//
//    for(i=4; i<m; i+=2)
//        a[i] = 1;
//
//    for(i=3; i<= sqrt(m); i+=2)
//    {
//        for(j=i*i; j<m; j=j+2*i)
//            a[j] = 1;
//    }
//
//}

int main()
{

    int n;
    cin >> n;
    vector<int> arr;

    while(n>0)
    {
        if(n==3)
        {
            arr.push_back(n);
            n = n-3;
        }
        else
        {
            n = n-2;
            arr.push_back(2);
        }

    }

    cout << arr.size() << '\n';
    for(int i=0; i<arr.size(); i++)
        cout << arr[i] << " ";

}
