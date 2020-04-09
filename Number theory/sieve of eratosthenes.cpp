#include<bits/stdc++.h>
using namespace std;
vector<int>isprime;
int prime[2000005];
void sieve(int n)
{
    for(int i=0; i<=n; i++)
    {
        prime[i]=1;
    }
    prime[0]=0;
    prime[1]=0;
    for(int i=2; i*i<=n; i++)
    {
        if(prime[i]==1)
            for(int j=2; i*j<=n; j++)
                prime[i*j]=0;
    }
    int sum=0;
    for(int i=2; i<=n; i++)
    {
        if(prime[i]==1)
            isprime.push_back(i);
    }
    for(auto i:isprime)
        cout<<i<<" ";
}
int main()
{
    int n;
    cin>>n;
    sieve(n);
}
