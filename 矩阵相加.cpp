#include<iostream>
using namespace std;
int main()
{
	int a[4][4]={3,5,-9,7,27,0,1,11,6,-3,8,2,32,19,-7,64};
	int b[4][4]={-9,-4,3,9,31,1,51,-19,6,29,0,-2,15,7,-39,53};
	int i,j;
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			a[i][j]=a[i][j]+b[i][j];
		}
	} 
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			cout<<a[i][j]<<' ';
		}
		cout<<endl;
	}
	return 0;
}
