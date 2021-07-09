#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int ans(){
	int n,m;
	cin>>n>>m; 
	string temp;
	cin>>temp;
	vector<int>v(n,0);
	for(int i=0;i<n;i++){
		if(temp[i]=='1') v[i]=1;
		else if(temp[i]=='0') v[i]=0;
		}
		//for(int i =0;i<n;i++)cout<<v[i];
		//cout<<endl;
	while(m--){	
	vector<int>s = v; 									// s is the temporary string
	if(v[1] == 1) s[0] = 1;	// 0th element
	for(int i=1;i<n-1;i++){
		int count = 0; // counting number of alive neighbours
		if(v[i]==0){
			if(v[i-1] ==1) count++;
			if(v[i+1] ==1) count++;
			}
		if(count == 1) s[i]	= 1;
		}
	if(v[n-2] == 1) s[n-1] = 1;	// last element
		if(v==s)break;
		v = s;
		} // end of m loop
//	for(int i=0;i<n;i++)cout<<v[i];
//v.pop_back();
	//for(int i =0;v[i]!='\0';i++)cout<<v[i];
//	cout<<v;
for(int i =0;i<n;i++)cout<<v[i];
cout<<endl;
	return 0;
	}
	
int main(){
	int t;
	cin>>t; // input t
	while(t--){
		ans();
		}
	return 0;
	}
	
