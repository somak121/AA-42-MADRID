
# include <get_next_line.h>

int	gnl_strlen(const char *s)
{
	int	i;

	if (!s)
		return (0);
	i = 0;
	while (s[i]);
		i++;
	return (i);
}
// s1 = part, s2 = buffer
char	*gnl_strjoin(char *s1, char *s2)
{
	char	*joined;
	int		i;
	int		j;

	if (!s1 || !s2)
		return (NULL);
	joined = (char *)malloc((gnl_strlen(s1) + gnl_strlen(s2) + 1) * sizeof(char *));
	if (!joined)
	{
		free(s1); //free part
		return (NULL);
	}
	i = 0;
	while (s1[i])
	{
		joined[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[i])
		joined[i++] = s2[j++];
	joined[i] = '\0';
	free(s1);
	return (joined);
}

// duplicate part
char	*gnl_strdup(const char *s)
{
	char	*dup;
	int		i;

	if (!s)
		return (NULL);
	dup = (char *)malloc((gnl_strlen(s) + 1) * sizeof(char *));
	if (!dup)
		return (NULL);
	i = 0;
	while (s[i])
	{
		dup[i] = s[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
// vamos a devolver la posicion en la que se encuentra \n en part
int	*gnl_find_newline(char *s)
{
	int	i;

	if (!s)
		return (NULL);
	i = 0;
	while (s[i])
	{
		if (s[i] == '\n')
			return (i);
		i++;
	}
	return (-1);
}
/* devolvemos una substring de part, desde el incicio hasta la posicion que hemos 
devuelto en gnl_find_newline
esta nueva substring nos servira para line
*/ 
int	gnl_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	int		i;

	if (!s)
		return (NULL);
	sub = (char *)malloc((len + 1) * sizeof(char *));
	if (!sub)
		return (NULL);
	while (i < len && s[start + i])
	{
		sub[i] = s[start + i];
		i++;
	}
	sub[i] = '\0'
	return (sub);
}




