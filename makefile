anest: anest.cc
#g++ -o anest anest.cc -DARMA_DONT_USE_WRAPPER -lopenblas -llapack
	g++ -o anest anest.cc -larmadillo

clean:
	rm anest
