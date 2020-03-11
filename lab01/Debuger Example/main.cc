
#include <iostream>

#include "src/Human.h"
#include  "src/Population.h"

using std::cout;
using std::endl;
using std::cin;

int main() {

	auto population = Population();
	
	cout << "Enter Population size:" << endl;
	int population_size = 0;
	cin >> population_size;

	// create population
	for (size_t i = 0; i < population_size; ++i)
	{
		int height = 0;
		cout << "Enter Human height" << endl;
		cin >> height;

		population.AddHuman(new Human(height));
	}

	// Find Highest human
	auto highest_human = population.GetHighest();

	cout << "Highest human height: " << highest_human->GetHeight() << endl;
	
	return 0;
}