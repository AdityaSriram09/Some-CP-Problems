#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <algorithm>
#include <map>
#include <bitset>
using namespace std;
int main(){
	int n,m;
	cin >>n>>m;
	map<string,string>word;
	for(int i=0;i<m;i++){
		string l,s,t;
		cin>>l>>s;
		if(l.size()>s.size()) t=s;
		else t=l;
		word[l]=t;
		word[s]=t;
		}
	for(int i=0;i<n;i++){
		string s;
		cin >> s;
		cout << word[s] << ' ';
	}
	return 0;
}
