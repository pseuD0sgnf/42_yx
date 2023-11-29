NAME = libft.a
CFILE = ft_atoi.c ft_isalnum.c ft_isdigit.c ft_memcmp.c \
	ft_memset.c ft_strlcat.c ft_strncmp.c ft_toupper.c \
	ft_bzero.c  ft_isalpha.c ft_isprint.c ft_memcpy.c \
	ft_strchr.c ft_strlcpy.c ft_strnstr.c ft_tolower.c \
	ft_calloc.c ft_isascii.c ft_memchr.c ft_memmove.c \
	ft_strdup.c ft_strlen.c  ft_strrchr.c ft_substr.c \
	ft_strjoin ft_strtrim
OFILE = ${CFILE:.c=.o}
CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f
LIB = ar -rcs

all: ${NAME}

${NAME}: ${OFILE}
	${CC} ${CFLAGS} -c ${CFILE}
	${LIB} ${NAME} ${OFILE}

clean:
	${RM} ${OFILE}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re
