#include <bits/stdc++.h>
using namespace std;

int ceiling(int t){
	int temp;
	if(t%2!=0) t++;
	temp = t/2;
	return temp;
	}
int main(){
	int n,m;
	cin >> n>>m;
	int temp = ceiling(n);
	int i=-1;
	for(i = temp;i<=n;i++) if(i%m==0){ cout<<i;return 0;}
	cout<<-1;
	return 0;
	}
