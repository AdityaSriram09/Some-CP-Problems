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
	int zcount=0,ocount=0;	
	for(int i=0;i<n;i++){
		if(v[i]==0)zcount++;
		else if(v[i]==1)ocount++;
		}
	if((zcount==n)||(ocount==n)){
		for(int i=0;i<n;i++) cout<<v[i];
		cout<<endl;
		return 0;
		}
	vector<int>right(n,0),left(n,0),distance(n,0);
	int left_index=-1,right_index=-1;
	for(int i=0;i<n;i++) {if(v[i]==1){left_index=i;break;}}
	if(v[0]==1){right[0]=0;left[0]=0;}
	else{
		left[0]=left_index;
		right[0]=left_index;
		} // first element
	for(int i=1;i<n-1;i++){
		if(v[i]==1){left_index=i;left[i]=0;}
		else{
			int count = 0; // counting number of alive neighbours
			if(v[i-1] ==1) count++;
			if(v[i+1] ==1) count++;
			if(count==2) left[i]=-1;
			else if(count<2) left[i] = i-left_index;
				}
			}
	
		
	for(int i=n-1;i>-1;i--){if(v[i]==1){right_index=i;break;}}
	if(v[n-1]==1){right[n-1]=0;left[n-1]=0;}
	else{
		left[n-1]=n-1-right_index;
		right[n-1]=n-1-right_index;
		} // last element
	for(int i=n-2;i>0;i--){
		if(v[i]==1){right_index=i;right[i]=0;}
		else{
			int count = 0; // counting number of alive neighbours
			if(v[i-1] ==1) count++;
			if(v[i+1] ==1) count++;
			if(count==2) right[i]=-1;
			else if(count<2) right[i] = right_index-i;
			}
		}
	for(int i=0;i<n;i++) distance[i]=min(left[i],right[i]);
	for(int i=0;i<n;i++) {
		if((distance[i]<=m)&&(distance[i]>=0)) v[i]=1;
		}
		for(int i=0;i<n;i++) cout<<v[i];
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
	
