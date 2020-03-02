#CC=gcc
CC=clang

all:
	$(CC) password-checker.c -o password-checker -O0 -m32 -fno-stack-protector -z execstack -no-pie
	strip password-checker

clean:
	rm -f password-checker
