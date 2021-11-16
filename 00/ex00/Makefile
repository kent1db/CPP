NAME			= megaphone

FILES			= megaphone.cpp

SRC_PATH		= ./
SRC				= $(addprefix ${SRC_PATH}/, ${FILES})

CC				= clang++
RM				= rm -rf
FLAGS			= -Wall -Wextra  -Werror

all: 			${NAME}


${NAME}: 
				@${CC} ${FLAGS} ${BIN} -o ${NAME} ${SRC}
				@printf '\033[?25l\033[JMEGAPHONE \033[92m✔ \033[0m\033[?25h\n'

clean:
				@${RM} ${NAME}
				@printf '\033[?25l\033[JMEGAPHONE DELETED \033[92m✔ \033[0m\033[?25h\n'

fclean:
				@${RM} ${NAME}
				@${RM} ${NAME}
				@printf '\033[?25l\033[JMEGAPHONE DELETED \033[92m✔ \033[0m\033[?25h\n'

re:				fclean all

.PHONY: all clean fclean re bonus init%