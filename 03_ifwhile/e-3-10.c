#include <stdio.h>

int main(int argc, char const *argv[])
{
    puts("请输入两个整数: ");
    
    int i, j;

    scanf("%d", &i);
    scanf("%d", &j);

    int result = (i - j);

    if (result <= 10) {
        printf("%d, %d 它们的差小于等于10. \n", i, j);
    } else {
        printf("它们的差大于10 \n");
    }

    return 0;
}
