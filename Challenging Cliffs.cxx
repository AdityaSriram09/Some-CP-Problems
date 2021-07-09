#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int ans(){
	int n;
	cin>>n;
	vector<int>v(n,0);
	for(int i=0;i<n;i++)cin>>v[i];	
	int min_num=INT_MAX,index;
	sort(v.begin(),v.end());
	for(int i=0;i<n-1;i++){
		int temp;
		temp = abs(v[i]-v[i+1]);
		if(temp<min_num){
			min_num = temp;
			index = i;
			}
		}
	int num1=v[index],num2=v[index+1];
	cout<<num1<<" ";
	for(int i=index+2;i<n;i++){
		cout<<v[i]<<" ";
		}
	for(int i=0;i<index;i++){
		cout<<v[i]<<" ";
		}	
	cout<<num2<<" "<<endl;
	return 0;
}
int main(){
	int t;
	cin>>t;
	while(t--)
	ans();
	return 0;
	}
	
