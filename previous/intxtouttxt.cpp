#include<fstream>
using namespace std;
int main()
{
	ifstream fin("in.txt");
	ofstream fout("out.txt");
	int a,b;
	while(fin>>a>>b)
	{
		fout<<a+b<<endl;
	}
	fin.close();
	fout.close();
	return 0;
}
