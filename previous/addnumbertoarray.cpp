#include<iostream>
using namespace std;
int main()
{
	int a[6]={1,3,5,7,9};
	int t,i,j;
	cin>>t;
	for(i=0;i<5;i++)
	{
		if(a[i]>=t)
		break;
	}
	for(j=4;j>=i;j--)
	{
		a[j+1]=a[j];
	}
	for(i=0;i<6;i++)cout<<a[i]<<endl;

	return 0;
}
