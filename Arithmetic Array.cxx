#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int ans(){
	double n;
	double sum = 0;
	cin>>n;
	vector<double>v(n,0);
	for(int i=0;i<n;i++){ 
		cin>>v[i];
		sum = sum+v[i];
		}
	double avg;
	avg = sum/n;
	//cout<<"n: "<<n<<endl;
	//cout<<"sum: "<<sum<<endl;
	//cout<<"AVG: "<<avg<<endl;
	if(avg==1) return 0;
	else if (avg>1) return sum-n;
	else return 1;
	}

int main(){
	int t;
	cin>>t;
	while(t--)
	cout<<ans()<<endl;
	return 0;
	}
	
