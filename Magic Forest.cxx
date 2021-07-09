#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int ans(int n){
	int count = 0;
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			int temp = i^j;
			if((temp >= j)&&((i+j)!=temp)&&(temp<=n)){ //cout<<i<<" "<<j<<" "<<temp<<endl;
				count++;}
			}
		}
	return count;
	}

int main(){
	int n;
	cin>>n;
	cout<<ans(n)<<endl;
	return 0;
	}
	
