#include <bits/stdc++.h>

using namespace std;

int main()
{
   string s;
   int arr[26]={0};
   getline(cin,s);

   for(int i=1;i<s.length()-1;i+=3) 
   {
      
       arr[(int)s[i]-97]=1;
   }
   int count=0;
   for(int i=0;i<26;i++)
   {
       if(arr[i]==1)
       count++;
   }
   cout<<count;
    return 0;
}
