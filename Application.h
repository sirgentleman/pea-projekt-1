#pragma once
#include <boost/numeric/ublas/matrix.hpp>
#include <deque>
#include "BruteForce.h"

using namespace boost::numeric::ublas;
using namespace std;

class Application
{
	matrix<int> inputMatrix;
	int townAmount;

	BruteForce *bf;

public:

	Application();
	~Application();

	void loadTestFile(string filePath);
	void printSavedMatrix();
	void printQueue(deque<int> input);

};

