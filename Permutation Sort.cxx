#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >>t;
	for(int i=0;i<t;i++){
		int n;
		cin >> n;
		vector<int>v;
		for(int i=0;i<n;i++){int temp;cin>>temp;v.push_back(temp);}
		int count = 0;
		for(int i=0;i<n-1;i++){
			if(v[i]<v[i+1]) continue;
			else count++;
			}
		if(count == 0){cout<<0<<"\n";continue;}
		else if((count >=1)&&((v[0]==1)||(v[n-1]==n))){cout<<1<<"\n";continue;} 
		else if(count == 1){cout<<1<<"\n";continue;} 
		else {cout<<2<<"\n";continue;}
		}
	
	return 0;
	}
