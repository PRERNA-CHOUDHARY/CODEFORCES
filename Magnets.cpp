#include <bits/stdc++.h>

using namespace std;

int main()
{
   int t,c=0;
  cin >>t ;
  while(t)
  {
      int str,x;
      cin>>str;
      if(x!=str)
      c++;
      x=str;
      t--;
  }
cout<<c;
    return 0;
}
