
#include <bits/stdc++.h>

using namespace std;
//int check(int i,int n,int p)
// {
//     if(n/10==0)
//     return 0;
//     if(i==check(i,n/10,p*10))
//     return 1;
//     else return 0;
// }

int
main ()
{
  int n, year;
  cin >> n;
  for (int i = n+1;; i++)
    {
      int x = i;
      int one = x % 10;
      x /= 10; 
      int tens = x % 10; 
       x/=10; 
      int hundred=x%10; 
      x/=10;
      int thousand=x; 
      if((one!=tens) && (tens!=hundred) && (hundred!=thousand)&& (one!=thousand) && (tens!=thousand)&&(one!=hundred))
      {
          year=i;
          break;
      }


    
    }
    cout << year;
  return 0;
}
