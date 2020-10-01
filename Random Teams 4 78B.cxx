#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <algorithm>
#include <bitset>
using namespace std;
int pick(int,int);
int main(){
	int n,m,t,k,min,max;
	vector<int>mincount;
	cin >> n>>m;
	t=n-m+1;
	max=pick(t,2);
	t=n/m;
	k=pick(t,2);
	min=k*(m-1);
	if(n%m==0) min=min+k; 
	else min=min+(pick(t+(n%m),2));
	cout << min<<' '<<max;
	return 0;
	}
	
int pick(int a,int b){
	int c;
	c=(((a)*(a-1))/2);
	return c;
	}
