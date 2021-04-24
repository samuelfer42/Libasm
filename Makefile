NAME	= libasm.a

SRCS	= ft_write.s \
			ft_strlen.s

OBJS	= ${SRCS:.s=.o}

%.o:%.s
		nasm -f elf64 $< -o $@


$(NAME):	${OBJS}
		ar rcs ${NAME} ${OBJS}
		

all:		${NAME}

clean:		
		rm -f ${OBJS}

fclean:		clean
		rm -f ${NAME}

re:		fclean all

.PHONY:		clean fclean 