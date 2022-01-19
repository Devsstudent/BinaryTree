CC = cc
NAME = challenge
CFLAGS = -Wall -Werror -Wextra
OBJECTS = challenge.o 
FILE = node.h challenge.h challenge.c
 
##node.o : node.h
##	$(CC) -c $(CFLAGS) $< -o node.o

challenge.o : $(FILE)
	$(CC) -c $(CFLAGS) challenge.c -o challenge.o

all : $(OBJECTS)
	$(CC) $(CFLAGS) $< -o $(NAME) 

re : $(OBJECTS)
	make fclean
	make all	

.PHONY: clean
clean : 
	rm -f $(NAME) 

fclean : 
	rm -r $(OBJECTS) $(NAME)
