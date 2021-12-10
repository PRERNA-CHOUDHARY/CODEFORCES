#include <bits/stdc++.h>
using namespace std;
int
main ()
{
string str;
cin>>str;
int uc=0,lc=0;
for(int i=0;i<str.length();i++)
{
    if(str[i]>='A' && str[i]<='Z')
    uc++;
    else
    lc++;
}
 
if(lc>=uc)
{transform(str.begin(), str.end(), str.begin(), ::tolower);
cout<<str;}
else
{transform(str.begin(), str.end(), str.begin(), ::toupper);
cout<<str;}
  return 0;
}
