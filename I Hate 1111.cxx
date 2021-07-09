#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
string ans(){
	int x;
	cin>>x;
	if(x%11==0) return "YES";
	if(x%111==0) return "YES";
	int q = x/111;
	for(int i=0;i<=q;i++){
		int temp = x-(i*111);
		if(temp%11==0)return "YES";
		}
	return "NO";
	}
int main(){
	int t;
	cin>>t;
	while(t--) cout<<ans()<<endl;
	return 0;
	}

	
