#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);  
}
int ans(){
	int n;
	cin>>n;
	int even =0;
	vector<int>v(n,0),a;
	for(int i=0;i<n;i++){ 
		cin>>v[i];
		if(v[i]%2!=0){
                if(v[i]!=1){
                  a.push_back(v[i]);
                }
            }
            else{
                even++;
            }
		}
	ll ans=0;
        while(even--){
            ans+=n-1;
            n-=1;
        }
	sort(a.begin(),a.end());
	for(int i=0;i<a.size();i++){
		for(int j=i+1;j<a.size();j++){
			if( gcd(a[i],2*a[j]) >1)ans++;
			}		
		}
		return ans;
	}
	
int main(){
	int t;
	cin>>t;
	while(t--)
	cout<<ans()<<endl;
	return 0;
	}
	

