NAME = phonebook

OBJS = $(addprefix ./, \
					$(addsuffix .o, \
							phonebook \
							searchContacts \
							addContact \
							contact.class \
						) \
				)

CFLAGS = -Wall -Werror -Wextra

INCLUDES = -I .

CC = @g++

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(INCLUDES) $(OBJS) -o $(NAME)
	@echo "phonebook made"

%.o: %.cpp
	$(CC) $(CFLAGS) $(INCLUDES) -c -o $@ $<

force: 
	@true

clean:
	@rm -f $(OBJS)
	@echo "~~~clean~~~"

fclean: clean
	@rm -f $(NAME)

re: fclean all