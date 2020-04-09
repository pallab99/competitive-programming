#include<bits/stdc++.h>
using namespace std;
int List[1000],sz;
void div()

{
    int n;
    cin>>n;
    sz=0;
    int sq=sqrt(n);
    for(int i=1;i<=sq;i++)
    {
        if(n%i==0)
            List[sz++]=i;
            List[sz++]=n/i;
    }

    if(sq*sq)
        sz--;
sort(List,List+sz);
   for(int i=0;i<sz;i++)
    cout<<List[i]<<" ";
}
int main()
{
        div();

}
