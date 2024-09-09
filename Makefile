NAME = skysc
MAIN = src/main.c

CC = cc

CFLAGS = -Wall -Wextra -Werror

FUNCTIONS = src/choice.c src/constraints.c src/utils.c

all: $(NAME)

$(NAME): $(MAIN)
	$(CC) $(CFLAGS) ${FUNCTIONS} -o $(NAME) $(MAIN)


run4: $(NAME)
	@echo "running (4x4) ./$(NAME) '4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2'"; ./${NAME} "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2"
	@echo "running (4x4) ./$(NAME) '2 1 2 3 1 3 2 2 2 2 3 1 2 2 1 3'"; ./${NAME} "2 1 2 3 1 3 2 2 2 2 3 1 2 2 1 3"


run5: $(NAME)
	@echo "running (5x5) ./$(NAME) '2 4 3 3 1 2 1 2 2 5 2 1 2 3 2 1 2 3 2 4'"; ./${NAME} "2 4 3 3 1 2 1 2 2 5 2 1 2 3 2 1 2 3 2 4"
	@echo "running (5x5) ./$(NAME) '2 3 3 1 2 2 2 1 3 2 2 1 2 5 2 2 4 3 1 3'"; ./${NAME} "2 3 3 1 2 2 2 1 3 2 2 1 2 5 2 2 4 3 1 3"


run6: $(NAME)
	@echo "running (6x6) ./$(NAME) '2 2 3 5 1 4 4 2 3 1 3 2 2 2 1 2 4 3 2 3 5 2 1 3'"; ./${NAME} "2 2 3 5 1 4 4 2 3 1 3 2 2 2 1 2 4 3 2 3 5 2 1 3"
	@echo "running (6x6) ./$(NAME) '2 3 2 1 4 3 3 2 3 5 1 2 2 3 2 1 4 3 2 4 2 3 1 2'"; ./${NAME} "2 3 2 1 4 3 3 2 3 5 1 2 2 3 2 1 4 3 2 4 2 3 1 2"


fclean:
	rm -f $(NAME)