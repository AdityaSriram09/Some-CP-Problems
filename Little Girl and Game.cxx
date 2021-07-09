#include <bits/stdc++.h>
using namespace std;


int main(){
	string s;
	cin>>s;
	int n = s.size();
	int arr[27] = {0};
	for(int i=0;i<n;i++){
		int temp = s[i] - 96;
		arr[temp]++;
		}
	int odd = 0; //number of letters which are in odd number frequency
	for(int i=1;i<27;i++) if(arr[i]%2 == 1) odd++;
	if(odd<=1) cout<<"First"<<endl;
	else{
	if(odd%2 == 0) cout<<"Second"<<endl;
	else cout<<"First"<<endl;
	}
	
	return 0;
	}
