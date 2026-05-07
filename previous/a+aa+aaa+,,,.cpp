#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ifstream inf("in.txt");
	ofstream ouf("out.txt");
	int a,n,s;
	while(inf>>a>>n)
	{
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
