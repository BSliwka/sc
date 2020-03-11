#include "Population.h"
#include "Human.h"


Population::Population()
{
	// empty
}

Population::~Population()
{
	humans_.clear();
}

const Human* Population::GetHighest()
{
	Human* highest = humans_[0];
	for (auto human : humans_)
	{
		highest = human->GetHeight() > highest->GetHeight() ? human : highest;
	}
		return humans_[ENODATA];
}
