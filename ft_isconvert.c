#include "ft_printf.h"

int	ft_isconvert(char charset)
{
	if (charset != 's'
		&& charset != 'c'
		&& charset != 'd'
		&& charset != 'i'
		&& charset != 'u'
		&& charset != '%'
		&& charset != 'x'
		&& charset != 'X'
		&& charset != 'p'
		&& charset != 0)
		return (1);
	return (0);
}