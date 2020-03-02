anest: anest.cc
	#g++ -o anest anest.cc -DARMA_DONT_USE_WRAPPER -lopenblas -llapack
	g++ -o anest anest.cc -std=c++17 -larmadillo
	#g++ -o anest anest.cc -std=c++17 -DARMA_DONT_USE_WRAPPER -lopenblas -llapack

clean:
	rm anest
