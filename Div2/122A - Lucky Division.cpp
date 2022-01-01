#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,flag=0;
    cin>>n;
    int a[14]={4,7,44,77,47,74,444,777,477,747,774,744,474,447};
    for(int i=0;i<14;i++)
    {
        if(n%a[i]==0)
        {        
            flag++;
            break;
            
        }
    }
    (flag==0)?cout<<"NO":cout<<"YES";
    
    return 0;
}
