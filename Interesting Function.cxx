#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int ans(){
	int l,r;
	cin>>l>>r;
	int a = 0;
	while((l!=0)||(r!=0)){
		a = a + (r-l);
		l = l/10;
		r = r/10;
		
		}
		return a;
	}

int main(){
	int t;
	cin>>t;
	while(t--)
	cout<<ans()<<endl;
	return 0;
	}
	
