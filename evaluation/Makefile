NAME = libft.a
CFLAGS = -Wall -Wextra -Werror
CC = cc
SRCS = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_split.c ft_strchr.c ft_strdup.c ft_striteri.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c
SRCS_BONUS = ft_lstadd_back_bonus.c ft_lstadd_front_bonus.c ft_lstclear_bonus.c ft_lstdelone_bonus.c ft_lstiter_bonus.c ft_lstlast_bonus.c ft_lstmap_bonus.c ft_lstnew_bonus.c ft_lstsize_bonus.c
OBJS = $(SRCS:.c=.o)
DEPS = $(SRCS:.c=.d)
OBJS_BONUS = $(SRCS_BONUS:.c=.o)
DEPS_BONUS = $(SRCS_BONUS:.c=.d)

ifdef WITH_BONUS
	OBJ_FILES = $(OBJS) $(OBJS_BONUS)
else
	OBJ_FILES = $(OBJS)
endif

all:	$(NAME)

$(NAME):	$(OBJ_FILES)
	ar rcs $(NAME) $(OBJ_FILES)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@ -MMD

clean:
	rm -f $(OBJS)
	rm -f $(OBJS_BONUS)

fclean:	clean
	rm -f $(NAME)

re:
	$(MAKE)	fclean
	$(MAKE)	all

bonus:
	make WITH_BONUS=1

.PHONY: all clean fclean re bonus

-include $(DEPS) $(DEPS_BONUS)
