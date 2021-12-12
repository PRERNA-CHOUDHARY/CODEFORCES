
#include <bits/stdc++.h>

using namespace std;


int main ()
{
  int n, h;           
  cin>>n>>h;
  int arr[n],width=0;
  for(int i=0;i<n;i++)
  {
      cin>>arr[i];
      if( (h==arr[i]) || arr[i]/(h)==0 ) 
      {
          width+=1;} 
      else {
          width+=2;
          
      }
      
  }
  cout<<width;

  return 0;
}
