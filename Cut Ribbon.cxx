#include <bits/stdc++.h>
using namespace std;
int maximum(int a,int b,int c){
	int temp;
	if(a>b) temp = a;
	else temp = b;
	if(c>temp) temp = c;
	return temp;
	}

int main(){
	int n,a,b,c;
	cin>>n>>a>>b>>c;
	int sum = a + b + c;
	vector<int>v(n+1,0);
	int m = maximum(a,b,c);
	v[a] = 1;v[b] = 1;v[c] = 1;
	for(int i=1;i<n+1;i++){
		if(i-m>=0) v[i] = maximum(v[i-a]+1,v[i-b]+1,v[i-c]+1);
		else if((i>=a)&&(i>=b)&&(i-c<0)) v[i] = maximum(v[i-a]+1,v[i-b]+1,0);
		else if((i>=a)&&(i<b)&&(i-c>=0)) v[i] = maximum(v[i-a]+1,v[i-c]+1,0);
		else if((i<a)&&(i>=b)&&(i-c>=0)) v[i] = maximum(v[i-c]+1,v[i-b]+1,0);
		else if((i>=a)&&(i<b)&&(i-c<0)) v[i] = v[i-a]+1;
		else if((i<a)&&(i>=b)&&(i-c<0)) v[i] = v[i-b]+1;
		else if((i<a)&&(i<b)&&(i-c>=0)) v[i] = v[i-c]+1;
		}
	cout<<v[n];
	return 0;
	}
