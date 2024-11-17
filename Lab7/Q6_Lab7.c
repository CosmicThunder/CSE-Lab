#include <stdio.h>

int main(int argc, char *argv[])
{
    if (argc <= 100)
    {
        printf("%d ", argc);
        char *v[] = {argv[0], NULL};
        main(argc + 1, v);
    }
    return 0;
}