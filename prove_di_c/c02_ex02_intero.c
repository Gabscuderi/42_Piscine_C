#include <stdio.h>

int	ft_control_str(char c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}

int	ft_str_is_alpha(char *str)
{
	int	control;
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		control = ft_control_str(str[i]);
		if (control == 1)
		{
			i++;
		}
		else
		{
			return (0);
		}
	}
	return(1);
}	

int main()
{
	int	final;

	char arr[] = "rtj3krtjhoita";

	final = ft_str_is_alpha(&arr[0]);
	printf ("final return is : %d", final);
}
