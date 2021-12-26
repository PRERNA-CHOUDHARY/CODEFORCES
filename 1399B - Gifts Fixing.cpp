#include <bits/stdc++.h>

using namespace std;

int main()
{
   int t,n;
   cin>>t;
   while(t--)
   {
       cin>>n;
     long  long int x=0,a[n],b[n],sum=0,ma=1000000000,mb=1000000000;
       for(int i=0;i<n;i++)
       cin>>a[i];
       for(int i=0;i<n;i++)
       cin>>b[i];
        for(int i=0;i<n;i++)
        {
            if(a[i]<ma)
            ma=a[i];
            if(b[i]<mb)
            mb=b[i];
            
        }
   
       for(int i=0;i<n;i++)// 3 5 6     2 3 3
       {
        //   cout<<a[i]<<" "<<b[i]<<"\n";
          {
              x=max((a[i]-ma),(b[i]-mb));
              sum+=x;
          }
           
       }
       cout<<sum<<"\n";
   }

    return 0;
}
