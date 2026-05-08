#include<iostream>
using namespace std;
class score
{
	private:
		double a;
		double b;
		double c;
	public:
		void set(double d,double  e,double f)
		{
			a=d;
			b=e;
			c=f;
		}
		double sum()
		{
			return a+b+c;
		}
		double aver()
		{
			return (a+b+c)/3;
		}
};
int main()
{
	score c1;
	c1.set(70,80,90);
	cout<<c1.sum()<<endl;
	cout<<c1.aver()<<endl;
	return 0;
	
	
	
}
