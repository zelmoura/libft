#include"libft.h"
#include<stdio.h>
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
    size_t i;

    i = 0;
    if(dstsize > 0)
    {
        while (src[i] && i < dstsize - 1)
        {
            dst[i] = src[i];
            i++;
        }
    dst[i] = '\0';   
    }
    return(ft_strlen((char *) src));
}
int main()
{
    int n;
    char dest[] = "oldoldold";
   const char src[]  = "newnew";
   n = ft_strlcpy(dest, src, 6);
   printf("After strlcpy dests = %s, src = %s, et n = %d \n", dest, src, n);
}