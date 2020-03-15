# Calling Fortran From C - Part 1: Hello, World
# Part 1 of 3 in a short series on how to call Fortran functions from C.
# https://youtu.be/urcy6-kXZDw

hw:hello_function.o program_hello.o
	gfortran -o hw hello_function.o program_hello.o

hello_function.o: hello_function.f95
	gfortran -c hello_function.f95

program_hello.o: program_hello.c
	gcc -c program_hello.c
