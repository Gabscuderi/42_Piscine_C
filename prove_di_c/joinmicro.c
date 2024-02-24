// ft_alloc chiamata dentro al while 
// posso fare alloc_strs e alloc_sep
//in alloc str basta un ptr di char cosi da potergli passare strs[i]
//passo j cosi da usare str[j] come se fosse j in strs[i][j]
//forse posso anche togliere j=0 e il ciclo while dalla funzione se serve 
//
//size di malloc sbagliatoi 


char *ft_alloc_strs(int *z, int *j, char *ptr, char *str)
{
	ptr[*z] = str[*j];
	*j++;
	*z++;
}

char *ft_alloc_sep(int *z, iint *k, char *ptr, char *sep)
{
    ptr[*z] = sep[*k];
    *k += 1;
	*z += 1;
}

void	ft_ptr_to_alloc(int *ptr, int *z, int *i)
{
	*z = 0;
	*i = 0;
	ptr = (char *)malloc(sizeof(char))
	if (ptr == NULL)
	   return (0);
}
//



//if (!(ft_ptr_to_alloc))
//         return(0);   --> se ritorna 0 diventa uno ed entra nella funzione ch la chiama,
//sennó non entra in quel ritorno e siamo apposto 	
