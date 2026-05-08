#include<iostream>
using namespace std;
int main()
{
    int a[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    int i,j,sum=0;
    for(i=0;i<4;i++)
    {
    	for(j=0;j<4;j++)
    	{
    		if(i==j||i+j==3)
    		{
    			sum+=a[i][j];
			}
		}
    	
	}
	cout<<sum<<endl;
	return 0;
} 
