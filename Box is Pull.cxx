#include <bits/stdc++.h>
using namespace std;
long long int min(long long int a,long long int b){
	if(a>b) return b;
	else return a;
	}
long long int ans(){
	long long int x1,x2,y1,y2;
	cin >>x1>>y1>>x2>>y2;
	long long int a = abs(x2-x1);
	long long int b = abs(y2-y1);
	long long int path = 0;
	if(a==0) path = b;
	else if(b==0) path = a;
	else path = 2 + a + b;
	return path;
	}
	
int main(){
	int t;
	cin >> t;
	while(t--) cout<<ans()<<endl;
	return 0;
	}
