#include <stdio.h>

int ftrp(int nb, int power)
{
    if (power == 0)
       return(1);
    if (power < 0)
     return (0);
    
    if ( power > 1)
        return (nb * ftrp(nb, --power));
}

int main()
{
    printf("%d", ftrp(5, 3));
}