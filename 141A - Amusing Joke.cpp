#include <bits/stdc++.h>
using namespace std;
int main()
{
  string str1,str2,str3;
  cin>>str1>>str2>>str3;
  int a[26]={0},b[26]={0},flag=0;
  for(int i=0;i<str1.length();i++)
  {
      a[(int)str1[i]-65]++;
  }
  for(int i=0;i<str2.length();i++)
  {
      a[(int)str2[i]-65]++;
  }
  for(int i=0;i<str3.length();i++)
  {
      b[(int)str3[i]-65]++;
  }
  for(int i=0;i<26;i++)
  {
      if(a[i]!=b[i])
      {
          //cout<<a[i]<<"  "<<b[i];
          flag++;
          break;
      }
  }
  if(flag==0)
  cout<<"YES";
  else
  cout<<"NO";
    return 0;
}
