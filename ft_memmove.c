#include<stdio.h>
#include"libft.h"
/*void * ft_memcpy( void * destination, const void * source, size_t size )
{
    size_t i;

    i = 0;
    if (!destination && !source)
    return (NULL);
    while (i < size)
    {
        (*(unsigned char *)(destination + i)) = (*(unsigned char *)(source + i));
        i++;
    }
    return(destination);
    
}*/
void * ft_memmove( void * destination, const void * source, size_t size )
{
    if (!destination && !source)
    return (NULL);
    if (destination < source)
    ft_memcpy(destination, source, size);
    else 
    {
        while (size--)
        (*(unsigned char *)(destination + size)) = (*(unsigned char *)(source + size));
        
    }
    return(destination);
    
}
/*
int main () {
   char dest[] = "oldoldold";
   const char src[]  = "new";
     char dest1[] = "oldoldold";
 

   printf("Before memmove dest = %s, src = %s\n", dest, src);
   
   ft_memmove(dest1, src, 3);
   printf("After memmove dests = %s, src = %s\n", dest1, src);

   return(0);
}*/