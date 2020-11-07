#include "Application.h"
#include <fstream>
#include <iostream>

Application::Application()
{

}

void Application::loadTestFile(string filePath)
{
	ifstream testFile(filePath);
	
	if (testFile.is_open())
	{
		string buffer;
		getline(testFile, buffer);
		townAmount = stoi(buffer);
		inputMatrix = matrix<int>(townAmount, townAmount);

		for (int iii = 0; iii < townAmount; iii++)
		{
			for (int jjj = 0; jjj < townAmount; jjj++)
				testFile >> inputMatrix(iii, jjj);
		}
	}
}

void Application::printSavedMatrix()
{
	for (int iii = 0; iii < townAmount; iii++)
	{
		for (int jjj = 0; jjj < townAmount; jjj++)
			cout << inputMatrix(iii, jjj) << " ";
		cout << endl;
	}
}