#include<iostream> 
using namespace std;
int max(int,int);
int main()
{
	int a,b,c;
	cin>>a>>b>>c;
	cout<<"the biggest nummber is "<<max(max(a,b),c)<<endl;
	return 0;
}
int max(int m,int n)
{
	return m>n?m:n;
}
