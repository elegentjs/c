#include <stdio.h>

/**
 * 以0.01为单位从0.0递增至1.0的循环
 * 
 * 由结果可以看出计算机不能保证浮点数的每一位都不发生丢失
 * 
 */
int main(int argc, char const *argv[])
{
    for (float index = 0.0; index <= 1.0; index += 0.01) {
        printf("index = %f \n", index);
    }

    return 0;
}
