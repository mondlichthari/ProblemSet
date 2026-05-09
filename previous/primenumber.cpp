//qwen ai gave me a better version of prime number code and i 'd better memorize it well.
#include <iostream>
#include <cmath> // 需要引入数学库来使用 sqrt
using namespace std;

// 使用 long long 支持更大的整数
int fun(long long m)
{
    // 1. 处理小于2的数，不是素数
    if (m < 2) return 0;

    // 2. 处理偶数：除了2以外，偶数都不是素数
    if (m == 2) return 1;
    if (m % 2 == 0) return 0;

    // 3. 核心优化：只循环到 m 的平方根
    // 如果 m 有因子，必然有一个因子小于等于它的平方根
    // i += 2 表示只检查奇数，因为偶数已经被上面排除了
    for (long long i = 3; i * i <= m; i += 2)
    {
        if (m % i == 0) return 0; // 找到了因子，不是素数
    }

    return 1; // 是素数
}

int main()
{
    long long n;
    cout << "请输入一个较大的整数（例如 1000000007）: ";
    cin >> n;

    if (fun(n) == 1)
        cout << n << " 是素数。" << endl;
    else
        cout << n << " 不是素数。" << endl;

    // 也可以测试原来的 1-10 范围
    cout << "1到20之间的素数有: ";
    for(n = 1; n <= 20; n++) {
        if(fun(n) == 1) cout << n << " ";
    }
    cout << endl;

    return 0;
}
