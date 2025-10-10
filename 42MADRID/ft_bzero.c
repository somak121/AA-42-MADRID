


// bzero - write zeros to a byte string
// 	writes n zeroed bytes to the string s. 
//	if n is zero, bzero does nothing


void	bzero(void *s, size_t	n)
{
	size_t	i;
	unsigned int	*ptr;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		ptr[i] = '\0';
		i++;
	}
}

