#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,sum=0;
        cin>>n>>k;
        int a[n],b[n];
        for(int i=0;i<n;i++)
        cin>>a[i];
        for(int i=0;i<n;i++)
        cin>>b[i];
        for(int i=1;i<=k;i++)
        {
            sort(a,a+n);
            sort(b,b+n);
            if(a[0]<b[n-1])
            swap(a[0],b[n-1]);
            else break;
        }
        for(int i=0;i<n;i++)
        sum+=a[i];
        cout<<sum<<"\n";
    }

    return 0;
}
