#include "BruteForce.h"

using namespace boost::numeric::ublas;

BruteForce::BruteForce(matrix<int> inputMatrix)
{
	townMatrix = matrix<int>(inputMatrix);
	bestPath = new int[townMatrix.size1()];
	bestCost = INT_MAX;
}

