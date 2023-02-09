NAME = push_swap
CC = gcc
FLAGS = -Wall -Wextra -Werror
SRCS =		push_barn_r.c \
				push_barn_s.c \
				push_barn.c \
				push_part.c \
				push_separate.c \
				push_split.c \
				push_swap.c \
				push_utils.c \
				push_radix.c 
OBJS = $(SRCS:.c=.o)

RM		    := rm -rf

all:		$(NAME)

$(NAME): $(OBJS)
			$(CC) $(FLAGS) $(OBJS) -o $(NAME)

.c.o:
	$(CC) $(FLAGS) -c $<

clean:
			@ $(RM) ./*.o

fclean: clean
			@ $(RM) $(NAME)

re:			fclean all
.PHONY:		all clean fclean re