
#include <bits/stdc++.h>
using namespace std;


string ShortestSubsequenceNotPresent()
{
	vector<string>s;
	string shortestString,str;
	int N = str.length();
	cin>>N;
	cin>> str;
	unordered_set<char> subsegments;
	for (int i = 0; i < N; i++) {
		subsegments.insert(str[i]);
		if (subsegments.size() == 26) {
			shortestString.push_back(str[i]);
			subsegments.clear();
		}
	}

	for (char ch = 'a'; ch <= 'z'; ch++) {
		if (subsegments.count(ch) == 0) {
			string temp = shortestString;
			temp.push_back(ch);
			s.push_back(temp);
		}
	}
	s.push_back(shortestString);
	sort(s.begin(),s.end());
	return s[0];
}


int main()
{
	int t;
	cin>>t;
	while(t--)
	cout<<ShortestSubsequenceNotPresent()<<endl;
	return 0;
}
