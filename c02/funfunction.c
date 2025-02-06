#include <stdio.h>

int main(void)
{
    char c = "c";
    char *ptr = &c;

    int i = 0;
    while (i < 100)
    {
        printf("%c", (ptr +1));
        i++;
    }
    
}
