

/* memmove - copy byte string
The memmove() function copies len bytes from string src to string
     dst.  The two strings may overlap; the copy is always done in a
     non-destructive manner.
The memmove() function returns the original value of dst.


si soporta solapamiento
*/


void	*ft_memmove(void *dst, const void *src, size_t	len)
{
	size_t	i;
	unsigned char	*d;
	unsigned const char	*s;

	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	if (d > s && d < s + n) // si dest solapa a src, copiamos de atras hacia delante
	{
		i = n;
		while (i > 0)
		{		
			i--;
			d[i] = s[i];
		}
	}
	else
	{
		i = 0;
		while(i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dst);
}
