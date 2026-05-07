#include<iostream>
using namespace std;
int fibo(int);
int main()
{
	int a;
	cin>>a;
	cout<<fibo(a);
	return 0;	
} 
int fibo(int m)
{
	if(m==0)return 0;
	if(m==1)return 1;
	else return fibo(m-1)+fibo(m-2);	
} 
