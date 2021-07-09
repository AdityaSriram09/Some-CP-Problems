#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int ans(){
	int n,q;
	cin>>n>>q;
	vector<int>v(n,0),sum(n,0);
	for(int i=0;i<n;i++) cin>>v[i];
	sort(v.begin(),v.end(),greater<int>());
	sum[0] = v[0];
	for(int i=1;i<n;i++) sum[i] = sum[i-1] + v[i];
	//for(int i=0;i<n;i++) cout<<sum[i]<<" ";
	//cout<<endl;
	int tot = 0;
	for(int i=0;i<q;i++){
		int l,r;
		cin>>l>>r;
		int temp = abs(l-r);
		if(l==r) {tot = tot + v[0];}
		else {tot = sum[temp] + tot;}
		}
		return tot;
	}
	
int main(){
	cout<<ans();
	return 0;
	}
	
