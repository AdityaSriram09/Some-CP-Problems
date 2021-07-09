#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >>t;
	for(int i=0;i<t;i++){
		int k;
		cin >> k;
		int g = gcd(k,100-k);
		int a = k/g;
		int b = (100-k)/g;
		int ans = a+b;
		cout << ans<<"\n";
		}
	
	return 0;
	}

int gcd(int a, int b)
{
	if (b == 0)
		return a;
	return gcd(b, a % b);
	
}
