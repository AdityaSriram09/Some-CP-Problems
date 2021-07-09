#include <bits/stdc++.h>
using namespace std;

int main(){
	int a,b,n;
	cin>>a>>b>>n;
	int flag = -1;
	string s(n-1,'0');
	for(int i=0;i<=9;i++){
		int a1 = a*10;
		a1 = a1+i;
		if(a1%b==0){flag=1;cout<<a1<<s<<endl;return 0;}
		}
		cout<<flag<<endl;
	return 0;
	}
