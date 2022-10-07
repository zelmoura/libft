#include<stdlib.h>
int ft_strncmp( const char * first, const char * second, size_t length )
{
    size_t i;

    i = 0;
    if(!length)
    return (0);
    while (first[i] == second[i] && first[i] && second[i] && i < length)
    i++;
    if(i == length)
    return (0);
    return((unsigned char)first[i] -(unsigned char)second[i]);
}
#include <stdio.h>
#include <string.h>
int main () {
   char str1[15];
   char str2[15];
   int ret;

   strcpy(str1, "abcdef");
   strcpy(str2, "ABCDEF");

   ret = ft_strncmp(str1, str2, 4);

   if(ret < 0) {
      printf("str1 is less than str2");
   } else if(ret > 0) {
      printf("str2 is less than str1");
   } else {
      printf("str1 is equal to str2");
   }
   
   return(0);
}