#include<iostream>
#include<vector>

using namespace std;

void preparq(int, int, int, int, int);
// void nos(int nno, int nnv, vector<double> x);

void nos(int nno, int nnv, vector<double> x, \
vector<double> y, vector<vector<double>> fa, \
vector<vector<int>> d, vector<vector<int>> v, \
vector<int> nv, int gln);
int main(void)
{
	int nno, nel, ngl, nnv, gln, nelt, nelp, \
	nll, ntc = nno = nel = ngl = nnv = gln = nelt \
	= nelp = nll = 0;	

	vector<int> nv, te, nc;

	// Vector 2D
	vector<vector<int>> no, g, v, d, il;
	vector<double> x, y, e, a, iz, ra, fp, f, u, \
	qx, qy;
	// Vector 2D
	vector<vector<double>> fa, sg, esf;

// Read input files

	preparq(nno, nel, ntc, ngl, gln);

// Dimensionar vetores e matrizes
// matrix.resize(M, vector<int>(N, default_value));

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
	
	
	

	

	return 0;
}

void preparq(int nno, int nel, int ntc, int ngl, int gln)
{
	cout<<"Reading input files"<<endl;
}

void nos(int nno, int nnv, vector<double> x, \
vector<double> y, vector<vector<double>> fa, \
vector<vector<int>> d, vector<vector<int>> v, \
vector<int> nv, int gln)
{
	cout<<"Reading nos"<<endl;
} 
