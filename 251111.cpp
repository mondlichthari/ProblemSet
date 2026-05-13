#include<iostream>
using namespace std;
int fan(int a)
{
	int s=0;
	if(fan(a)==0)
	   return s;
	else 
	   s=fan(a/10)+s*10;
	return s;
}
int main()

{
	int a;
	cin>>a;
	cout<<fan(a)<<endl;
	return 0;
}
