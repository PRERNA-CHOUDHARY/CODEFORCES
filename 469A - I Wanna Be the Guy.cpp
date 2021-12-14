#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,p,q;
    cin>>n;
    cin>>p;
    int a[p],c[n+1]={0};
    
    for(int i=0;i<p;i++)
    {
        cin>>a[i];
        c[a[i]]=a[i];
        
    }
    cin>>q;
    int b[q];
    for(int i=0;i<q;i++)
   {
       cin>>b[i];
       c[b[i]]= b[i];
   }
   int k=0;
    for(int i=1;i<=n;i++)
    {
        
        if(c[i]!=i)
        {k++;
            break;
        }
    }
    if(k==0)
    cout<<"I become the guy.";
    else
    cout<<"Oh, my keyboard!";

    return 0;
}
