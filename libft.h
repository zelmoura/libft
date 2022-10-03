#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>
# include <stdlib.h>
int ft_isdigit(int c);
int ft_isalpha(int c);
int ft_isalnum(int c);
int	ft_isascii(int c);
int	ft_isprint(int c);
void * ft_memcpy( void * destination, const void * source, size_t size );
void * ft_memmove( void * destination, const void * source, size_t size );
void	*ft_memset(void *s, int c, size_t n);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t	ft_strlen(const char *s);

#endif
