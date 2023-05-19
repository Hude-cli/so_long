NAME = so_long
SRCS = src/so_long.c src/ft_utils.c src/ft_control.c
OBJS = $(SRCS:.c=.o)
INCLUDES = -I includes
LIBS = -L mlx -lmlx -framework OpenGL -framework AppKit

CC			= gcc
CC_FLAGS	= -Wall -Werror -Wextra
MLX         =   libmlx.dylib
FT_PRINTF   =   ft_printf/libftprintf.a

all: $(NAME)

$(NAME): $(OBJS)
	$(MAKE) -C mlx
	$(CC) $(OBJS) $(LIBS) -o $(NAME)

%.o: %.c
	$(CC) $(INCLUDES) -c $< -o $@

clean:
	$(MAKE) -C mlx clean
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
