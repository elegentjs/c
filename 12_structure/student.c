#include<stdio.h>
#include<string.h>

typedef struct {
    char *name;
    int height;
    int weight;
    long schols;
} student;

int main(int argc, char const *argv[])
{
    student s1;
    student s2 = {"章三", 180, 70, 2000};

    s1.name = "刘培军";
    s1.height = 170;
    s1.weight = 65;
    s1.schols = 1000;



    printf("name : %s \n", s1.name);
    printf("height : %d \n", s1.height);
    printf("weight : %d \n", s1.weight);
    printf("schols : %ld \n", s1.schols);

    puts("");

    printf("name : %s \n", s2.name);
    printf("height : %d \n", s2.height);
    printf("weight : %d \n", s2.weight);
    printf("schols : %ld \n", s2.schols);
    return 0;
}
