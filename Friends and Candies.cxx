#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int ans(){
	ll n;
	cin>>n;
	
	vector<int>v(n,0);
	ll sum = 0;
	for(int i=0;i<n;i++){ cin>>v[i];}
	if(n==1) return 0;
	for(int i=0;i<n;i++){ sum = sum + v[i];}
	//cout<<"sum:"<<sum<<endl;
	//cout<<"n:"<<n<<endl;
	int num = sum%n;
	//cout<<"num:"<<num<<endl;
	if(num!=0) return -1;
	ll temp = sum/n;		// average for each ele
//	cout<<"temp:"<<temp<<endl;
	sort(v.begin(),v.end());
	int k=0;
	for(int i=n-1;i>-1;i--){
	 //   cout<<v[i]<<" ";
		if(v[i]<=temp) return k;
		k++;
		}
	return n-1;
	}

int main(){
	int t;
	cin>>t;
	while(t--)
	cout<<ans()<<endl;
	return 0;
	}
	
