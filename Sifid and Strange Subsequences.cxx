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
	sort(v.begin(),v.end()); // sorted
	if((v[0]>0)||(n==1)){cout<<1<<endl;continue;} // no zeroes
	int in = 0; 						// index of last zero
	int zcount = 0;						// Number of zeroes
	int firstz = 0;						// first zero
	for(int i=0;i<n;i++){ if(v[i]==0) firstz = i;break;} 
	for(int i=0;i<n;i++){ if(v[i]==0) in = i;zcount++;}
	int tot = in+1; 					// # of 0 + -ve numbers
	if(v[0] == 0) {
		if((in == n-1)||(zcount>1)){ cout<<zcount<<endl;continue;} // All are 0's or more than one zero
		else { cout<<zcount+1<<endl;continue;}
		}
	if(zcount==1){
		if((abs(v[firstz-1])>=v[in+1])&&(in!=n-1)&&(firstz!=0)){
			if((v[firstz-2]==v[firstz-1])&&(firstz!=1)){cout<<tot<<endl;continue;}
			else{cout<<3<<endl;continue;}
			}
		else{tot = max(tot,zcount+1);}
		 }
	if(zcount>1){cout<<tot<<endl;cout<<tot<<endl;continue;}
	}
	return 0;
}
