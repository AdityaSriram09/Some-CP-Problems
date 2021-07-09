#include <bits/stdc++.h>
#include<algorithm>
using namespace std;
typedef long long int ll;
int main(){
	ll n;
	vector<ll>a;
	cin>>n;
	for(int i=0;i<n;i++){
		int temp;
		cin>>temp;
		a.push_back(temp);
		}
	vector<ll>left,right,ans;
	ll index;
	for(int i=0;i<n;i++){if(a[i]==0) {index = i;break;}}
	for(int i=0;i<n;i++){
		if(a[i]==0){left.push_back(0);index = i;}
		else{
			left.push_back(abs(index - i));
			}
		}
	for(int i=n-1;i>-1;i--){if(a[i]==0) {index = i;break;}}
	for(int i=n-1;i>-1;i--){
		if(a[i]==0){right.push_back(0);index = i;}
		else{
			right.push_back(abs(index - i));
			}
		}
	for(int i=0;i<n;i++){
		if(a[i]==0){ans.push_back(0);continue;}
		ll temp = min(left[i],right[i]);
		ans.push_back(temp);
		}
		for(int i=0;i<n;i++) cout<<ans[i]<<" ";
		cout<<endl;
	return 0;
	}
