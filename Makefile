NAME = minishell

CC = gcc
CFLAGS = -g3

SRCPATH = src/
SRC = main.c \
		libft.c	\
		split.c \
		supp.c \
		free.c \
		quote.c \
		find_commande.c \
		find_input_output.c \
		clean_split_arg.c \
		create_maillons.c \
		split_list.c \
		list_split_elem.c \
		list_input_output.c \
		builtins_echo.c \
		builtins_cd.c  \
		builtins_pwd.c \
		builtins_env.c 

OBJ = $(SRC:.c=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	@echo "\033[36mMaking Minishell \033[0m"
	@$(CC) $(CFLAGS) $(OBJ) -o $(NAME) -lreadline
	@echo "\033[32mDone\033[0m"

%.o : $(SRCPATH)%.c
	@$(CC) $(CFLAGS) -c $^ 

bonus : all

clean :
	@echo "\033[35mCleaning Minishell objects...\033[0m"
	@rm -f $(OBJ)
	@echo "\033[32mDone\033[0m"

fclean : clean
	@echo "\033[35mCleaning  Minishell...\033[0m"
	@rm -f $(NAME)
	@echo "\033[32mDone\033[0m"

re : fclean
	make all

.PHONY : all clean fclean re bonus