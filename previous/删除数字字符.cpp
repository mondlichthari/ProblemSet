#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char a[13];
	cin.getline(a,13);
	int i=0;
	while(a[i])
	{
		if(a[i]>='0'&&a[i]<='9')
		{
			strcpy(a+i,a+i+1);
			i--;
		}
		i++;
	}
	cout<<a<<endl;
	return 0;
}
