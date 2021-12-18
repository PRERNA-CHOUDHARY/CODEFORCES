#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n,count=0;
  cin>>n;
  int hun =n/100;
  n%=100;
  int twenty=n/20;
  n%=20;
  int ten=n/10;
  n%=10;
  int five=n/5;
  n%=5;
  count=hun+twenty+ten+five+n;
cout<<count;
    return 0;
}
