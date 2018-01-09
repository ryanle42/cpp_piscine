NAME = megaphone

OBJS = $(addprefix ./, \
					$(addsuffix .o, \
							megaphone \
						) \
				)

CFLAGS = -Wall -Werror -Wextra

CC = @g++

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
	@echo "megaphone made"

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