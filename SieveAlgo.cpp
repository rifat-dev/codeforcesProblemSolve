#include<bits/stdc++.h>
using namespace std;

const int N = 1e7+10;
vector<bool> isPrime(N, 1);
vector<int> lp(N,0), hp(N);
vector<int> primeFactors;

//prime number O(n log log(n))
void sieveAlgo()
{
    isPrime[0] = isPrime[1] = false;

    for(int i=2; i<N; ++i)
    {
        if(isPrime[i] == true)
        {
            for(int j = 2*i; j<N; j += i)
            {
                isPrime[j] = false;
            }
        }
    }

    for(int i=1; i<100; i++)
    {
        cout << i << " " << isPrime[i] << endl;
    }
}

// Highest and lowest prime in any number
void sieve()
{

    for(int i=2; i<N; ++i)
    {
        if(isPrime[i] == true)
        {
            lp[i] = hp [i] = i;
            for(int j = 2*i; j<N; j += i)
            {
                isPrime[j] = false;
                hp[j] = i;
                if(lp[j] == 0)
                {
                    lp[j] = i;
                }
            }
        }
    }

//    for(int i=2; i<100; ++i){
//        cout << i <<" "<< lp[i] << " " << hp[i] << endl;
//    }

}

void primeFact()
{

    int num;
    cin >> num;

    while(num > 1)
    {
        int prime = hp[num];
        if(num % prime == 0)
        {
            num /= prime;
            primeFactors.push_back(prime);
        }
    }

    for(int i= 0; i<primeFactors.size(); ++i){
        cout << primeFactors[i] << " ";
    }

}



int main()
{

    sieve();
    primeFact();


}
