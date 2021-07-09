#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int ans(){
	string s;
	cin>>s;
	string temp = s;
	
	// For white
	int count = 0;
	for(int i=0;i<s.size()-1;i++){
		if(temp[i] == 'W') continue;
		else {
			temp[i]='W';
			if(temp[i+1]=='W') temp[i+1] = 'B';
			else temp[i+1] = 'W';
			count++;
			}
		}
		int flag=0;
	for(int i=0;i<s.size();i++){
		if(temp[i]=='W') flag++;
		}		
	if(flag==s.size()){}
	
	// For Black
	temp = s;
	count = 0;
	for(int i=0;i<s.size()-1;i++){
		if(temp[i] == 'B') continue;
		else {
			temp[i]='B';
			if(temp[i+1]=='B') temp[i+1] = 'W';
			else temp[i+1] = 'B';
			count++;
			}
		}
		flag=0;
	for(int i=0;i<s.size();i++){
		if(temp[i]=='B') flag++;
		}		
	if(flag==s.size()) return count;
	return -1;
	}

int main(){
	int n;
	cin>>n;
	cout<<ans()<<endl;
	return 0;
	}
	
