#include <bits/stdc++.h>

using namespace std;

int main()
{
    int s,n;
    cin>>s>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    int min=a[n-1]-a[0];
    for(int i=0;i<=n-s;i++)
    {
        
        if(a[s+i-1]-a[i]<min)
        min=a[s+i-1]-a[i];
    }
    cout<<min;
    
  

    return 0;
}
