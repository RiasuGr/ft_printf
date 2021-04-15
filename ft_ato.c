#include "ft_printf.h"

int	ft_ato(char *str, char a)
{
	int value;
	int i;
	int ok;

	ok = -1;
	value = 0;
	i = 0;
	if (a != 'a')
	{
		while (str[i] != a)
			i++;
		i++;
	}
	while (str[i] != 0)
	{
		ok = 1;
		value = (value * 10) + (str[i] - 48);
		i++;
	}
	if (ok == -1)
		return (-1);
	return (value);
}