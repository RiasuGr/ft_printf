#include "ft_printf.h"

int get_flags(const char *input, int a, char *flags, ...)
{
	va_list args;
	int f;

	f = 0;
	va_start(args, input);
	while (input[a] != 0)
	{
		if (input[a] == '%')
		{
	ft_memset(flags, 0, ft_strlen(flags));
            while (ft_isconvert(input[a]))
                flags[f++] = input[a++];
		}
	}
	va_end(args);
}

int ft_printf(const char *input, ...)
{
//	char *str;
	char *flags;
	int a;
	unsigned int cmpt;
	va_list args;
	size_t  r;
	int f;
	int tmp;
	int start;

	start = -1;
	tmp = 0;
	cmpt = 0;
	a = 0;
	r = 0;
	f = 0;
	flags = ft_calloc(sizeof(char), ft_strlen(input));
	va_start(args, input);
	while (input[a] != 0)
	{
		if (input[a] == '%')
		{
			a++; /*get flag content */
           /* ft_memset(flags, 0, ft_strlen(flags));
            while (ft_isconvert(input[a]))
                flags[f++] = input[a++];*/
			get_flags(input, a, flags);
			if(input[a] == 'c')
			{
				if(ft_strchr(flags, '*') != 0)
				{
					start = va_arg(args, int);
					flags = ft_strreplace(flags, '*', ft_itoa(start));				
				}				
				if(flags[0] != 0) 
				{/*avant flags if not '-'*/
					if(ft_strchr(flags, '-') == 0)
					{
						r = va_arg(args, int);
						tmp = ft_atoi(flags);
					 	ft_before_data(tmp, 1, ' ', &cmpt);
						ft_putchar_fd(r, 1);
						cmpt++;
					}
					else 
					{/*apres flags if '-'*/
					r = va_arg(args, int);
						ft_putchar_fd(r, 1);
						cmpt++;
					if (start == -1)
							start = ft_ato(flags, '-');
						if (start < 0)
							start *= -1;
						ft_before_data(start, 1, ' ', &cmpt);
					}
				}
				else
				{
					r = va_arg(args, int);
					ft_putchar_fd(r, 1);
					cmpt++;
				}
			}
		}
		else
		{
			ft_putchar_fd(input[a], 1);
			cmpt++;
		}
		a++;
	}
	free(flags);
	va_end(args);
	return (cmpt);
}
