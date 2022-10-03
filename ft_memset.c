#include<stdlib.h>
void	*ft_memset(void *s, int c, size_t n)
{
	while (n--)
		*(char *)(s + n) = (char)c;
	return (s);
}
/*
int main()
{
    char p[] = "hilali&Mourabit";
    ft_memset(p, 'k', 5);
    printf("%s", p);
   return(0);
   
}*/
