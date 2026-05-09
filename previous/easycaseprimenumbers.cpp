#include<iostream>
using namespace std;
int fun(int m)
{
	int i;
	if(m==2||m==3) return 1;
	if(m<2||m%2==0) return 0;
	for(i=3;i<m;i++)
	   if(m%i==0) return 0;
	return 1;   
}
int main()
{
    int n;
    for(n=1;n<10;n++)
    if(fun(n)==1) cout<<n;
    cout<<'\n';
    return 0;
}
