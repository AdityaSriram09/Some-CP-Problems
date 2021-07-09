#include <bits/stdc++.h>
using namespace std;
int main(){
	int n; 
	cin >> n;
	bitset<10000>left;
	bitset<10000>right;
	for(int i=0;i<n;i++) {
		int temp;
		cin >> temp ;
		left[i] = temp;
		cin >> temp;
		right[i] = temp;
		}
	int left_open,right_open,ltime,rtime;
	left_open = left.count();
	right_open = right.count();
	if(left_open < n-left_open) ltime = left_open;
	else ltime = n-left_open;
	if(right_open < n-right_open) rtime = right_open;
	else rtime = n-right_open;
	cout << rtime+ltime;
	return 0;
	}
