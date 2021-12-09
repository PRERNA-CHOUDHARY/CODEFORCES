
#include <bits/stdc++.h>
using namespace std;
int
main ()
{
  int  count, c = 0;
  
  string str;
  cin >> str;
  for (int i = 0; i <str.length()-1; i++)
    {
        count = 0;
      for (int j = i+1; j < str.length(); j++)
	{
	   
	  if (str[i] == str[j])
	    {
	        
	      count++;
	      break;

	    }

	}
;
      if (count == 0)
	{
	    
	  c++;
	}

    }
    
  if(c%2!=0)
  cout<<"CHAT WITH HER!";
  else 
  cout<<"IGNORE HIM!";
  return 0;
}
