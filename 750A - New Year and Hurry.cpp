#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,count=0,m=0;
    cin>>n>>k;
    int mins=240-k;
    for(int i=1;i<=n;i++)
    {
        m+=i*5;
        if(m>mins)
        break;
        else
        count++;
    }
    cout<<count;
   
    return 0;
}
