#include <bits/stdc++.h>

using namespace std;

int main()
{
   int t,n;
   cin>>t;
   while(t--)
   {
       cin>>n;
        int a[n],min=10001;
       for(int i=0;i<n;i++)
       cin>>a[i];
       sort(a,a+n);
        for(int i=1;i<n;i++)
        if((a[i]-a[i-1])<min)
        min=a[i]-a[i-1];
        cout<<min<<"\n";
       
   }

    return 0;
}
