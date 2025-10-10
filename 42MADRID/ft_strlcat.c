

#include <stdio.h>

/* strlcat - appends string src to the end of dst.  It will append at most
     dstsize - strlen(dst) - 1 characters.  It will then NUL-terminate, unless
     dstsize is 0 or the original dst string was longer than dstsize

Return - For strlcat() that means the initial length of dst plus
     the length of src.
*/

size_t	ft_strlcat(char	*dest, const char	*src, size_t	dstsize)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	ldest;
	unsigned int	lsrc;

	i = 0;
	j = 0;
	ldest = 0;
	lsrc = 0;
	while (dest[ldest] != '\0')
		ldest++;
	while(src[lsrc] != '\0')
		lsrc++;
	if (dstsize <= ldest)
		return (ldest + lsrc);
	i = ldest;
	while (src[j] != '\0' && i < dstsize - 1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (lsrc + ldest);

}

int main(void)
{
    char dest[20] = "Hello";
    const char src[] = " world!";
    size_t result = ft_strlcat(dest, src, sizeof(dest));

    printf("Resultado: %s\n", dest);
    printf("Valor devuelto: %zu\n", result);
    return 0;
}


