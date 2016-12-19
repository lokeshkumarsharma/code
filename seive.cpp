#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool * SieveOfEratosthenes(int number)
{
    bool * prime = new bool[number+1];
    for(int i=0;i<=number;i++)
        prime[i] = true;
    //0 and 1 are not prime, and we mark because we do not check in the algorithm
    //(because will cause bad results, if we divide by 0, we go to hell, and if we divide one by one, we will mark all numbers a nonprime.
    prime[0] = false;
    prime[1] = false;
    int squareRoot = sqrt(number);
    for(int i=2;i<=squareRoot;i++)
    {
        //If is gray (Is prime)
        if(prime[i])
        {
            //We start j by the next multiple of i (that is: 2*i), and we increase it by i each time until j is less than or equal to sqrt(number)
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
