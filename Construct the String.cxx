#include <bits/stdc++.h>
using namespace std;

int ans(){
	int a,b,n;
	cin>>n>>a>>b;
	for (int i = 0; i < n; ++i) {
			cout << char('a' + i % b);
		}
		cout<<endl;
	return 0;
	}
int main(){
	int t;
	cin>>t;
	while(t--) ans();
	return 0;
	}
