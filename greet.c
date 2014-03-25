#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    if (argc == 1)
    {
        printf("You must supply -m, -f, or -l\n");
        return 1;
    }

    for (int i = 1; i < argc; i++)
    {
        if (strcmp(argv[i], "-l") == 0)
        {
            printf("Salve\n");
        }
        else if (strcmp(argv[i], "-f") == 0)
        {
            printf("Bonjour\n");
        }
        else if (strcmp(argv[i], "-m") == 0)
        {
            printf("Howdy\n");
        }
        else
        {
            printf("Use -m, -f, or -l\n");
            return 1;
        }
    }

    return 0;
}
