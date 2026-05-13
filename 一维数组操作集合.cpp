#include<iostream>
using namespace std;
#define N 6
int find_max(int a[],int n); //寻找最大值 
int find_min(int a[],int n); //寻找最小值 
void select_sort(int a[],int n);//从小到大排序 
void bubble_sort(int a[],int n); //从大到小排序 
int sequential_search(int a[],int key,int n); //顺序查找  
void delete_array(int a[],int x,int n);//删除给定元素 

int main()
{
	int a[N]={3,5,-2,11,77,9},i;
	for(i=0;i<N;i++)
	{
		cout<<a[i]<<' ';
	}
	cout<<endl;
	int max_index,min_index;
	max_index=find_max(a,N);//找数组中最大值，返回其下标 
	cout<<"数组中最大值为："<<a[max_index]<<endl;
	min_index=find_min(a,N);//找数组中最小值，返回其下标 
	cout<<"数组中最小值为："<<a[min_index]<<endl;
	select_sort(a,N);//从小到大排 
	cout<<"从小到大排序："<<endl; 
	for(i=0;i<N;i++)
	{
		cout<<a[i]<<' ';
	}
	cout<<endl;
	int key,index;
	cout<<"请输入要查找的值："<<endl;
	cin>>key;
	index=sequential_search(a,key,N);//顺序查找key，返回其下标 
	cout<<key<<"的下标是:"<<index<<endl; 
	bubble_sort(a,N);//从大到小排
	cout<<"从大到小排序："<<endl; 
	for(i=0;i<N;i++)
	{
		cout<<a[i]<<' ';
	}
	cout<<endl;
	int n,x;
	cout<<"请输入要删除的值："<<endl; 
	cin>>x;
	delete_array(a,x,N);//删掉数组中的x值 
	cout<<"删除后的数组为："<<endl; 
	for(i=0;i<N-1;i++)
	{
		cout<<a[i]<<' ';
	}
	cout<<endl;
	return 0;
}
int find_max(int a[],int n)
{
	int max,i,t=0;
	max=a[0];
	for(i=0;i<n;i++)
	{	
		if(a[i]>max)
		{
			max=a[i];
			t=i;
		}
	} 
	return t;
}
int find_min(int a[],int n)
{
	int min, i,t=0;
	min=a[0];
	for(i=0;i<n;i++)
	{	
		if(min>a[i])
		{
			min=a[i];
			t=i;			
		}
	}
	return t;
}
void select_sort(int a[],int n)
{
	int i,j,min,t;
	for(i=0;i<n-1;i++)
	{
		min=i;
		for(j=i+1;j<n;j++)
		{
			if(a[j]<a[min])
			{
				min=j;
			}
		} 
		t=a[min];
		a[min]=a[i];
		a[i]=t;	
	}
}
void bubble_sort(int a[],int n)
{
	int j,i,t;
	for(j=0;j<n;j++)
	{
		for(i=0;i<n-1-j;i++)
		{
			if(a[i]<a[i+1])
			{
				t=a[i];
				a[i]=a[i+1];
				a[i+1]=t;
			}
		}
	}
}
int sequential_search(int a[],int key,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(a[i]==key)return i;
		
	}return -1;
}
void delete_array(int a[],int x,int n)
{
	int i,j=0;
	for(i=0;i<n;i++)
	{
		if(a[i]==x)
		{
			for(j=i;j<n-1;j++)
			{
				a[j]=a[j+1];
			}
			break;
		}
	}
}

