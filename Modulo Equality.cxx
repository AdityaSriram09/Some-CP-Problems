#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
typedef long long int ll;
int main(){
	int n,m;
	cin>>n>>m;
	vector<int>a(n,0);
	vector<int>b(n,0);
	int ans=2147483647;
	for(int i=0;i<n;i++){int t;cin>>t;a[i]=t;}
	for(int i=0;i<n;i++){int t;cin>>t;b[i]=t;}
	sort(a.begin(),a.end());
	sort(b.begin(),b.end());
	
	for(int x=0;x<=m;x++){
		vector<int>temp(n,0);
		for(int k=0;k<n;k++)temp[k]=a[k];
		for(int j=0;j<n;j++){ temp[j]=temp[j] + x;temp[j] = temp[j]%m;}
		sort(temp.begin(),temp.end());
		if(temp==b) {ans = x;break;}
		}
		
	cout<<ans<<endl;
	return 0;
	}
	
