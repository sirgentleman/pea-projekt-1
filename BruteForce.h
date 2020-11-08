#pragma once

#include <boost/numeric/ublas/matrix.hpp>
#include <deque>

using namespace boost::numeric::ublas;
using namespace std;

class BruteForce
{
public:
	matrix<int> townMatrix;
	deque<int> bestPath;
	int bestCost;

	BruteForce(matrix<int> inputMatrix);
	~BruteForce();

	void findBestPath(deque<int> currentPath, deque<int> indices);
	void startAlgorithm();
	void printQueue(deque<int> input);
	/*
	TODO:
		- rekurencyjnie liczyc permutacje (jako parametry aktualny koszt, aktualna œcie¿ka i dozwolone kolejne miasta)
	*/
};

