#include<iostream> 
using namespace std;
class jisuan
{
	private:
		int x;
	public:
		void setx(int n);
		int jiecheng(int k);
		int plus(int k);
};
void jisuan::setx(int n)
{
	x=n;
}
int jisuan::jiecheng(int k)
{
	int a=1;
	for(int i=1;i<=k;i++)
	{
		a=a*i;
	}
	return a;
}
int jisuan::plus(int k)
{
	int i,sum=0;
	for(i=1;i<=k;i++)
	{
		sum+=jiecheng(i);
	}
	return sum;
}
int main()
{
	jisuan suan;//สตภýปฏ 
	int n,jieguo;
	cin>>n;
	suan.jiecheng(n);
	jieguo=suan.plus(n);
	cout<<jieguo;
	return 0;
}
