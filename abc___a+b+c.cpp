#include<iostream>
using namespace std;
int main()
{
	int m,b,s,g;
	cin>>m;
	g=m%10;
	s=m/10%10;
	b=m/100%10;
	cout<<100*g+10*s+b<<endl;
	
	return 0;
}
