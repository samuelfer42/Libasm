NAME	= libasm.a

SRCS	= ft_write.s

OBJS	= ${SRCS:.s=.o}

%.o:%.s
		nasm -f elf64 $< -o $@


$(NAME):	${OBJS}
		ar rc ${NAME} ${OBJS}
		

all:		${NAME}

clean:		
		rm -f ${OBJS}

fclean:		clean
		rm -f ${NAME}

re:		fclean all

.PHONY:		clean fclean 