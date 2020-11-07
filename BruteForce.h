#pragma once

#include <boost/numeric/ublas/matrix.hpp>

class BruteForce
{
	boost::numeric::ublas::matrix<int> townMatrix;
	int* bestPath;
	int bestCost;

	BruteForce(boost::numeric::ublas::matrix<int> inputMatrix);
	~BruteForce();


};

