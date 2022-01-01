#include <bits/stdc++.h>

using namespace std;

int main()
{
  long long int n,k;
  cin>>n>>k;
  (n%2==0)?((k>n/2)?cout<<2*k-n:cout<<2*k-1):((k>n/2+1)?cout<<2*k-n-1:cout<<2*k-1);
    return 0;
}
