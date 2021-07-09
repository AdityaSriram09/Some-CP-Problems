#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		string s;
		cin>>s;
		int zero = 0;
		for(int i=0;i<n;i++){
			if(s[i] == '0') zero++;
			}
		if((zero%2==0)||(zero==1))cout<<"BOB"<<endl;
		else cout<<"ALICE"<<endl;
		}
	return 0;
	}
