#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >>t;
	for(int i=0;i<t;i++){
		int a,b;
		cin>>a>>b;
		int x,y,z;
		x = a*b;y = a*(b-1);z = a;
		cout << "YES"<<"\n";
		cout <<z<<" "<<y<<" "<<x<<"\n";
	}
	
	return 0;
	}
