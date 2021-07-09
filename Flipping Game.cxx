#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
	int n;
	cin>>n;
	int ans=0;
	vector<int>v(n,0);
	for(int i=0;i<n;i++) {cin>>v[i];}//input v[i]
	
	
	for(int i=0;i<n;i++){
		
		for(int j=i;j<n;j++){
			vector<int>temp(n,0);
			for(int t=0;t<n;t++) temp[t]=v[t];	//initialising temp
			
			int count=0;						//count of number of 1s
			for(int t=i;t<=j;t++) temp[t] = 1-temp[t];//flipping all in [i,j]
			for(int t=0;t<n;t++){
				if(temp[t]==1) count++;			//counting number of 1s
				//cout<<temp[t]<<" ";
				}
			//cout<<endl;
			ans = max(count,ans);
			
			}//end of j loop
		}//end of i loop
		cout<<ans<<endl;
	return 0;
	}
	
