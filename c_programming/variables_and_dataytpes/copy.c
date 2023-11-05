#include <stdio.h>

int main(void)
{
    /* declare a variable */
    int s_num;
    int result;
    int num = 19;
    float dec = 21.9;
    char alpha = '=';

    
    s_num = num; /* GIve it to s_num*/

    printf("%d\n", s_num);
    printf("%d\n", num);

    result = s_num + num;
    printf("%d\n", result);

    

    return (0);

}