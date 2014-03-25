#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    int mflag=0;
    int fflag=0;
    int rflag=0; 
    int lflag=0;
    if (argc == 1)
    {
        printf("You must supply -m, -f, -r, or -l\n");
        return 1;
    }
    for (int i = 1; i < argc; i++)
    {
	if (strcmp(argv[i], "-l") == 0)
        {
            lflag=1;
        }
        else if (strcmp(argv[i], "-f") == 0)
        {
            fflag=1;
        }
        else if (strcmp(argv[i], "-m") == 0)
        {
            mflag=1;
        }
        else if (strcmp(argv[i], "-r") == 0)
        {
            rflag=1;
        }
	else
        {
            printf("Note: -m, -f, -r, or -l are the only valid options\n");
        }
    }

    if(mflag) printf("Howdy\n");
    if(fflag) printf("Bonjour\n");
    if(rflag) printf("Salut\n");
    if(lflag) printf("Salve\n");
    return 0;
}
