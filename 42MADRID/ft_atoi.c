


#include <stdio.h>

//  atoi - convert ASCII string to integer
/* en el atoi normal solo se  admite un signo, en el de la piscina todos los que quieras

    if (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            sign = -1;
        i++;
    }
*/


int	ft_atoi(const char	*str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	while(str[i] == ' ' || str[i] == '\b' || str[i] == '\t' || str[i] == '\n'
		|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = sign * -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (sign * result);
}

int main(void)
{
    printf("%d\n", ft_atoi("   -123"));
    printf("%d\n", ft_atoi("42"));
    printf("%d\n", ft_atoi("+99"));
    printf("%d\n", ft_atoi("--123"));
    printf("%d\n", ft_atoi("  12abc34")); 
    return (0);
}
