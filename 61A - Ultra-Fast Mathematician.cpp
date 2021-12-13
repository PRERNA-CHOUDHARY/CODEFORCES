#include <bits/stdc++.h>
using namespace std;

int main()
{
  string str1,str2;
  cin>>str1>>str2;
 
  for(int i=0;i<str1.length();i++)
  {
    
     if((str1[i]== '0' && str2[i]=='0')  ||( str1[i]== '1' && str2[i]=='1'))
     {str1[i]='0';
        
     }
     else  if((str1[i]== '1' && str2[i]=='0')  ||( str1[i]== '0' && str2[i]=='1'))
         str1[i]='1';
         
        
      
  }
  for(int i=0;i<str1.length();i++)
  cout<<str1[i];



  
    return 0;
}
