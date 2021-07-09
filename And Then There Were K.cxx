#include <bits/stdc++.h>
using namespace std;

int ans(){
	int n;
	cin>>n;
	int i;
	for(i=1;;i=i*2){
		if(n/i==0) break;
		}
	return (i/2)-1;
	}
int main(){
	int t;
	cin>>t;
	while(t--){
	cout<<ans()<<endl;
	}
	return 0;
	}
