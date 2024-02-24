#include "ft.h"

char	*ft_create_matrix(char *grid, char *input)
{
	unsigned int	row;
	unsigned int	i;

	i = 0;
	row = ft_strlen(input);

	ft_rev_str(input);
	while (i < row)
	{
		grid[i] = input[i];
		i++;
	}
	return (grid);
}
