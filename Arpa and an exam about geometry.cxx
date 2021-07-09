#include <bits/stdc++.h>
using namespace std;

int main(){
	long long int ax,ay,bx,by,cx,cy;
	cin >>ax>>ay>>bx>>by>>cx>>cy;
	long long int  area;
	long long int a = (ax*by) + (bx*cy) + (cx*ay);
	long long int b = (bx*ay) + (cx*by) + (ax*cy);
	area = abs(a-b);
	//area = area/2;
	if(area==0){ cout<<"No"<<endl;return 0;}
	// AB = BC
	double AB,BC,temp1,temp2;
	temp1 = (ax-bx)*(ax-bx);
	temp2 = (ay-by)*(ay-by);
	AB = sqrt(temp1+temp2);
	temp1 = (cx-bx)*(cx-bx);
	temp2 = (cy-by)*(cy-by);
	BC = sqrt(temp1+temp2);
	if(AB == BC){ cout<<"Yes"<<endl;return 0;}
	else cout<<"No"<<endl;
	return 0;
	}
