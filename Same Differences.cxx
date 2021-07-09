#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >>t;
	for(int i=0;i<t;i++){
		int n;
		cin >> n;
		vector<int> v;
		for(int j=0;j<n;j++){
			int temp;
			cin>>temp;
			v.push_back(temp);
			}
			int count =0;
		for(int j=0;j<n;j++){
			for(int k=j+1;k<n;k++){
				if(v[k]-v[j]==k-j) count ++;
				}
			}
			cout << count <<"\n";
	}
	
	return 0;
	}
