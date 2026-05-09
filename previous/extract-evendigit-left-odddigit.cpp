#include<iostream>
using namespace std;
int fun(int x)
{
	if(x<100)return x%10;
	else return fun(x/100)*10+x%10;
}
int main()
{
	cout<<(fun(132645))<<endl;
	return 0;
 } 
