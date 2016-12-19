#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool * Sieve(long long number)
{
    bool * prime = new bool[number+1];
    for(long long i=0;i<=number;i++)
        prime[i] = true;
    prime[0] = false;
    prime[1] = false;
    int squareRoot = sqrt(number);
    for(long long i=2;i<=squareRoot;i++)
    {
        if(prime[i])
        {
            for(long long j=2*i;j<=number; j += i)
                prime[j] = false;
        }
    }
    return prime;
}
int main(){
    int n;
    long long m=1000000000;
    cin>>n;
    long long a[n],b[n];
    for(int i=0;i<n;i++){
        cin>>a[i]>>b[i];
    }
    bool * primes;
    primes = Sieve(m);
    for(int i=0;i<n;i++){
        for(long long k=a[i];k<=b[i];k++)
        {
            if(primes[k])
            cout<<k<<endl;
        }
        cout<<endl;
    }
    return 0;
}
