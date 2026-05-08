#include <stdio.h>

int main()
{
    float f, c;
    printf("请输入华氏度: ");
    scanf("%f", &f);
    c = 5.0 / 9.0 * (f - 32);
    printf("这个华氏度对应摄氏度是: %f\n", c);
    return 0;
}
