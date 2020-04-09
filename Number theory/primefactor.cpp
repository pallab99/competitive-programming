#include<bits/stdc++.h>
using namespace std;
vector<int>isprime,List;
int prime[1000000];
void sieve()
{
    for(int i=0; i<=1000000; i++)
    {
        prime[i]=1;
    }
    prime[0]=0;
    prime[1]=0;
    for(int i=2; i*i<=1000000; i++)
    {
        if(prime[i]==1)
            for(int j=2; i*j<=1000000; j++)
            {
                prime[i*j]=0;
            }
    }
    for(int i=2; i<=1000000; i++)
    {
        if(prime[i]==1)
            isprime.push_back(i);
    }
    //for(auto i:isprime)
    //cout<<i<<" ";
}
void primefact(int n)
{
    for(int i=0; isprime[i]*isprime[i]<=n && i<isprime.size(); i++)
    {
        if(n%isprime[i]==0)
        {
            while(n%isprime[i]==0)
            {
                n/=isprime[i];
                List.push_back(isprime[i]);
            }
        }
    }
    if(n>1)
        List.push_back(n);
}
int main()
{
     sieve();
    int n;
    while(cin>>n && n)
    {

    primefact(n);
    for(auto i:List)
    cout<<i<<" ";
    }

}

