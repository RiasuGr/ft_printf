NAME 	= libft.a

NAME	= libftprintf.a

SRCS	= ft_printf.c ft_strreplace.c ft_before_data.c ft_ato.c ft_isconvert.c

OBJS	= ${SRCS:.c=.o}

CC		= gcc

CFLAGS  = -Wall -Wextra -Werror 

RM		= rm -f

LIBFT	= cd libft/ && make

$(NAME):	libft ${OBJS}
			ar -rcs ${NAME} ${OBJS}

.c.o:
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

all:		${NAME}

clean:
			${RM} ${OBJS}
			${LIBFT} clean

fclean:		clean
			${RM} ${NAME} libft.a
			${LIBFT} fclean

re:			fclean all

libft:
			${LIBFT} bonus
			cp libft/libft.a $(NAME)

.PHONY: $(NAME) all clean fclean re libft
