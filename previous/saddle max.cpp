#include <iostream>
using namespace std;
int main() 
{
    const int rows = 3, cols = 3;
    int arr[rows][cols] = {{1, 3, 2},{4, 5, 6},{7, 8, 9}};
    int saddleCount = 0; 
    for (int i = 0; i < rows;i++) 
	{  
        int max = arr[i][0];
        int maxCol = 0;
        for (int j = 1; j < cols;j++) 
		{
            if (arr[i][j] > max) 
			{
                max = arr[i][j];
                maxCol = j;
            }
        }    
        int k;
        for (k=0; k<rows;k++) 
		{
            if (arr[k][maxCol] < max)
			{
                break; 
            }
        }
        if (k == rows) 
		{ 
            cout << "鞍点是：" << max << "，位置：第" << i + 1 << "行，第" << maxCol + 1 << "列。" << endl;
            ++saddleCount;
        }
    }
    return 0;
}



