#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <bits/stdc++.h> 
using namespace std;
int main()
{
	int t,n;
	cin >> t;
	for(int i=0; i< t ;i++){
		cin >> n;
		if(n <= 30){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
            if(n == 36 || n == 40 || n == 44){
                cout << 6 << ' ' << 10 << ' ' << 15 << ' ' << n - 31 << endl;
            }
            else{
                cout << 6 << ' ' << 10 << ' ' << 14 << ' ' << n - 30 << endl;
            }
        }
	}
	return 0;
}

