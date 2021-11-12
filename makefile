NAME = libftprintf.a

CFLAGS = -Wall -Wextra -Werror

CC = gcc

SRC = ft_printf.c		\
	  print_char.c		\
	  print_hexl.c		\
	  print_hexu.c		\
	  print_int10.c		\
	  print_point.c		\
	  print_str.c		\
	  print_uint10.c	\

HEADER = ft_printf.h

OBJ = $(SRC:%.c=%.o)

all: $(NAME)

bonus: re

$(NAME): $(OBJ) $(HEADER)
		 @ar -r $(NAME) $(OBJ)

%.o : %.c
		 @$(CC) $(CFLAGS) -c $< -o $@

clean:
		 @rm -rf $(OBJ)

fclean:	 clean
		 @rm -rf $(NAME)

re:		 fclean all
