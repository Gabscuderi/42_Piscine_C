#include <unistd.h>

void	ft_putchar (char c)
{ 
	write (1, &c, 1);
}

void	print_line (int x, int sx, int mdl, int dx)
{
	int space;
	space = 1;

	if (x>0)
	{
		ft_putchar (sx);
	}

	while (space < (x-1))
	{
		ft_putchar (mdl);
		space++;
	}

	if (x>1)
	{
		ft_putchar(dx);
	}

	ft_putchar ('\n');
}

void	rush(int x, int y)
{
	int space;
	space = 1;

	if (x > 0 && y > 0)
	{
		print_line(x, 'A', 'B', 'A');
	}

	while (space <(y -1) && x > 0)
	{
		print_line(x, 'B', ' ', 'B');
		space++;
	}

	if (y > 1 && x > 0) 
	{
		print_line(x, 'C', 'B', 'C');
	}
}

int	main(void)
{
	rush(5000000, 5000000);
	return (0);
}

