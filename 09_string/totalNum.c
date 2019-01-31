#include <stdio.h>

void str_count(const char str[], int count[]) {
    unsigned i = 0;

    while(str[i]) {
        if (str[i] >= '0' && str[i] <= '9') {
            count[str[i] - '0'] ++;
        }

        i ++;
    }
}


int main(int argc, char const *argv[])
{
    int count[10] = {0};
    char str[1000];

    puts("请输入一段字符串，我们将统计0～9出现的次数");

    scanf("%s", str);

    str_count(str, count);


    for(int index = 0; index < 10; index ++) {
        printf("%d : %d \n", index, count[index]);
    }

    return 0;
}
