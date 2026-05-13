#include<iostream>
using namespace std;
int main()
{
	int a[8][8];
	int i,j;	
	for(i=0;i<8;i++)
	{
		for(j=0;j<=i;j++)
	    {
		    if(j==0||i==j)
		      a[i][j]=1;
		    else  
			  a[i][j]=a[i-1][j-1]+a[i-1][j];
	    }
    }
    for(i=0;i<8;i++)
	{
		for(j=0;j<=i;j++)
	    {
		    cout<<a[i][j]<<'\t';
	    }
	    cout<<endl;
    }
    return 0;	
}
