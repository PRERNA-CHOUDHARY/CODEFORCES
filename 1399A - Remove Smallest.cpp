#include <bits/stdc++.h>
using namespace std;

int main() {

int t;
cin>>t;
while(t)
{
    int n,flag=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
          cin>>a[i]; 
          
    }
    sort(a,a+n);
    for(int i=0;i<n-1;i++)
        {
            if(abs(a[i]-a[i+1])>1)
            {
                cout<<"NO\n";
                flag++;
                break;
            }
        }
        
    
    if(flag==0)
    cout<<"YES\n";
   
    t--;
}
	return 0;
}
