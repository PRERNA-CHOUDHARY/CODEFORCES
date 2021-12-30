#include <bits/stdc++.h>

using namespace std;

int
main ()
{
  int j=0;
  string str,a = "hello";
  cin >> str;
  for (int i = 0; i < str.length (); i++)
    {
        if(str[i]==a[j])
        j++;
    }
    (j==5)?cout<<"YES":cout<<"NO";
  return 0;
}
