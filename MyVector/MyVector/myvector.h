#pragma once
#include "container.h"

template<typename T>
class MyVector : public Container
{
private:
	T *vec;

public:
	MyVector()
	{
		size = 0;
		capacity = 1;
		vec = new T[capacity];
	}

	~MyVector()
	{
		//delete[] vec;
	}

	void MyPush_Back(T element)
	{
		if (size == capacity)
		{
			capacity = capacity * 2;
			T *temp = new T[capacity];

			for (int i = 0; i < size; i++)
			{
				temp[i] = vec[i];
			}

			delete[] vec;
			vec = temp;
		}
		vec[size++] = element;
	}

	void MyPop_Back()
	{
		if (size == 0)
		{
			return;
		}

		vec[size--] = '0';
	}

	void MyClear()
	{
		for (int i = size; i > 0; i--)
		{
			vec[i] = '0';
			size--;
		}
	}

	void MyAssign(int amount, T val)
	{
		MyClear();
		for (int i = 0; i < amount; i++)
		{
			MyPush_Back(val);
		}
	}

	T operator[](int index)
	{
		return vec[index];
	}

	T front()
	{
		return vec[0];
	}

	T back()
	{
		return vec[size-1];
	}
};