/**
    anest.cc
    Purpose: Perform the Displacement Method of Analysis
    for structural analysis.

    @author Adolfo Correa
    @version 0.1 02/03/20
*/

#include<iostream>
#include<vector>
#include <armadillo>
#include <fstream>
#include <string>

using namespace std;
using namespace arma;

void preparq(int, int, int, int, int);
// void nos(int nno, int nnv, vector<double> x);

void nos(int nno, int nnv, vector<double> x, \
vector<double> y, vector<vector<double>> fa, \
vector<vector<int>> d, vector<vector<int>> v, \
vector<int> nv, int gln);

void testing_armadillo(void);

int main(int argc, char* argv[])
{
	int nno, nel, ngl, nnv, gln, nelt, nelp, \
	nll, ntc = nno = nel = ngl = nnv = gln = nelt \
	= nelp = nll = 0;	

	vector<int> nv, te, nc;

	/// Vector 2D
	vector<vector<int>> no, g, v, d, il;
	vector<double> x, y, e, a, iz, ra, fp, f, u, \
	qx, qy;
	/// Vector 2D
	vector<vector<double>> fa, sg, esf;

/// Read input files
	preparq(nno, nel, ntc, ngl, gln);

	nno = nel = 4; ntc = 3; gln = 3; ngl = gln * nno;

// Dimensionar vetores e matrizes
// matrix.resize(M, vector<int>(N, default_value));

/**
* \brief Initialize the variables
*/
	d.resize(nno, vector<int>(gln, 0));
	v.resize(nno, vector<int>(gln, 0));
	no.resize(2, vector<int>(nel, 0));
	g.resize(nel, vector<int>(2*gln, 0));
	il.resize(nel, vector<int>(2*gln, 0));

	fa.resize(nno, vector<double>(gln, 0));
	esf.resize(6, vector<double>(nel, 0));
	x.resize(nno, 0);
	y.resize(nno, 0);
	nv.resize(nno, 0);
	te.resize(nel, 0);
	qx.resize(nel, 0);
	qy.resize(nel, 0);
	e.resize(ntc, 0);
	a.resize(ntc, 0);
	iz.resize(ntc, 0);
	fp.resize(nel, 0);
	nc.resize(nel, 0);


//	nos(nno, nnv, x);
	nos(nno, nnv, x, y, fa, d, v, nv, gln);
	
	/// Testing Armadillo library
	testing_armadillo();

	

	return 0;
}

void preparq(int nno, int nel, int ntc, int ngl, int gln)
{
	cout<<"Reading input files"<<endl;
	ifstream file;
	ofstream auxFile;
	string line, filename = "exemplo";
	file.open(filename);
	auxFile.open("anest.dat");

	// Read lines of input file
	for(int i = 0; !file.eof(); i++)
	{
		//file.get(line);	
		getline(file, line);
		cout<<line<<endl;
		if(line.substr(0,1) != ";") auxFile<<line<<endl;
	}

	file.close();
	auxFile.close();

}

/**
 * Read the nodes coordinates of the structure from
 * the input file.
 *
 * @param[in] nno number of nodes
 * @param[in] gln degree of freedom per node
 * @param[out] x x-coordinates of the nodes
 * @param[out] y y-coordinates of the nodes
 */
void nos(int nno, int nnv, vector<double> x, \
vector<double> y, vector<vector<double>> fa, \
vector<vector<int>> d, vector<vector<int>> v, \
vector<int> nv, int gln)
{
	cout<<"Reading nos"<<endl;
} 

/**
 * Create two matrices with random values 
 * and multiply them
 *
 * @param void.
 * @return none, only print on the screen.
 */
void testing_armadillo(void)
{
	cout<<endl<<"Testing armadillo::mat"<<endl<<endl;

	mat A(4, 5, fill::randu); ///< matrix A filled with random unsigned integers
	mat B(4, 5, fill::randn); ///< matrix B filled with randoms integers

	cout<<"A = "<<A<<endl;
	cout<<"B = "<<B<<endl;

	/**
	  \f[
  	    C = A \cross B^T
	  \f]
	*/
	cout<<"A*B.t() = "<<A*B.t()<<endl; ///< Plot the product of the two matrices

}

