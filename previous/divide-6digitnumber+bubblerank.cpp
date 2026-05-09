#include<iostream>
#include<cstring>
using namespace std;
void bubble(int b[],int n);
int main()
{
	int a;
	cin>>a;
	int b[6],i=0;
	while(a)
	{
		b[i]=a%10;
		a=a/10;
		i++;
	}
	bubble(b,6);
	for(int j=0;j<6;j++)
	{
		cout<<b[j];
	}
	return 0;
}
void bubble(int b[],int n)
{
	int i,j,t;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(b[j]<b[j+1])
			{
				t=b[j];
				b[j]=b[j+1];
				b[j+1]=t;
			}
		}
	}
}
