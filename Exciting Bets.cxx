#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
     
}
int ans(){
	ll a,b;
	cin>>a>>b;
	if(a==b){cout<<0<<" "<<0<<endl;return 0;}
	ll ex;
	ex = abs(a-b);
	ll moves = a%ex;
	moves = min(moves, ex- moves);
	cout<<ex<<" "<<moves<<endl;
	return 0;
	}

int main(){
	int t;
	cin>>t;
	while(t--)
	ans();
	return 0;
	}
	
