#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
	vector<int>v(6,0);
	string s;
	int ans = 6;
	cin>>s;
	//int first3,last3
	//first3 = (s[5]-48) + (s[4]-48) + (s[3]-48) - 144;
	//last3 = (s[0]-48) + (s[1]-48) + (s[2]-48) - 144;
	for(int A = 0;A<10;A++){
	for(int B = 0;B<10;B++){
	for(int C = 0;C<10;C++){
		int p = A+B+C;
	for(int D = 0;D<10;D++){
	for(int E = 0;E<10;E++){
	for(int F = 0;F<10;F++){
		int q = D+E+F;
		if(p==q){
			int swap = 0;
			v[0]=A;v[1]=B;v[2]=C;v[3]=D;v[4]=E;v[5]=F;
			for(int i=0;i<6;i++){
				if((s[i]-48)!=v[i]) swap++;
				}
				ans = min(ans,swap);
				if(ans==0){cout<<0<<endl;return 0;}
				
			}
	}
	}
	}
	}
	}
	}
	cout<<ans<<endl;
	return 0;
	}
