#include "BruteForce.h"
#include <iostream>

BruteForce::BruteForce(matrix<int> inputMatrix)
{
	townMatrix = matrix<int>(inputMatrix);
	bestCost = INT_MAX;
}

void BruteForce::findBestPath(deque<int> currentPath, deque<int> indices)
{
	deque<int> tempCurrentPath(currentPath);

	if (indices.size() == 0)
	{
		int tempCost = 0;
		int previousIndex = 0;
		while (!tempCurrentPath.empty())
		{
			tempCost += townMatrix.at_element(tempCurrentPath.back(), previousIndex);
			previousIndex = tempCurrentPath.back();
			tempCurrentPath.pop_back();
		}

		if (tempCost < bestCost)
		{
			bestCost = tempCost;
			bestPath = deque<int>(currentPath);
			bestPath.push_back(0);
		}

		return;
	}

	for (int iii = 0; iii < indices.size(); iii++)
	{
		
		tempCurrentPath.push_back(indices.back());
		//printQueue(tempCurrentPath);
		indices.pop_back();
		findBestPath(tempCurrentPath, indices);
		indices.push_front(tempCurrentPath.back());
		tempCurrentPath.pop_back();

	}

}

void BruteForce::startAlgorithm()
{
	deque<int> temp;

	for (int iii = 1; iii < townMatrix.size1(); iii++)
		temp.push_back(iii);

	findBestPath(deque<int>(1, 0), temp);
	printQueue(bestPath);
	cout << "\nCOST: " << bestCost;
}

void BruteForce::printQueue(deque<int> input)
{
	while (!input.empty())
	{
		cout << input.front() << " ";
		input.pop_front();
	}
	cout << endl;
}
