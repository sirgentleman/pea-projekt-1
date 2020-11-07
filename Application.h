#pragma once
#include <boost/numeric/ublas/matrix.hpp>

using namespace boost::numeric::ublas;
using namespace std;

class Application
{
	matrix<int> inputMatrix;
	int townAmount;

public:

	Application();
	~Application();

	void loadTestFile(string filePath);
	void printSavedMatrix();

};

