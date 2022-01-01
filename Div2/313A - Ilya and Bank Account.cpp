#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n,x;
  cin>>n;
  x=n/10;
  if(n>=0)
  cout<<n;
  else
  if(abs(n%10)>=abs(x%10))
  cout<<x;
  else cout<<x/10*10+n%10;
}
