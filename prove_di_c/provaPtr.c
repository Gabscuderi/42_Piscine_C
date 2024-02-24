#include <unistd.h>

int ft_1(char *ptr2)
{
	*ptr2 = 'N';//*ptr2 = 'N '
	return (1);
}

int main ()
{
	char c;
	char *ptr;

	c = 'L';
	ptr = &c;//ptr prende indirizzo di c di main
	*ptr = 'O';//sovrascrivo cio che e scirtto in c del main,== c='O ' 
	
    ft_1(ptr);
	
	write(1, &c, 1);
	return (1);

}


		

