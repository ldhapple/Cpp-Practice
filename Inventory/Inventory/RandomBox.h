#pragma once
class RandomBox
{
protected:
	int randomNum;
public:
	virtual void Open() = 0;
	virtual ~RandomBox();
};