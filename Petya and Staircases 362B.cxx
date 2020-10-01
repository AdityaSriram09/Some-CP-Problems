#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <algorithm>
#include <bitset>
using namespace std;
int main(){
	int n,d;
	cin >> n>>d;
	vector<int>dirty;
	if(d>0){
	for(int i=0;i<d;i++){
		int t;
		cin >> t;
		dirty.push_back(t);
		}
		sort(dirty.begin(),dirty.end());
	
	if ((dirty[0] == 1) || (dirty[d - 1] == n))
    {
                    cout << "NO" << endl;
                    return 0;
    }
	for (int i = 0; i < d - 2; ++i){
        if (dirty[i] + 1 == dirty[i + 1] && dirty[i + 1] + 1 == dirty[i + 2])
        {
                cout << "NO"<<endl;
                return 0;
        }}
	 cout << "YES"<<endl;
	return 0;
	}
	cout<<"YES"<<endl;
}
