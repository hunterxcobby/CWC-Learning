#include <stdio.h>

int main (void)
{
    int time = 12;

    if(time < 12)
    {
        printf("Good morning Akwesi\n");
    }
    else if (time == 12)
    {
        printf("Good afternoon Akwesi\n");
    }
    else(time > 12)
    {
        printf("Good evening Akwesi\n");
    }

    return(0);
}