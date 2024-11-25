
NAME = libft.a
C_Compiler = cc
C_FLAGS = -Wall -Wextra -Werror

Funs = 	ft_isdigit.c ft_memcpy.c ft_bzero.c ft_strdup.c \
	ft_substr.c ft_calloc.c ft_isprint.c ft_memmove.c ft_strjoin.c \
	ft_strncmp.c ft_tolower.c ft_isalnum.c ft_itoa.c ft_memset.c \
	ft_strlcat.c ft_strnstr.c ft_toupper.c ft_isalpha.c ft_memchr.c \
	ft_split.c ft_strlcpy.c ft_strrchr.c ft_atoi.c ft_isascii.c \
	ft_memcmp.c ft_strchr.c ft_strlen.c ft_strtrim.c ft_strmapi.c \
	ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c \
	ft_putnbr_fd.c
		
Funs_bn = 	ft_lstadd_back_bonus.c ft_lstadd_front_bonus.c ft_lstclear_bonus.c \
		ft_lstdelone_bonus.c ft_lstiter_bonus.c ft_lstlast_bonus.c \
		ft_lstmap_bonus.c ft_lstnew_bonus.c ft_lstsize_bonus.c

OFuns = $(Funs:.c=.o)
OFuns_bn = $(Funs_bn:.c=.o)

all: $(NAME)

bonus: $(OFuns_bn)
	ar rc ${NAME} $(OFuns_bn)

$(NAME): $(OFuns)
	ar rc ${NAME} $(OFuns)
	
%.o: %.c libft.h
	$(C_Compiler) $(C_FLAGS) -c $< -o $@

clean:
	$(RM) $(OFuns) $(OFuns_bn)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: clean
