NAME			= iPhoneBook

FILES			= PhoneBook.cpp Contact.cpp main.cpp

INC_FILES		= Contact.hpp PhoneBook.hpp
INC_PATH		= .
INC				= $(addprefix ${INC_PATH}/, ${INC_FILES})

SRC_PATH		= .
SRC				= $(addprefix ${SRC_PATH}/, ${FILES})

BIN_PATH		= bin
BIN 			= $(SRC:%.cpp=$(BIN_PATH)/%.o)

CC				= clang++
RM				= rm -rf
FLAGS			= -std=c++98 -Wall -Wextra  -Werror

all: 			${NAME}

init:
				@$(shell mkdir -p $(BIN_PATH))

$(BIN): $(BIN_PATH)/%.o: %.cpp ${INC}
				@mkdir -p $(@D)
				@$(CC) $(FLAGS) -I ${INC_PATH} -o $@ -c $<
				@printf "\e[?25l\e[JiPhoneBook : \e[92m$(notdir $<)\e[0m\r"

${NAME}: 		init ${BIN}
				@${CC} ${FLAGS} ${BIN} -o ${NAME} -I ${INC_PATH}
				@printf '\033[?25l\033[JiPhoneBook \033[92m✔ \033[0m\033[?25h\n'

clean:
				@${RM} ${BIN_PATH}
				@printf '\033[?25l\033[JiPhoneBook DELETED \033[92m✔ \033[0m\033[?25h\n'

fclean:
				@${RM} ${BIN_PATH}
				@${RM} ${NAME}
				@printf '\033[?25l\033[JiPhoneBook DELETED \033[92m✔ \033[0m\033[?25h\n'

re:				fclean all

.PHONY: all clean fclean re bonus init%