#include<iostream>
using namespace std;
class compute
{
	private:
		int x,y;
	public:
		void setxy(int a,int b);
		int gys();
		int gbs();
};
void compute::setxy(int a,int b)
{
	x=a;y=b;
}
int compute::gys(int a,int b)
{
    while(b!=0)
    {
        int t=a%b;
        a=b;
        b=t;
    }
    return a;   
}
int compute::gbs(int a,int b)
{
    return a/gys(a,b)*b;   
}
int main()
{
	compute com;
	int a,b;
	cin>>a>>b;
	com.setxy(a,b);
	cout<<com.gbs(a,b)<<endl;
	cout<<com.gys(a,b);
	return 0;
}
