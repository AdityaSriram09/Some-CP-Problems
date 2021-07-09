#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
	int t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		vector<ll>v(2*n,0),ans(2*n,0);
		for(int i =0;i<2*n;i++)cin>>v[i];
		sort(v.begin(),v.end());
		ll index  =0;
		for(ll i=0;i<2*n;i+=2){ans[i]=v[index++];}
		for(ll i=1;i<2*n;i+=2){ans[i]=v[index++];}		
		for(ll i=0;i<2*n;i++)cout<<ans[i]<<" ";
		cout<<endl;		
		}
	return 0;
	}
	
