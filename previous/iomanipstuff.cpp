#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	/*int a=8,b=10;
	cout.setf(ios::left);
	cout.width(5);    
	cout<<a<<endl;
	cout.unsetf(ios::left);
	cout.setf(ios::right);
	cout.width(5);
	cout<<b<<endl;
	return 0;*/
	/*float x=123.4;
	cout.setf(ios::scientific);
	cout<<x<<endl;
	cout.setf(ios::fixed);
	cout<<x<<endl;*/
	/*float x=1234567.8;
	cout.precision(4);
	cout<<x<<endl;
	cout<<setprecision(3);
	cout<<x<<endl;
	return 0;*/
	float x=123.4;
	cout.width(10);
	cout.fill('@');
	cout<<x<<endl;
	return 0;
}
 
