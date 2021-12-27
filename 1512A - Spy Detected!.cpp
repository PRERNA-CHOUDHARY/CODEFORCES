#include <bits/stdc++.h>

using namespace std;

int main()
{
   int t,n;
   cin>>t;
   while(t--)
   {
       cin>>n;
        int a[n],odd=0;
       for(int i=0;i<n;i++)
       cin>>a[i];
      
       if(a[0]!=a[1]&&a[0]!=a[2])
       cout<<1<<"\n";
       
       else if((a[n-1]!=a[n-2]&&a[n-1]!=a[n-3]))
       cout<<n<<"\n";
       else
        {
            for(int i=1;i<n-1;i++)
            if((a[i]!=a[i-1])&&(a[i]!=a[i+1]))
            {
                odd=i+1;
            }
        
            cout<<odd<<"\n";
            
        }
        
       
   }

    return 0;
}
