CC=gcc
CFLAGS= -Wall -Wextra -Werror -pedantic -rdynamic
LFLAGS= `pkg-config --cflags --libs gtk+-3.0`

OBJS=main.o button_presses.o
OBJS_MAIN=main.c button_presses.h
OBJS_BUTTON=button_presses.h button_presses.c

default:	$(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o calc $(LFLAGS)

main.o:	$(OBJS_MAIN)
	$(CC) $(CFLAGS) -c  main.c $(LFLAGS)

button_presses.o: $(OBJS_BUTTON)
	$(CC) $(CFLAGS) -c button_presses.c $(LFLAGS)

clean:
	rm -f *.o *.d *.i *.gch calc