#include<iostream>
using namespace std;
int zheng(int m)
{
	return m;
}
int fan(int m)
{
	int n;
	for(n=0;m>0;m=m/10)
    n=n*10+m%10;
    return n;
}
int main()
{
	int x;
	cin>>x;
	cout<<zheng(x)<<endl;
	cout<<fan(x);
	return 0;
}
