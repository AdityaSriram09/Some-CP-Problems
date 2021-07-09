#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >>t;
	for(int i=0;i<t;i++){
		int n;
		cin>>n;
		string s,phrase;
		phrase = "YES";
		cin >>s;
		vector<int>v(127,0);
		char c;c=s[0];
		//c=c-65;							//first value
		v[c] = 1;
		for(int i=0;i<n-1;i++){
			char temp;temp = s[i];
			//temp = temp-65;
			if((v[temp]== 0) || (v[temp] == 1)){
				if(s[i]!=s[i+1]) v[temp] = 2;
			}
			else {
				phrase = "NO";
			}
		}
		char temp;temp = s[n-1];
		//temp = temp-65;					//last value
		if(v[temp]== 2){
			phrase = "NO";
		}
		cout <<phrase<<"\n";
	}
	
	return 0;
	}
