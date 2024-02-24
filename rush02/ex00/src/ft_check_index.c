

char *check_index(char *grid)

// lavor con arrey unico, e invertito
// 142.365.466

len = ft_strlen(grid);
i = len -1;
if (i == 0)
{
	ft_units(grid[i]);
}

while ( i >= 0 )
{
	if ( i == 0 )
	{
		ft_units(grid[i])
	}
	if (i == 2 || i == 5 || i == 8 || i == 11 || i == 14 || i == 17 || i == 20 
	|| i == 23 || i == 26 || i == 29 || i == 32 || i == 35)
	{
		ft_hundred(grid[i])
	}
	if (i == 1 || i == 4 || i == 7 || i == 10 || i == 13 || i == 16 || i == 19 
	|| i == 22 || i == 25 || i == 28 || i == 31 || i == 34)
	{
		if(grid[i] == 1)
		{
			ft_ten_to_tewnty(&grid[i], &grid[i -1]);//se la cifra in mezzo alla terna é 1, gli passo lui 
			                                        //e quello prima  
		}
		ft_tens(grid[i])		
	}
	if (i == 3)
	{
		if(grid[i] != '0')
			ft_unit(grid[i])
		
		ft_thousands(grid[i])
	}
	if (i == 6)
	{
		//ft_million()
	}
	if (i == 9)
	{
		//ft_billion()
	}
	if (i == 12)
	{
		//ft_trillion()
	}
	if (i == 15)
	{
		//ft_quadrillion()
	}
	if ( i == 18 )
	{
		//ft_quintillon()
	}
	if ( i == 21 )
	{
		//ft_sextillion()
	}
	if ( i == 24 )
	{
		//ft_septillion()
	}
	if ( i == 27 )
	{
		//ft_octillion()
	}
	if ( i == 30 )
	{
		//ft_nonillion()
	}
	if ( i == )
	i--;
}