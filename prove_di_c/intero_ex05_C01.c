#include <unistd.h>
#include <stdio.h>

void putcar(char c)
{
	write(1, &c, 1);
}

void ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		putcar(str[i]);
		i++;
	}
}

int main()
{
	char arr[]={"lol"};

	ft_putstr(arr);
	ft_putstr(&arr[0]);
	write(1, "\n", 1);
	putcar(arr[0]);
	write(1, "\n", 1);
	ft_putstr(arr + 1);
	putcar('\n');
	printf("%s", arr);
	putcar('\n');
	printf("%c", *(arr + 1));
	return(1);
}
