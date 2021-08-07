#include<bits/stdc++.h>
using namespace std;

//void printSubsequences(vector<int> arr, int n)
//{
//    unsigned int opsize = pow(2, n);
//    cout << opsize << endl;
//    int flag = 0;
//    for (int counter = 1; counter < opsize; counter++)
//    {
//        unsigned int sum = 1;
//        for (unsigned int j = 0; j < n; j++)
//        {
//            if (counter & (1<<j)){
//              cout << arr[j] << " ";
//                sum *= arr[j];
//            }
//
//        }
//        cout << endl;
//        unsigned int pSqur = sqrt(sum);
//        if(pSqur*pSqur != sum){
//            flag = 1;
//            break;
//        }
//        sum = 1;
//
//    }
//
//    if(flag){
//        cout << "YES" << '\n';
//    }else{
//        cout << "NO" << '\n';
//    }
//}


int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        vector<int> a;
        for(int i=0; i<n; i++)
        {
            int c;
            cin >> c;
            a.push_back(c);
        }

        int flag = 0;
        for(int i=0; i<n; i++)
        {
            int pSqr = sqrt(a[i]);
            if(pSqr*pSqr != a[i])
            {
               flag = 1;
               break;
            }
        }

        if(flag)
            cout << "YES" << '\n';

        else
            cout << "NO" << '\n';

    }
}
