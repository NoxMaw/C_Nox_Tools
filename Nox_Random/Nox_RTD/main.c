#include "nox.h"
char *Nox_Random(void);
/**
 * main - entry point for the program
 *
 * Return: always 0;
 */
int main()
{
    char *ptr;
    int i, b;

    b = 72;
    while (b > 0)
    {
        ptr = Nox_Random();

        for(i = 0; i < 51; i++)
            putchar(ptr[i]);
        putchar('\n');
        b--;

        free(ptr);
    }
    printf("\nThere we go, i'm done.\nPress any key to exit.");
    getchar();

    return (0);
}
