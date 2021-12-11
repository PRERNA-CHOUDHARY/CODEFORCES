
#include <bits/stdc++.h>
using namespace std;

int main()
{
   int n,t;
   cin>>n>>t;
   string a;
   cin>>a;
   while(t>0)
   {
      for(int i=0;i<a.length();i++)
      {
          if(a[i]=='B' && a[i+1]=='G')
           {
               a[i]='G';
               a[i+1]='B';i++;
           }
      }
           
       
       t--;
   }

cout<<a;
    return 0;
}
