#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
	int n;
	cin>>n;
	vector<ll>v(n,0);
	for(int i=0;i<n;i++) cin>>v[i];
	sort(v.begin(),v.end(),greater<ll>());
	//for(int i=0;i<n;i++) cout<<v[i]<<" ";
	//cout<<endl;
	 ll sum=0;
	 if(v[0]<0){cout<<0<<endl;return 0;}
	 sum = v[0];
	 int count = 1;
	 for(int i=1;i<n;i++){
		 if(sum+v[i]>=0){
			 sum = sum+v[i];
			 count++;
			 }
		else break;
		 }
	cout<<count<<endl;
	return 0;
	}
	
