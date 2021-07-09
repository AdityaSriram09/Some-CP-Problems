#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
	int t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		ll a[n];
		for(int i=0;i<n;i++) cin>>a[i];
		cout<<3*n<<endl;
		for(int i=0;i<n;i+=2){
			cout<<"2 "<<i+1<<" "<<i+2<<endl;
			cout<<"1 "<<i+1<<" "<<i+2<<endl;
			cout<<"2 "<<i+1<<" "<<i+2<<endl;
			cout<<"1 "<<i+1<<" "<<i+2<<endl;
			cout<<"2 "<<i+1<<" "<<i+2<<endl;
			cout<<"1 "<<i+1<<" "<<i+2<<endl;
		}
	}
	return 0;
}
