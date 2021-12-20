#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin>>t;
  while(t>0)
  {
      int n,rem=1;
      cin>>n;
         int size = trunc(log10(n)) + 1;
         int a[size],k=0;
         while(n>0)
         {
             
             if(n%10!=0)
             {
                 a[k]=rem *(n%10);
                 k++;
             }
             n/=10;
             rem=rem*10;
             
         }
         cout<<k<<"\n";
             for(int i=0;i<k;i++)
                cout<<a[i]<<" ";
        cout<<"\n";
      t--;

  }

    return 0;
}
