#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height = get_int("How tall is the pyramid?\n");
    printf("%i\n", height);
    for(int i = 0; i < height ; i++)
    {
        for(int e = 0; e < i ; e++)
        {
            printf("#");
        }
        printf("#\n");
    }
    int width = get_int("How wide is the pyramid?\n");
    printf("%i\n", width);
    for(int i = 0; i < width ; i++)
    {
        for(int e = 0; e < width ; e++)
        {
            printf("#");
        }
        printf("\n");
    }
}

