compiler = g++
# g debug mode
# v verbose
# o link or compile and link
# c compiles
# -pg 
flag_c = -g -o 
flag_w = -Wall -pedantic -std=c++17 -pg
libs = -larmadillo

anest: anest.cc
	#gcc -Wall -pg test_gprof.c test_gprof_new.c -o test_gprof
	#g++ -o anest anest.cc -DARMA_DONT_USE_WRAPPER -lopenblas -llapack
	#g++ -o anest anest.cc -std=c++17 -larmadillo
	#$(compiler) $(flag_c) $@ $^ $(flag_w) $(libs)
	#$(compiler) $(flag_w) $^ $(flag_c) $@ $(libs)
	$(compiler) $(flag_w) $^ $(libs) $(flag_c) $@ 	
	#g++ -o anest anest.cc -std=c++17 -DARMA_DONT_USE_WRAPPER -lopenblas -llapack
	echo "Created "$@" from "$^"\nRun "$@" with ./"$@

clean:
	rm anest
