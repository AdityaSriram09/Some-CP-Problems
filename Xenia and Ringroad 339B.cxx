#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <algorithm>
#include <bitset>
using namespace std;
int main(){
	long long int n,m,prepos,t;
	t=0;
	cin >> n>>m;
	vector<long long int>v;
	for(long long int i=0;i<m;i++){
		long long int j=0;
		cin >> j;
		v.push_back(j);
		}
	prepos=1;
	long long int i=0;
	while(m){
		if(v[i]<prepos){ t=t+(n-prepos+1);prepos=1;}
		t=t+(v[i]-prepos);
		prepos=v[i];
		m--;i++;
		}	
		cout << t;
		return 0;
	}
