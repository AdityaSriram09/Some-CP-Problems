#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,m;
	cin>>n>>m;
	int sum = n*(n+1);
	sum = sum/2;
	m = m % sum;
	int i= 1;
	while(i){
		if((m==n)&&(i==n)){ m=m-n;i=1;}
		else if(i <= m){ m = m-i;i++;}
		else break;
		}
	cout<<m<<endl;
	return 0;
	}
