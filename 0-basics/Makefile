CC=gcc
#CC=clang

all:
	$(CC) basics.c -o basics -O0 -m32 -fno-stack-protector -z execstack -no-pie
	#strip basics

clean:
	rm -f basics
