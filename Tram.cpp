
#include <bits/stdc++.h>
using namespace std;

int main()
{
   int t;
   cin>>t;
   int max=0,sum=0;
   while(t>0)
   {
       int i,o;
       cin>>o>>i;
       sum-=o;
       sum+=i;
       if(max<sum)
       {max=sum;
           
       }
       t--;
   }

cout<<max;
    return 0;
}
