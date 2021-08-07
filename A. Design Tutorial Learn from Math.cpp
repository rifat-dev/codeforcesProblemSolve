#include<bits/stdc++.h>
using namespace std;
#define n 1000100

bool a[n];

void saive(){
    int i,j;
    a[0]=a[1]=0;

    for(i=4; i<n; i+=2){
        a[i]=1;
    }

    for(i=3; i<=sqrt(n); i+=2){
        for(j=i*i; j<n; j=j+2*i){
            a[j]=1;
        }
    }

}

int main(){
   saive();

   int m;
   cin >>m;

   for(int i=4; i<m; i+=2){
      if(a[m-i] == 1){
         cout << i << " " << m-i;
         break;
      }
   }
}
