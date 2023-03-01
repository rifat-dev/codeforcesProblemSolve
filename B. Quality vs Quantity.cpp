#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll N = 1e6+7;
vector<ll> arr(N);

void marge(int l, int r, int mid)
{
    int l_sz = (mid-l)+1;
    int r_sz = (r-mid);

    vector<int> l_arr(l_sz+1);
    vector<int> r_arr(r_sz+1);

    for(int i= 0; i<l_sz; i++)
    {
        l_arr[i] = arr[i+l];
    }

    for(int i=0; i < r_sz; i++)
    {
        r_arr[i] = arr[mid+i+1];
    }

    l_arr[l_sz] = r_arr[r_sz] = INT_MAX;

    int l_i = 0;
    int r_i = 0;

    for(int i=l; i<=r; i++)
    {
        if(l_arr[l_i] <= r_arr[r_i])
        {
            arr[i] = l_arr[l_i];
            l_i++;
        }
        else
        {
            arr[i] = r_arr[r_i];
            r_i++;
        }
    }




}

void margeSort(int l, int r)
{

    if(l == r) return;

    int mid = (r+l ) / 2;
    margeSort(l,mid);
    margeSort(mid+1, r);

    marge(l,r, mid);

}


int main()
{

    int t;
    cin >> t;

    while(t--)
    {
        ll n;
        cin >> n;

        for(int i=0; i<n; i++) cin >> arr[i];
        margeSort(0, n-1);

        ;

        ll b_sum = arr[0]+arr[1];
        ll r_sum = arr[n-1];

        int l = 2;
        int r = n-2;
        int flag = 0;

        while(l<=r)
        {

            if(r_sum > b_sum)
            {
                flag = 1;
                break;
            }
            r_sum += arr[r];
            b_sum += arr[l];
            r--;
            l++;
        }

        if(r_sum > b_sum)
        {
            flag = 1;
        }



        cout << (flag ? "YES" : "NO") << endl;
    }

}
