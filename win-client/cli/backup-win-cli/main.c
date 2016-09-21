#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char consolebuffer[256];
    puts("Backup Windows CLI");
    for(;;)
    {
        printf(">");
        scanf("%s", consolebuffer);
        if(strcmp(consolebuffer, "help") == 0)
        {
            puts("WHEEE... Worked.");
        }
        else if(strcmp(consolebuffer, "exit") == 0)
        {
            puts("Exit.");
            return 0;
        }
        else
        {
            puts("Not found");
        }
    }
    return 0;
}
