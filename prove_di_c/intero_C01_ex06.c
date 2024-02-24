#include <unistd.h>
#include <stdio.h>

int ft_strlen(char *str)
{
	int i;
	i = 0;

    while(str[i] != '\0')
    {
        i++;
    }
	return (i);
}

void  main()
{
    char arr[] = {"abracadabra"};
    int c;

    c = ft_strlen(&arr[0]);
    printf("la lunghezza é: %d", c);
}
