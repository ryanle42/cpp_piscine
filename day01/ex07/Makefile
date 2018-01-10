NAME = replace

OBJS = $(addprefix ./, \
					$(addsuffix .o, \
							main \
						) \
				)

CFLAGS = -Wall -Werror -Wextra

CC = @g++

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(INCLUDES) $(OBJS) -o $(NAME)
	@echo "replace made"

%.o: %.cpp
	$(CC) $(CFLAGS) -c -o $@ $<

force: 
	@true

clean:
	@rm -f $(OBJS)
	@echo "~~~clean~~~"

fclean: clean
	@rm -f $(NAME)

re: fclean all