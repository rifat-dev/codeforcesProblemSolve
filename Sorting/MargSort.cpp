
#include<bits/stdc++.h>
using namespace std;
#define sz(x) (int)x.size()

void marg(vector<int> &arr, int l, int r)
{


    int mid = (l+r)/2;

    int n = mid - l + 1;
    int m = r-mid;

    vector<int> leftArr(n);
    vector<int> rightArr(m);

    for(int i= 0; i<n; i++)
        leftArr[i] = arr[l+i];

    for(int j=0; j<m; j++)
        rightArr[j] = arr[mid+1+j];

    int i=0,j=0,k=l;

    while((i<n) && (j<m))
    {
        if(leftArr[i] <= rightArr[j])
        {

            arr[k] = leftArr[i];
            i++;
        }
        else
        {
            arr[k] = rightArr[j];
            j++;
        }

        k++;
    }

    while(i<n)
    {
        arr[k] = leftArr[i];
        i++;
        k++;
    }

    while(j<m)
    {
        arr[k] = leftArr[j];
        j++;
        k++;
    }

}

void margSort(vector<int> &arr, int l, int r)
{

    if (l == r)
    {
        return;
    }
    int mid = (l+r)/2;


    margSort(arr , l, mid);
    margSort(arr, mid+1, r);


    marg(arr, l, r);
}



int main()
{

    int n;
    cin >> n;

    vector<int> arr(n);
    for(int i=0; i<n; i++)
        cin >> arr[i];
    margSort(arr, 0, n-1);

    for(int i=0; i<n; i++) cout << arr[i] << " ";
}
