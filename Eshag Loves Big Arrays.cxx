#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int>v;
		for(int i=0;i<n;i++){
			int temp; cin>>temp;
			v.push_back(temp);
			}
		int small = 2147483647;
		int count = 0;
		for(int i=0;i<n;i++){
			if(small>v[i]) small = v[i];
			}
		for(int i=0;i<n;i++){
			if(small==v[i]) count++;
			}
			cout<<n-count<<endl;	
		}
	
	}
