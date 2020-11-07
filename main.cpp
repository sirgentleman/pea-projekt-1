#include "Application.h"

int main()
{
	Application *app = new Application();

	app->loadTestFile("test.txt");
	app->printSavedMatrix();
}