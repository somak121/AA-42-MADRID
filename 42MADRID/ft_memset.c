

/* memset - fill a byte string with a byte value
The memset() function writes len bytes of value c (converted to an
     unsigned char) to the string b.
The memset() function returns its first argument.
 */

void	*ft_memset(void	*b, int	c, size_t	len)
{
	size_t	i;
	unsigned char	*ptr;

	ptr  = (unsigned char *)b;
	i = 0;
	while (i < len)
	{
		ptr[i] = (unsigned char)c;
		i++;
	}
	return(b)
}
