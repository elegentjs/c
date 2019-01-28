#include<stdio.h>

enum animal {
    Dog,
    Cat,
    Monkey,
    Invalid
};

enum animal select() {

    puts("0: 狗；1: 猫；2: 猴子；3: 结束");

    int temp = 0;

    scanf("%d", &temp);

    return temp;
}

int main(int argc, char const *argv[])
{
    enum animal selected;

   switch(selected = select()) {
            case Dog: 
                puts("汪汪!");
                break;
            case Cat: 
                puts("喵喵!");
                break;   
            case Monkey: 
                puts("猴子!");
                break;   

            default:
                puts("in valid");
        }
    
    return 0;
}
