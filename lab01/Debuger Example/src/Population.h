#ifndef POPULATION_H
#define POPULATION_H

#include <vector>

using std::vector;
class Human;

class Population
{
public:
	Population();
	~Population();

	inline void AddHuman(Human* human) { humans_.push_back(human); }
	const Human* GetHighest();
private:
	vector<Human*> humans_; // vector of Human class pointers, representing our population
};


#endif // POPULATION_H


