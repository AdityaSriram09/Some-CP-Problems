#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

// x is copied, y is original
int main(){
	int x,y;
	cin>>x>>y;
	if(y==0){cout<<"NO"<<endl;return 0;}
	if((x==0) && (y==1)){cout<<"YES"<<endl;return 0;}
	if(y==1){cout<<"NO"<<endl;return 0;}
	ll temp = x-y+1;
	if(temp<0){cout<<"NO"<<endl;return 0;}
	if(temp%2==0){cout<<"YES"<<endl;return 0;}
	if(temp%2==1){cout<<"NO"<<endl;return 0;}
	return 0;
	}
	
