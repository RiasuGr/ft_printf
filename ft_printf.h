#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <unistd.h>
# include "./libft/libft.h"
# include <stdarg.h>

int 	ft_printf(const char *input, ...);
char	*ft_strreplace(char *mainstr, char charset, char *replace);
void	ft_before_data(int start, int size_str, char charset, unsigned int *cmp);
int		ft_ato(char *str, char a);
int		ft_isconvert(char charset);

#endif /*FT_PRINTF_H*/