#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool * SieveOfEratosthenes(int number)
{
    bool * prime = new bool[number+1];
    for(int i=0;i<=number;i++)
        prime[i] = true;
    prime[0] = false;
    prime[1] = false;
    int squareRoot = sqrt(number);
    for(int i=2;i<=squareRoot;i++)
    {
        if(prime[i])
        {
            for(int j=2*i;j<=number; j += i)
                prime[j] = false;
        }
    }
    return prime;
}
int main()
{
    int number = 30;
    bool * primes;
    primes = SieveOfEratosthenes(number);
    for(int i=0;i<number;i++)
    {
        if(primes[i])
            cout<<i<<" ";
    }
    return 0;
}
