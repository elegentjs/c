#include <dirent.h>
#include <stdio.h>

/**
 * 演示ls的功能，遍历展示目录下的文件列表
 */
int main(int argc, char const *argv[])
{
    DIR *dir;
    struct dirent *dirp;

    printf("%s %s \n", argv[0], argv[1]);

    if (argc != 2) {
        puts("usage: ls directory_name");
        return 0;
    }

    if ((dir = opendir(argv[1])) == NULL) {
        puts("cannot open this dir");
    }

    while((dirp = readdir(dir)) != NULL) {
        printf("%s \n", dirp -> d_name);
    }

    closedir(dir);
    return 0;
}
