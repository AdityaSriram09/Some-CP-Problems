#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

string ans(){
		int s[4];
		cin >>s[0]>>s[1]>>s[2]>>s[3];
		int w1,w2,m1,m2;
		w1 = max(s[0],s[1]);
		w2 = max(s[2],s[3]);
		int n = sizeof(s) / sizeof(s[0]);
		sort(s, s + n);		
		m1 = s[3];
		m2 = s[2];
		int count = 0;
		if((m1 == w1)||(m1==w2)) count++;
		if((m2 == w1)||(m2==w2)) count++;
		if(count==2) return "YES";
		else return "NO";		
	}
	
int main(){
	int t;
	cin>>t;
	while(t--)
	cout<<ans()<<endl;
	return 0;
	}
	

