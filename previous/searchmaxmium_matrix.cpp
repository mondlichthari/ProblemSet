#include<iostream>
using namespace std;
int main()
{
	int a[3][4]={1,2,3,4,5,6,72,8,9,10,11,12};
	int i,j;
	int row=0,colum=0;
	int max=a[0][0];
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
		  if(a[i][j]>max)
		  {
		  	max=a[i][j];
		  	row=i+1;
		  	colum=j+1;
		  }	
		}	
    }
	cout<<max<<' '<<row<<' '<<colum;
		cout<<a<<endl<<&a[0];
	return 0;
}
