SRCS	=	server.c\
			client.c

NAME	=	mini

SERVER	=	server

CLIENT	=	client

LIBFT	=	libft/libft.a

OBJS	=	$(SRCS:.c=.o)

CC		=	cc
RM		=	rm -f
CFLAGS	=	-Wall -Wextra -Werror

.c.o:
			$(CC) -c $< -o $(<:.c=.o)

all:		$(NAME)

$(LIBFT):
			make -C libft

$(NAME):	$(OBJS) $(SERVER) $(CLIENT)

$(SERVER): $(LIBFT)
			$(CC) -o server server.o -Llibft -lft

$(CLIENT): $(LIBFT)
			$(CC) -o client client.o -Llibft -lft

clean:
			$(RM) $(OBJS)
			make -C libft clean

fclean:		clean
			$(RM) server client libft/libft.a

re:			fclean all

.PHONY:		all libft clean fclean re
