
#include <bits/stdc++.h>

using namespace std;


int main ()
{
  int n,rooms=0;
  cin>>n;
  
  while(n>0)
  {
      int p,q;
      cin>>p>>q;
      if(q-p>=2)
      rooms++;
      
      n--;
  }

cout<<rooms;
  return 0;
}
