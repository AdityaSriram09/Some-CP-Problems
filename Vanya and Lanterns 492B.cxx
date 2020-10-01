#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <algorithm>
#include <bitset>
using namespace std;
int main(){
	int n,l,r=0;
	cin >> n>>l;
	vector<int>v;
	for(int i=0;i<n;i++){
		int t=0;
		cin >> t;
		v.push_back(t);
		}
	sort(v.begin(),v.end());
	r = max(v[0], l - v[n - 1]) * 2;
	for(int i=1;i<n;i++){
		int t;
		t=v[i]-v[i-1];
		r=max(r,t);
		}
		cout.precision(20);
		cout << r/2.0;
		
	return 0;
}
