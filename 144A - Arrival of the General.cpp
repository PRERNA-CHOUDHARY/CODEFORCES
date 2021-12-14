#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    int s=0,l=0;
    for(int i=0;i<n;i++)
    cin>>a[i];
    int max=a[0],min=a[0];
    for(int i=1;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
            s=i;//1
        }
        if(a[i]<=min)
        {
            min=a[i];
            l=i;
        }
    }
//    cout<<s<<max<<"\t"<<l<<min<<"\t"<<n-l+1;
    if(s>l)
    cout<<s+(n-l-2);
    else
    cout<<s+(n-l-1);
   
    return 0;
}
