#ifndef HUMAN_H
#define HUMAN_H

class Human
{
public:
	explicit Human( unsigned int height);
	~Human();

	inline unsigned  int GetHeight() const { return height_; }
private:
	unsigned int height_;
};


#endif // HUMAN_H

