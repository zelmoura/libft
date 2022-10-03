#include<stdio.h>
#include<string.h>
#include"libft.h"
void * ft_memcpy( void * destination, const void * source, size_t size )
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
    
}
/*
int main() {

    int array [] = { 54, 85, 20, 63, 21 };
    int * copy = NULL;
    int length = sizeof( int ) * 5;
     
    // Memory allocation and copy 
    copy = (int *) malloc( length );
    ft_memcpy( copy, array, length );
        
    //Display the copied values 
    for( length=0; length<5; length++ ) {
        printf( "%d ", copy[ length ] );
    }
    printf( "\n" );
        
    free( copy );
    
    return EXIT_SUCCESS;
}

int main () {
   char dest[] = "oldoldold";
   const char src[]  = "new";
     char dest1[] = "oldoldold";
 

   printf("Before memmove dest = %s, src = %s\n", dest, src);
   memcpy(dest, src, 3);
   printf("After memmove dests = %s, src = %s\n", dest, src);
   memmove(dest1, src, 3);
   printf("After memmove dests = %s, src = %s\n", dest1, src);

   return(0);
}
*/