#include<iostream>
#include <armadillo>

using namespace std;
using namespace arma;

void testing_armadillo(void);

int main(int argc, char* argv[])
{



	testing_armadillo();



	return 0;
}


void testing_armadillo(void)
{
	cout<<endl<<"Testing armadillo::mat"<<endl<<endl;

	mat A(4, 5, fill::randu);
	mat B(4, 5, fill::randn);

	cout<<"A = "<<A<<endl;
	cout<<"B = "<<B<<endl;

	cout<<"A*B.t() = "<<A*B.t()<<endl;

}

