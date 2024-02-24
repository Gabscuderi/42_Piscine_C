#include <stdio.h>
int ft_iterative_power(int nb, int power)
{
    if (nb == 0 && power == 0)
    {
        return(1);
    }
    if (power < 0)
    {
        return(0);
    }
    while(power > 1)
    {
        nb *= nb;
        power--;
    }
    return(nb);
}
int main (void) {
    printf("%d", ft_iterative_power(5, 3));
}