#include <bits/stdc++.h>
using namespace std;

int main() {

int n;
cin>>n;
int officer=0;
int untreated=0;
for(int i=0;i<n;i++){
	int x;
	cin>>x;
	if(x>0){
		officer+=x;
		
	}
	else {
		if(officer<1){
		++untreated;
		}
		else {
			--officer;
		}
	}
}
cout<<untreated;
	return 0;
}
