palindrome_program :main.o palindrome.o
	cc main.o palindrome.o -o palindrome_program

main.o: main.c palindrome.h
	cc -c main.c

palindrome.o: palindrome.c palindrome.h
	cc -c palindrome.c
clean:
	rm -f palindrome_program main.o palindrome.o
