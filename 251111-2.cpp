#include<fstream>
#include<iostream>
using namespace std;
int main()
{
	ifstream inf("in.txt");
	ofstream ouf("out.txt");
	int a,n,s=0;
	while(inf>>a>>n)
	{
		s=0;
		int x=0;
		for(int i=1;i<=n;i++)
		{
		   x=a+10*x;
		   s=s+x;
		}
		cout<<s<<endl;
		ouf<<s<<endl;
	}
	inf.close();
	ouf.close();
	return 0;
}
