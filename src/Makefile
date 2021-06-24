main: gui.c tokenizer.c
	gcc -o test gui.o tokenizer.o

gui.o: gui.c
	gcc -o gui.c

tokenizer.o: tokenizer.c tokenizer.h
	gcc -o tokenizer.c

clean:
	rm -f *.o *~ *#
	ls
