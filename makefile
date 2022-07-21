all:
	gcc -DB64 main.c gmp.c -o fact64
	gcc -m32 main.c gmp.c -o fact32
