libft_cmd:
		make -C libft
		mv libft/libft.a .

SRCS	= fractol.c \


CC	= clang 

NAME	= fractol

HEADER	= minilibx-linux/mlx.h

OBJS = ${SRCS:.c=.o}

%.o: %.c
	$(CC) -Wall -Wextra -Werror -I/usr/include -Imlx_linux -O3 -c $< -o $@

$(NAME): $(OBJS)
	$(CC) -Wall -Werror -Wextra -I includes *.c -L /usr/local/lib -L./ -lft -lmlx -lXext -lX11 -lm -o ${NAME}

all:	${NAME}

clean: 
	${RM} ${OBJS}
