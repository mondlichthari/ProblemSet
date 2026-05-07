#include<iostream>
using namespace std;
int invert(int x)
{
	int s;
	for(s=0;x>0;x=x/10)
	  s=s*10+x%10;
	if(x==s) return 0;  
	return s; 
}
int main()
{
	int m;
	for(m=1000;m<2000;m++)
    {
    	invert(m);
    		
    	cout<<m<<endl;
	}
	return 0;
}
