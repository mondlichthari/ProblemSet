#include<iostream>
using namespace std;
int main()
{
	int m,n,k,t;
	cin>>m>>n;
	if(m<n)
	{
		t=m;
		m=n;
		n=t;
	}
	do
	{
		k=m%n;
		m=n;
		n=k;
	}while(k!=0);
	cout<<m<<endl;
	return 0;
}
