#include <bits/stdc++.h>
using namespace std;

int soduku(){
	vector<string>v;
	for(int i=0;i<9;i++){
		string s;
			cin >> s;
			for (int i=0;i<9;i++) if (s[i] == '2') s[i] = '1';
			cout << s << endl;
		}
	return 0;
	}
int main(){
	int t;
	cin>>t;
	while(t--) soduku();
	return 0;
	}
