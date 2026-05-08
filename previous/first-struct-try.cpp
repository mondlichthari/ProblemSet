#include<iostream>

using namespace std;
struct birthday
{
	int year;
	int month;
	int day;
};
struct student
{
	int id;
	char name[10];
	char gender;
	int mark[3];
	birthday birth; 
};

int main()
{
	student stu[3];
	
	int i,j,sum=0;
	sum=0;
	for(j=0;j<3;j++)
	{
		cout<<"输入第 " << j+1 << " 个学生的信息：" << endl;

        cout<<"ID: ";
        cin>>stu[j].id;

        cout<<"姓名: ";
        cin>>stu[j].name;   

        cout<<"性别(M/F): ";
        cin>>stu[j].gender;

        cout<<"出生年份: ";
        cin>>stu[j].birth.year;

        cout<<"出生月份: ";
        cin>>stu[j].birth.month;

        cout<<"出生日: ";
        cin>>stu[j].birth.day;

        cout<<"输入三门成绩: ";
		for(i=0;i<3;i++)
		{
			cin>>stu[j].mark[i];
		} 
	}
	
	for(j=0;j<3;j++)
	{
	   cout<<"学生 "<<j+1<<":"<<endl;
       cout<<"ID: " <<stu[j].id<<endl;
       cout<<"姓名: "<<stu[j].name<<endl;
       cout<<"性别: "<<stu[j].gender<<endl;
       cout<<"出生日期: " 
             <<stu[j].birth.year<<"-" 
             <<stu[j].birth.month<<"-" 
             <<stu[j].birth.day<<endl;
	   for(i=0;i<3;i++)
	   {
		    sum=sum+stu[j].mark[i];		
	   }
	   cout<<"总成绩分别是："<<endl;
	   cout<<sum<<endl;
	   sum=0;  
	}	
	return 0;
}             



