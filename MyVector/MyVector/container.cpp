#include "container.h"

int Container:: MySize()
{
	return size;
}

int Container:: MyCapacity()
{
	return capacity;
}

int Container:: MyEmpty()
{
	return size == 0;
}