//138787460	Dec/11/2021 20:13UTC+5.5		734A - Anton and Danik	GNU C++14	Accepted	31 ms	300 KB

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cin>>x;
   string a;
   cin>>a;
  int m=0,n=0;
   for(int i=0;i<a.length();i++)
   {
       if(a[i]=='A')
       m++;
       else
       n++;
   }
   
   if(m>n)
   cout<<"Anton";
   else if(n>m)
   cout<<"Danik";
   else
   cout<<"Friendship";

    return 0;
}
