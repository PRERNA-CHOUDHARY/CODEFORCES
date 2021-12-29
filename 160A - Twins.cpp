#include <bits/stdc++.h>
using namespace std;

int main() {
	 int n;
	 cin>>n;
	 int arr[n];
	 int sum1=0;
	 int count=0;
	 for(int i=0;i<n;i++){
		 cin>>arr[i];
		 sum1+=arr[i];
	 }
	 sum1=sum1/2;
	 sort(arr,arr+n);
	 int sum2=0;
	 for(int i=n-1;i>=0;i--){
		 sum2+=arr[i];
		 ++count;
		if(sum2>sum1){
		 	break;
		}
	 }
	 cout<<count;

	return 0;
}
