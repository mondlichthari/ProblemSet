  #include<iostream>
using namespace std;
class Array
{
	private:
		int data[6];
		int n;
	public:
		Array(int a[],int size);
		int find_max( );
		int find_min( );
		void select_sort(  );
		int sequential_search(int key);
        void bubble_sort( );
		void delete_array(int x);
		void print_array( );             
};
Array::Array(int a[],int size)
{
    n=size;
    for(int i=0;i<n;i++)
    {
    	data[i]=a[i];
    }
}
int Array::find_max()
{
	int i,index=0;
	for(i=0;i<n;i++)
	{
		if(data[i]>data[index])
		{
		   index=i;	
		}
	}
	return index;
}
int Array::find_min()
{
	int i,index=0;
	for(i=0;i<n;i++)
	{
		if(data[i]<data[index])
		{
		   index=i;	
		}
	}
	return index;
}
void Array::select_sort()
{
	int i,j,min,t;
	for(i=0;i<n-1;i++)
	{
		min=i;
		for(j=i+1;j<n;j++) 
		{
			if(data[j]<data[min])
			{
				min=j;
			}
		}
		t=data[min];
		data[min]=data[i];
		data[i]=t;
	}
}
int Array::sequential_search(int key)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(data[i]==key)
		{
			return i;
		}
	}
	return -1;
}
void Array::bubble_sort()
{
	int i,j,t;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(data[j]<data[j+1])
			{
				t=data[j];
				data[j]=data[j+1];
				data[j+1]=t; 
			}
		}
	}
}
void Array::delete_array(int x)
{
	int i,j;
	for(i=0;i<n;i++)
	{
		if(data[i]==x)
		{
			for(j=i;j<n;j++)
			{
				data[j]=data[j+1];
			}
			n--; 
			break;
		}
	}
}
void Array::print_array()
{
	int i; 
	for(i=0;i<n;i++)cout<<data[i]<<' ';
	cout<<endl; 
}
//请编写Array 类，包括构造函数和其他成员函数 
int main()
{
	int a[]={3,5,-2,11,77,9},i;
	Array arr(a,sizeof(a)/sizeof(a[0]));//定义对象，自动调用构造函数赋初值 
	arr.print_array();
	int max_index,min_index;
	max_index=arr.find_max();//找数组中最大值，返回其下标 
	cout<<"数组中最大值为："<<a[max_index]<<endl;
	min_index=arr.find_min();//找数组中最小值，返回其下标 
	cout<<"数组中最小值为："<<a[min_index]<<endl;
	arr.select_sort();//从小到大排 
	cout<<"从小到大排序："<<endl; 
	arr.print_array();
	int key,index;
	cout<<"请输入要查找的值："<<endl;
	cin>>key;
	index=arr.sequential_search(key);//顺序查找key，返回其下标 
	cout<<key<<"的下标是:"<<index<<endl; 
	arr.bubble_sort();//从大到小排
	cout<<"从大到小排序："<<endl; 
	arr.print_array();
	int x;
	cout<<"请输入要删除的值："<<endl; 
	cin>>x;
	int num;
	arr.delete_array(x);//删掉数组中的x值 
	cout<<"删除后的数组为："<<endl; 
	arr.print_array(); //输出时，私有成员n大小已改变 
	return 0;
}
