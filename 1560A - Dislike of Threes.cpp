#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,l=0,num=0;
        cin>>n;
       
        for(int i=1;;i++)
        {
           
            if(i%10==3 || i%3==0 )
            {
                // cout<<i<<"\n";
                l--;
              
            }
            l++;
            
            if(l==n)
            {
                num=i;
                break;
            }
        }
        cout<<num<<"\n";
    }

    return 0;
}
