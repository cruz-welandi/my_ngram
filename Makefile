CFLAGS = -g -Wall -Wextra -Werror

all : my_ngram

my_ngram : my_ngram.o
	gcc $(CFLAGS) -o my_ngram my_ngram.o

my_ngram.o : my_ngram.c
	gcc -o my_ngram.o -c my_ngram.c

clean:
	rm -f *.o

fclean: clean
	rm -f my_ngram

re: fclean all