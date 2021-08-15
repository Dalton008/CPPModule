NAME = replace

LIST = $(shell find . -name "*.cpp")

FLAGS = -Wall -Wextra -Werror

OBJ = $(LIST:.cpp=.o)

.PHONY : all clean fclean re

all : $(NAME)

%.o : %.cpp $(HEADER)
	clang++ -g $(FLAGS) -c $< -o $@

${NAME} : $(OBJ)
	clang++ $(FLAGS) $(OBJ) -o $(NAME)

clean :
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME)

re : fclean all