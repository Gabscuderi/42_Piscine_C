#include <unistd.h>

void pc(int i)
{
	write(1, &i, 1);
}

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	z;

	z = *a;
	*a = (z / *b);
	*b = (z % *b);
}

int  main()
{
	int a;
	int b;

	a = 14;
	b = 5;

	ft_ultimate_div_mod(&a, &b);
	pc(a + '0');
	pc(b + '0');
	return (1);
}
