#include <stdio.h>

int ft_i_f(int nb)
{ 
    int n;
    n = 1;
    if ( nb < 0)
        return(0);
    while(nb >= 1)
    {n *= nb;
        nb--;
    }
    return(n);
}

int main()
{
    printf("%d", ft_i_f(8));
}