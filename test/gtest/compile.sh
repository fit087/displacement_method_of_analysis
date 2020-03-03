g++ -c -I /usr/local/include tests.cc
g++ -o tests tests.o -L /usr/local/lib -lgtest -lpthread
./tests

# Reference
# https://gist.github.com/mawenbao/9223908
