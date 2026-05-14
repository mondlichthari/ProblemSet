 #include<iostream>
 #include<iomanip>
 using namespace std;
 int main() 
 {
 	int a[2][2]={1,2,3,4}, b[2][3]={1,2,3,4,5,6},s[2][3]={0};
 	int i,j,k;
 	
 	for(i=0;i<2;i++)
 	{
 		 for(j=0;j<3;j++)
 		{
 		 	  for(k=0;k<2;k++)
 		 	  {
 		 	  	 s[i][j]+=a[i][k]*b[k][j];
			  }
		}
	
	}
	  
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			cout<<setw(4)<<s[i][j];
		}
	    cout<<endl; 
	}
	
    return 0;    
 }
