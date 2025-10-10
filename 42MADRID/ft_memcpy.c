 


/* memcpy - copy memory area
The memcpy() function copies n bytes from memory area src to memory
     area dst.  If dst and src overlap, behavior is undefined.
     Applications in which dst and src might overlap should use
     memmove(3) instead.
The memcpy() function returns the original value of dst.
 */

void *ft_memcpy(void	*restrict dst, const void	*restric src, size_t	n)
{
	size_t	i;
	unsigned char	*d;
	const unsigned char	*s;

	i = n;
	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	while (i > 0)
	{
		d[i] = s[i];
		i--;
	}
	return (dst);
}
