#include<iostream>
#include<string>
typedef long long ll;
using namespace std;

void saive(int array[] , ll n){
    int ans[n];
    for(int i = 0; i < n ;i++){
        ans[i] =0;
    }

    ll low = n-1;
    for(ll i = n-1;i>=0;i--){
        if(array[i]){
            low = min(low,i);
            int newLow = i - array[i];
            for(int j = low; j>= 0 && j>newLow ; j--){
                ans[j] = 1;
            }
            low = newLow;
        }
    }


    for(int i = 0; i < n ; i++){
        cout << ans[i] << " ";
    }
    cout << "\n" ;
}

int main()
{
    ll t;
    cin >> t;
    for(int i = 0; i < t; i++){
       ll n;


       cin>>n;
       int array[n];
       for(int j=0; j<n; j++){
          cin>>array[j];
       }

        saive(array,n);
    }
	return 0;
}

