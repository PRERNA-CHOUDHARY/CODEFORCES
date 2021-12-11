// 138786819	Dec/11/2021 20:06UTC+5.5		41A - Translation	GNU C++14	Accepted	30 ms	0 KB

#include <bits/stdc++.h>
using namespace std;

int main()
{
   string a,b;
   cin>>a>>b;
   int n=a.length()-1;
   for(int i=0;i<=(a.length()-1)/2;i++)
   {
       char temp=a[i];
       a[i]=a[n];
       a[n]=temp;
       n--;
   }
   
   if(a==b)
   cout<<"YES";
   else
   cout<<"NO";

    return 0;
}
