#include<iostream>
using namespace std;
int max(int ,int );
int main()
{
	int m,n,c;
	cin>>m>>n;
	c=max(m,n);
	cout<<c;
	return 0;
} 
 
 int max(int a,int b)
 {
 	int i;
 	i=a>b?a:b;
    return i;
 }
