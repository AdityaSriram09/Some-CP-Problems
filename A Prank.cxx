#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
	ll n,count=0;
	cin>>n;
	vector<int>v(n,0);
	for(int i=0;i<n;i++) cin>>v[i];
	for(int i=0;i<n-1;i++){
		 if(v[i+1] - v[i] == 1) count++;
		}
		if(count<n-1) count = count-1;
	cout<<count<<endl;
	return 0;
	}
