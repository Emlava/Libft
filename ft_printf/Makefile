NAME = libftprintf.a
CC = cc
FLAGS = -Wall -Wextra -Werror -I./libft
OBJECTS = ft_printf.o ft_csu_percent.o ft_p.o ft_d_i.o ft_xx.o ft_strlen.o ft_putstr_fd.o ft_putnbr_fd.o
BONUS_OBJECT = ft_printf_bonus.o

.PHONY: all bonus clean fclean re

all: $(NAME)

$(NAME): $(OBJECTS)
	ar rcs $(NAME) $(OBJECTS)

%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@

bonus: $(NAME) $(BONUS_OBJECT)
	ar rcs $(NAME) $(BONUS_OBJECT)

clean:
	rm -f $(OBJECTS) $(BONUS_OBJECT)

fclean: clean
	rm -f $(NAME)

re: fclean all
