SRCS	=	ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c\
			ft_isalpha.c ft_isascii.c ft_isdigit.c\
			ft_isprint.c ft_itoa.c ft_memchr.c ft_memcmp.c\
			ft_memcpy.c ft_memmove.c ft_memset.c\
			ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c\
			ft_putstr_fd.c ft_split.c ft_strchr.c ft_strdup.c\
			ft_striteri.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c\
			ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnstr.c\
			ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c\
			ft_toupper.c\
			ft_char_type.c ft_printf.c\
			ft_scan_type.c ft_str_type.c ft_dec_type.c ft_int_type.c\
			ft_unsignint_type.c ft_pointer_type.c ft_low_hexa_type.c\
			ft_up_hexa_type.c ft_percent_type.c

OBJS	=	$(SRCS:.c=.o)

CC		=	cc
RM		=	rm -f

CFLAGS	=	-Wall -Wextra -Werror

.c.o:
			$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

NAME	=	libft.a

$(NAME):	$(OBJS)
			ar rcs $(NAME) $(OBJS)

all:		$(NAME)

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
