#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char a[5],t;
	int n,head_index,tail_index;
	cin>>a;
	n=strlen(a);
    for(head_index=0,tail_index=n-1;head_index<tail_index;head_index++,tail_index--)
    {
    	t=a[head_index];
    	a[head_index]=a[tail_index];
    	a[tail_index]=t;
	}
	cout<<a;
}
